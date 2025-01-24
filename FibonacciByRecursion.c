//Fibonacci Using Recursion
#include <stdio.h>
int Fibo(int);
void main() {
    int num,i;
    printf("enter the number of digit Fibonacci Series will Print : ");
    scanf("%d",&num);
    for(i=0;i<=num;i++) {
        printf("%d\t",Fibo(i));
    }
}
int Fibo(int n) {
    if(n==0) {
        return 0;
    } else if(n==1) {
        return 1;
    } else {
        return Fibo(n-1)+Fibo(n-2);
    }
}