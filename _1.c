#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    // clrscr();
    printf("enter year : ");
    scanf("%d",&year);
    // to check leap years
    if(year%4==0 && (year%100!=0 || year%400==0) ){
        printf("YES, %d is a leap year\n",year);
    }
    else printf("NO %d is not a leap year\n",year);
    getch();
    return 0;
}