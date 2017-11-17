#include <stdio.h>
#include <stdlib.h>
int main() {
    printf("Hello, World!\n");
    FILE *file;

    if(file = fopen("test.txt", "r")!=NULL)
        printf("t");
    return 0;
}
