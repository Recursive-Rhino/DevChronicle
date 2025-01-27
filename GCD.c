#include <stdio.h>
int gcd(int,int);//GLOBAL DECLARATION OF U.D.FUNCTION
int main()
{
   int num1,num2;//VARIABLE DECLARATION
   printf("enter the number 1 : ");
   scanf("%d",&num1);
   printf("enter the number 2 : ");
   scanf("%d",&num2);
    int ans=gcd(num1,num2);//FUNCTION CALLING AND ANS STORING
    printf("GCD IS %d",ans);
    return 0;
}
int gcd(int n1,int n2) {
    if(n1>n2) {
        return n1-=n2;
    } else if(n2>n1) {
        return n2-=n1;
    } else {
        return n2;
    }
}