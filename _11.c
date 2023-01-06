#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,x;
    // clrscr();
    printf("enter a  : ");
    scanf("%d",&a);
    
    printf("enter b  : ");
    scanf("%d",&b);

    printf("enter x  : ");
    scanf("%d",&x);
    
    printf("(Ax+B)/(Ax-B) -> %f",(float)(a*x+b)/(a*x-b));
    getch();
    return 0;
}