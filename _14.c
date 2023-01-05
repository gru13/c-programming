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
    case 15:
        for(int i = 1; i<=15; i++){
            printf("%d\n",i*i*i);
        }
        break;
    case 10:
        for(int i = 1; i<=10; i++){
            printf("%d\n",i*i*i);
        }
        break;
    case 5:
        for(int i = 1; i<=5; i++){
            printf("%d\n",i*i*i);
        }
        break;
    default:
        printf("invalid input");
    }
    getch();
    return 0;
}