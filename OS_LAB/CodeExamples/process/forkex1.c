//
// Created by Meraj
// on 10/31/17.
//
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
    pid_t child_pid;

//    printf("the main program process ID is %d\n", (int) getpid());
    int a = 2;

    child_pid = fork();
    if (child_pid != 0) {
        a = 3;
        printf("this is the parent process, with id %d\n", (int) getpid());
        printf("the child's process ID is %d\n", (int) child_pid);
    } else
        printf("this is the child process, with id %d\n", (int) getpid());

    printf("hello %d!\n", a);


    return 0;
}