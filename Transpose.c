//Transpose of a Square matrix
//Square matrix mean Rows= coloumn
#include <stdio.h>
int main(){
    int mat[3][3],i,j;
    int transpose[3][3]={0};
    printf("enter the numbers to store : \n");
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
        printf("enter the element of [%d]x[%d] : ",i+1,j+1);    
        scanf("%d",&mat[i][j]); 
        }
    }
    printf("\n");
    printf("original Matrix is : \n");
    printf("\n");
    for(i=0;i<3;i++) { 
        for(j=0;j<3;j++) {
        printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
        transpose[i][j]=mat[j][i];
        }
    }  
    printf("Transpose matrix is : \n");
    printf("\n");
    for(i=0;i<3;i++) { 
        for(j=0;j<3;j++) {
        printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    
}