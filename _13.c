// to check simple interest

#include<stdio.h>
#include<conio.h>
int main(){
    int p,r,t;
    // clrscr();
    printf("enter principle  : ");
    scanf("%d",&p);
    
    printf("enter rate of interest  : ");
    scanf("%d",&r);

    printf("enter time  : ");
    scanf("%d",&t);
    
    printf("simple interest %.2f", p*r*t/100.0);
    getch();
    return 0;
}