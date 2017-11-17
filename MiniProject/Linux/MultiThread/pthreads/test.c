#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>


struct thread_data{
    FILE *file;
    long int offset;
    int start;
    int blockSize;
};

int words=0;

void *countFrequency(void* data){

    struct thread_data* td =data ;


    char *buffer = malloc(td->blockSize);

    int i,charcter;
    i=0;charcter=0;
    enum states { WHITESPACE, WORD };
    int state = WHITESPACE;

    fseek(td->file, td->offset, td->start);

    char last = ' ';
    while ((fread(buffer, td->blockSize, 1, td->file))==1){

        if ( buffer[0]== ' ' || buffer[0] == '\t'  ){
            state = WHITESPACE;
        }
        else if (buffer[0]=='\n'){
            state = WHITESPACE;
        }
        else {
            if ( state == WHITESPACE ){
                words++;
            }
            state = WORD;
        }
        last = buffer[0];
    }
    free(buffer);

    pthread_exit(NULL);

    return NULL;
}

int main(int argc, char **argv) {




    int nthreads, id, blockSize,len;
    FILE *file;
    pthread_t *threads;
    file=fopen("test.txt","r");

   /* if (argc < 2){
        fprintf(stderr, "Usage: ./a.out <file_path>");
        exit(-1);
    }
*/

  /* if((file=fopen("test.txt","r"))==NULL){
        printf("Error opening file");
        exit(-1);
    }
*/
    printf("Enter the number of threads: ");
    scanf("%d",&nthreads);

    struct thread_data data[nthreads];
    threads = malloc(nthreads*sizeof(pthread_t));

    fseek(file, 0, SEEK_END);
    len = ftell(file);
    printf("len= %d\n",len);

    blockSize=(len+nthreads-1)/nthreads;
    printf("size= %d\n",blockSize);

    for(id = 0; id < nthreads; id++){

        data[id].file=file;
        data[id].offset = blockSize;
        data[id].start = id*blockSize+1;

    }

    data[nthreads-1].start=(nthreads-1)*blockSize+1;

    for(id = 0; id < nthreads; id++)
        pthread_create(&threads[id], NULL, &countFrequency,&data[id]);

    for(id = 0; id < nthreads; id++)
        pthread_join(threads[id],NULL);

    fclose(file);

    printf("%d\n",words);
    return 0;
}


