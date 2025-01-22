#include<stdio.h>
void main() 
{
 int num1,num2,num3,ans;
 printf("enter the number 1 : ");
 scanf("%d",&num1);
 printf("enter the number 2 : ");
 scanf("%d",&num2);
 printf("enter the number 3 : ");
 scanf("%d",&num3);
 if(num1>num2&&num1>num3) {
    ans=1; 
 } else if(num2>num1&&num2>num3) {
    ans=2;
 } else {
    ans=3; 
 }
 switch(ans) {
    case 1: 
    printf("number 1 is greater then those");
    break;
    case 2 :
    printf("number 2 is greater then those ");
    break;
    case 3 :
    printf("number 3 is greater then those ");
    break;
 }
}