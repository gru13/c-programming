// to check the number is prime number or not
#include <stdio.h>
#include <conio.h>

int main(void)
{
    int number, factors;
    // clrscr();
    printf("enter the number : ");
    scanf("%d", &number);
    factors  = 0;
    for(int i =1 ; i<=number;i++){
        if (number % i == 0){
            factors++;
        }
    }
    if(factors == 2){
        printf("The number you entered is prime number");
    }
    else{
        printf("The number you entered is not prime number");
    }
    getch();
    return 0;
}