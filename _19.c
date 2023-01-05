// Add 2 matrix
#include<stdio.h>
#include<conio.h>

int main(){
    int r,c,i,j;
    printf("Enter Number of row :");
    scanf("%d", &r);
    printf("Enter Number of column :");
    scanf("%d", &c);
    int a[r][c],b[r][c],s[r][c];
    for(i=0; i<r;i++){
        for(j=0;j<c;j++){
            printf("element A %d%d : ", i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<r;i++){
        for(j=0;j<c;j++){
            printf("element B %d%d : ", i,j);
            scanf("%d",&b[i][j]);
            s[i][j] = a[i][j]+b[i][j];
        }
    }
    for(i=0; i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t", s[i][j]);
        }
    printf("\n");
    }

}

