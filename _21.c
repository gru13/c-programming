// Add 2 matrix
#include<stdio.h>
#include<conio.h>

int main(){
    int r1,c1,r2,c2,i,j,k;
    printf("Enter Number of row mat 1:");
    scanf("%d", &r1);
    printf("Enter Number of column mat 1:");
    scanf("%d", &c1);
    printf("Enter Number of row for mat 2 :");
    scanf("%d", &r2);
    printf("Enter Number of column for mat 2 :");
    scanf("%d", &c2);
    if (c1 != r2) {
        printf("We can't multiply matrix both");
        return 0;
    } 
    int a[r1][c1],b[r1][c2],p[r1][c2];
//  getting of 2 matrix
    for(i=0; i<r1;i++){
        for(j=0;j<c1;j++){
            printf("element A %d%d : ", i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0; i<r2;i++){
        for(j=0;j<c2;j++){
            printf("element B %d%d : ", i,j);
            scanf("%d",&b[i][j]);
        }
    }

//  multiply 2 matrix
    for(i = 0;i<r1;i++){
        for(j = 0;j<c2;j++){
            p[i][j] = 0;
            for(k = 0;k<c1;k++){
                p[i][j] += a[i][k]*b[k][j];
            }
        }
    }
// displaying matrix
for(i = 0;i < r1;i++ ){
    for(j =0; j<c2;j++){
        printf("%d\t",p[i][j]);
    }
    printf("\n");
}
}

