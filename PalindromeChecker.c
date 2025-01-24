//NUMBER PALINDROME CHECKER
#include <stdio.h>
void main() {
    int num,rem,digit=0,numCopy;
    printf("enter the  number to check whether it is palindrome or not :");
    scanf("%d",&num);
    numCopy=num;
    while(numCopy>0) {
        rem=numCopy%10;
        digit=digit*10+rem;
        numCopy=numCopy/10;
    }
    if(digit==num) {
        printf("your entered number is a palindrome...");
    } else {
        printf("no it is not a palindrome .... ");
    }
}