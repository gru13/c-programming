//  case operand and choice
#include<stdio.h>
#include<conio.h>
int main(){
    int a,b,choice;
    float sum, avg;
    // clrscr();
    while(1){
        printf("enter choice 1~5 [1 -> + , 2 -> -, 3 -> *,4 -> /, 5 -> exit]  : ");
        scanf("%d",&choice);
        if(choice == 5){
            break;
        }
        printf("enter a  : ");
        scanf("%d",&a);
        printf("enter b  : ");
        scanf("%d",&b);
        switch (choice)
        {
            case 1:
                printf("%d+%d->%d\n",a,b,a+b);
                break;
            case 2:
                printf("%d-%d->%d\n",a,b,a-b);
                break;
            case 3:
                printf("%d*%d->%d\n",a,b,a*b);
                break;
            case 4:
                printf("%d/%d->%.2f\n",a,b,(float)a/b);
                break;
            
            default:
                printf("Enter valid choice\n");
                break;
        }
    }
    getch();
    return 0;
}