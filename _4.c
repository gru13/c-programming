//  even or odd
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    // clrscr();
    printf("enter number  : ");
    scanf("%d",&n);
    if (n%2==0) printf("Yes the number %d is even",n);
    else printf("No the number %d is odd",n);
    getch();
    return 0;
}