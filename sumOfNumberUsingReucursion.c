//sum of number Using Reucursion
#include <stdio.h>
int sum(int);
int main()
{
    int num;
    printf("enter the number :");
    scanf("%d",&num);
    int ans=sum(num);
    printf("your sum is %d ",ans);
    return 0;
}
int sum(int n) {
    if(n==1) {
        return 1;
    } else if(n==0) {
        return 0;
    } else {
        return n + sum(n-1);
    }
}