// printing the context of file in console
// Guruprasath M R

// header files
#include <stdio.h>
#include <string.h>
#include <process.h>

// main function

int main(void)
{
    FILE  *f;
    char c;
    int a, b, cc;

    //   Opening the source file 
    f = fopen("read_c.txt", "a");
    // to check file is in file directory 
    if(f == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }

    fscanf(f, "%d+%d",&a,&b); 
    cc = a + b;
    fprintf(f," =%d", cc);

    return 0;
}