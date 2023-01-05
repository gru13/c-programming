//  to print cube of number
#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    // clrscr();
    printf("enter number  : ");
    scanf("%d",&n);
    // printf("cube of the %d is %d", n, n*n*n);
    switch (n)
    {
    case 5:
        printf("%d\n",5*5*5);
    case 4:
        printf("%d\n",4*4*4);
    case 3:
        printf("%d\n",3*3*3);
    case 2:
        printf("%d\n",2*2*2);
    case 1:
        printf("%d\n",1*1*1);
        break;
    default:
        printf("en");
    }
    getch();
    return 0;
}