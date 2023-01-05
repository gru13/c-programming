//  find the factorial
#include<stdio.h>
#include<conio.h>
int main(){
    int n, fact = 1;
    // clrscr();
    printf("enter number  : ");
    scanf("%d",&n);
    // for (int i=1 ; i <= n ;i++){
    //     fact *= i;
    // }

    while(n>0){
        fact*=n;
        n -= 1;
        }
    printf("the factorial of %d is %d", n, fact);
    getch();
    return 0;
}