//Fibbonacci Series (without using recursion)
#include <stdio.h> 
void main() {
    int num,i,temp;
    printf("enter the number upto which Fibbonacci series will print : ");
    scanf("%d",&num);
    int nm1=-1,nm2=1,sum;
    for(i=0;i<num;i++) {
        sum=nm1+nm2;
        printf("%d\t",sum);
        temp=nm1;
        nm1=nm2;
        nm2=sum;
        sum=0;
    }
    
}