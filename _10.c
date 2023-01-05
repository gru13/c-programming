#include<stdio.h>
#include<conio.h>
int main(){
    int a,b;
    // clrscr();
    printf("enter a  : ");
    scanf("%d",&a);
    
    printf("enter b  : ");
    scanf("%d",&b);
    
    printf("A² + B² + 2AB is %d",(a+b)*(a+b));
    getch();
    return 0;
}