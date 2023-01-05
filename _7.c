//  the sum and avg of 3 number
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,c;
    float sum, avg;
    // clrscr();
    printf("enter a  : ");
    scanf("%d",&a);
    printf("enter b  : ");
    scanf("%d",&b);
    printf("enter c  : ");
    scanf("%d",&c);
    
    sum = a+b+c;
    avg = sum /3;
    printf("The sum of %d, %d, %d is %.2f and average is %.2f", a, b, c, sum, avg);
    getch();
    return 0;
}