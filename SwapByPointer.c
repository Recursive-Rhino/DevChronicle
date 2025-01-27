//SWAPING OF TWO NUMBER USING CALL BY REFERENCE METHOD
#include<stdio.h>
void swap(int*,int*);//GLOBAL DECLARATION CONTAING POINTER AS PARAMETER
int temp;//for swapping
void main() {
   int A, B;
   printf("enter the number 1 : ");
   scanf("%d",&A);
   printf("enter the number  2 : ");
    scanf("%d",&B);
    printf("BEFORE SWAPPING A = %d,B= %d\n",A,B);
    swap(&A,&B);//PASSED THE ADRESS BY '&'
    printf("AFTER SWAPPING A = %d, B = %d",A,B);
}
void swap(int *n1,int *n2) {//pointer store the adress of a variable
    temp=*n1;//here '*' is the de-referencing operator
    *n1=*n2;
    *n2=temp;
}