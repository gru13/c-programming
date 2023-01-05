//  Multiplication table
#include<stdio.h>
#include<conio.h>
int main(){
    int number;
    // clrscr();
    printf("enter number : ");
    scanf("%d",&number);
    for(int i = 1; i<=10;i++){
        printf("%d X %d = %d\n", number, i , number*i);    
    }
    getch();
    return 0;
}