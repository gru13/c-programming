// Celsius  to fahrenheit 
#include<stdio.h>
#include<conio.h>
int main(){
    int c;
    float f;
    // clrscr();
    printf("enter number  : ");
    scanf("%d",&c);
    f = c*1.8 + 32;
    printf("the celsius %d is convert is %f Fahrenheit",c,f);
    getch();
    return 0;
}