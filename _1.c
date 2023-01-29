// copying files in one text file to another
// Guruprasath M R

// header files
#include <stdio.h>
#include <string.h>
#include <process.h>

// main function

int main(void)
{
    FILE  *f1, *f2;
    char c;

    //   Opening the source file 
    f1 = fopen("test.txt", "r");
    // to check file is in file directory 
    if(f1 == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }

    //  Opening the destination file
    f2 = fopen("test1.txt", "w");
    // to check file is in file directory 
    if(f2 == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }

    
    c = fgetc(f1);
    while (c!=EOF)
    {
        fputc(c, f2);
        c = fgetc(f1);
    }


    printf("file successfully copied");
    return 0;
}

