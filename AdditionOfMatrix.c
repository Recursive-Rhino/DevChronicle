//ADDITION OF TWO MATRIX 
#include <stdio.h>
int main()
{
    int mat1[3][3],mat2[3][3],add[3][3]={0},i,j;
    printf("enter the number into the element\n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("ENTER THE ELEMENT OF [%d][%d] :",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("ENTER THE ELEMENT OF [%d][%d] : ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            add[i][j]+=mat1[i][j]+mat2[i][j];
        }
    }
    printf("HERE IS YOUR ADDITION MATRIX : \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            printf("%d\t",add[i][j]);
        }
        printf("\n");
    }
    return 0;
}