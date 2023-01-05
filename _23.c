//  add 2 number using pointer

#include<stdio.h>
#include<conio.h>

int main(){
    int a , b, c;
    printf("enter the value for a b:");
    scanf("%d %d", &a ,&b);
    int *ap = &a;
    int *bp = &b;
    int *cp = &c;
    *cp =*ap+*bp;
    printf("%d",c);
    return 0;
}