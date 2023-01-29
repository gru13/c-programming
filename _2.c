// merging 2 files in one text file to another
// Guruprasath M R

// header files
#include <stdio.h>
#include <string.h>
#include <process.h>

// main function

int main(void)
{
    FILE  *f1, *f2, *f3;
    char c;

    //   Opening the source file 
    f1 = fopen("test.txt", "r");
    // to check file is in file directory 
    if(f1 == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }

    //  Opening the source file
    f2 = fopen("test1.txt", "r");
    // to check file is in file directory 
    if(f2 == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }

    f3 = fopen("test2.txt", "w");
    // to check file is in file directory 
    if(f2 == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }
    
    c = fgetc(f1);
    while (c!=EOF)
    {
        fputc(c, f3);
        c = fgetc(f1);
    }

    fputc('\n', f3);

    c = fgetc(f2);
    while (c!=EOF)
    {
        fputc(c, f3);
        c = fgetc(f2);
    }

    printf("file successfully merged");
    return 0;
}

