/*
 ============================================================================
 Name        : OS_HW3_Q7.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : HW3_OS_Q7.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define NUM_FORKS 6

char array[NUM_FORKS+2];
int pos =0;
char outs[9]={'1','1','8','5','2','2','4','1','3'};

void work(void* id)
{
  int index=(*((int*)id))*2;
  char writeMe = outs[index];
  array[pos ++]=writeMe;
}




    int main(void) {
      char three='3';
      int i;
      int pid[NUM_FORKS];

      for(i=0;i<NUM_FORKS;i++)
      {
        if(pid[i]=fork())
        {
          work((void*)(&i));
          exit(0);
        }

        waitpid(pid[i],NULL,0);
      }
      array[pos ++]= three;
      array[pos]='\0';
      printf("%s",array);
      exit(0);
    }
