#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    clrscr();
    printf("enter number  : ");
    scanf("%d",&n);
    if (n%5==0) printf("Yes the number(%d) is divisible by 5",n);
    else printf("No the number(%d) is divisible by 5",n);
    getch();
    return 0;
}