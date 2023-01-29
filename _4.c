// multiplication table for 9
// Guruprasath M R

// header files
#include <stdio.h>
#include <string.h>
#include <process.h>

// main function

int main(void)
{
    FILE  *f;
    char c ;
    char s[100] = "";
    
    int n,a  = 9; 
    //   Opening the source file 
    f = fopen("multi.txt", "w");
    // to check file is in file directory 
    if(f == NULL){
        printf("Source file doesn't exist");
        exit(1);
    }

    for(int i = 1;i <= 10;i++){ 
        fprintf(f, "%d x %d = %d\n", a, i , a*i);
    }
    
    return 0;
}