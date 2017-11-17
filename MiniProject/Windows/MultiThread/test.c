//
// Created by yasaman on 11/16/17.
//

#include<stdio.h>
#include<windows.h>
#include<ctype.h>
#include<tchar.h>
#include<strsafe.h>
#include<conio.h>


#define threads 2
#define MAX 100




//structs for holding word buffer and thread information
typedef struct partitions {
    int partStart;
    int ID;
    int result;
    char buffer2[MAX];


};
//array of structs to be used on different threads
struct partitions globals[threads];




//the word counting thread
DWORD WINAPI ThreadProc(LPVOID lpParam){
int count = 0;
//set working struct and part of buffer where search for words starts
struct partitions *temp = (struct partitions *)lpParam;
count = globals[temp->ID].partStart;
//algorithm for finding words based on spaces
while (temp->buffer2[count] != '!' && temp->buffer2[count] != '\0') {


if (temp->buffer2[count] == ' ' || temp->buffer2[count] == '\t' || temp->buffer2[count] == '\n'){
globals[temp->ID].result += 1;
}
count++;


}


return 0;
}




int main(int argc, char *argv[]) {


    FILE *open;
    open = fopen(argv[1], "r");
    DWORD ThreadId[threads];
    HANDLE hThread[threads];


    char buffer[MAX] = { 0 };
    buffer[100] = '!';


    for (int i = 0; i < threads; i++){
        globals[i].partStart = 0;
        globals[i].result = 0;
        globals[i].ID = i;


    }


    int c;
    int finalCount = 0;
    //check if first character is a word and increase count
    c = getc(open);
    if (!isspace(c)){ finalCount = 1; }
    rewind(open);


    //enter loop for buffering file characters into buffer
    while ((c = getc(open)) != EOF) {
        memset(buffer, 0, MAX);
        for (int i = 0; i < MAX; i++){
            //set nonword character for threads to stop at
            if (i == 49 || i == 99){ buffer[i] = '!'; }
            if (i != 49 && i != 99){ buffer[i] = c; }
            if ((c = getc(open)) != EOF){}
            else break;
        }
        //store buffer into working structs
        for (int i = 0; i < threads; i++){
            for (int j = 0; j < MAX; j++){
                globals[i].buffer2[j] = buffer[j];
            }
        }
        //start threads
        for (int i = 0; i < threads; i++){
            hThread[i] = CreateThread(
                    NULL,
                    0,
                    ThreadProc,
                    &globals[i],
                    0,
                    &ThreadId[i]);
            if (globals[i + 1].partStart == 0){
                globals[i + 1].partStart += (100 / threads) * (i+1);
            }


        }


        for (int i = 0; i < threads; i++){
            WaitForSingleObject(hThread[i], INFINITE);
        }


        for (int i = 0; i < threads; i++){
            globals[i].partStart = 0;
        }
    }


    for (int i = 0; i < threads; i++){
        CloseHandle(hThread[i]);
    }


    for (int i = 0; i < threads; i++){
        finalCount += globals[i].result;
    }
    fclose(open);
    printf("%d", finalCount);


    return 0;
}