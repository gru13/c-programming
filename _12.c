// to check eligibility to vote
#include<stdio.h>
#include<conio.h>
int main(){
    int age;
    // clrscr();
    printf("enter age  : ");
    scanf("%d",&age);
    if (age >=18) printf("Yes he/she is eligible to vote");
    else printf("NO he/she is not eligible to vote");
    getch();
    return 0;
}