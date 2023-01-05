#include<stdio.h>
#include<conio.h>
int main(){
    int n, temp, f0 = 0, f1 = 1;
    //clrscr();
    printf("enter value n : ");
    scanf("%d",&n);
    printf("First %d Fibonacci number :\n ", n);
    while (n--)
    {
        printf("%d ",f0);
        temp = f0+f1;
        f0 = f1;
        f1 = temp;

    }
    getch();
    return 0;
}