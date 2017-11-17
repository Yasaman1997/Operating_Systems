/*************************************************
 * C program to count no of lines, words in a file.			 *
 *************************************************/

#include <stdio.h>

int main()
{
    FILE *file;
    char filename[100];
    char ch;
    int  wordcount, charcount;

    // Initialize counter variables
    wordcount = 0;
    charcount = 0;

    // Prompt user to enter filename
    printf("Enter a filename :");
    gets(filename);

    // Open file in read-only mode
    file = fopen(filename,"r");

    // If file opened successfully, then write the string to file
    if ( file )
    {
        //Repeat until End Of File character is reached.
        while ((ch=getc(file)) != EOF) {
            // Increment character count if NOT new line or space
            if (ch != ' ' && ch != '\n') { ++charcount; }

            // Increment word count if new line or space character
            if (ch == ' ' || ch == '\n') { ++wordcount; }





        }


    }
    else
    {
        printf("Failed to open the file\n");
    }


    printf("Words : %d \n", wordcount);
    printf("Characters : %d \n", charcount);

    getchar();
    return(0);
}