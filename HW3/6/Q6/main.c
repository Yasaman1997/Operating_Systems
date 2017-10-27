#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int count =0 ;

void killhandler(int sig)
{printf("SIGKILL received\n");
return;
}

void childhandler(int dig)
{
  int status;
  wait(&status)
  count+=WEXITSTATUS(status);
  return;
}
int main(int argc, char *argv[]) {
  int i;
  pid_t pid[5];
  Signal(SIGKILL,killhandler);
  Signal(SIGCHLD,childhandler);
  //fork 3 child processes
  for(i=0;i<5;i++)
  {
    pid[i]=fork();
    if(!pid[i])
    {
      Signal(SIGKILL,SIG_DFL);
      exit(5);
    }

  }

  //parent process only
    for(i=0;i<5;i++)
    {
      kill(pid[i],SIGKILL);
    }
    sleep(5);
    printf("count=%d\n",count);
    exit(0);

}
