//  call by reference
#include<stdio.h>

void swap(int *n1, int *n2)
{
  int temp = *n1;
  *n1 = *n2;
  *n2 = temp;
}
int main() {
    int x, y ;
    printf("Enter values for x , y : ");
    scanf("%d %d", &x, &y);

    printf("The numbers before swapping x and y %d %d \n",x, y);
    swap(&x, &y);
    printf("The numbers after swapping x and y %d %d \n",x, y);
    
    return 0; 
}