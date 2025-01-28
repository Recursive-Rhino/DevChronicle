#include <stdio.h>
#include <math.h>
int main()
{
int num,count,numcopy,temp,ans=0,sum;
printf("ENTER A NUMBER TO CHECK WHETHER IT IS A ARMSTRONG OR NOT : ");
scanf("%d",&num);
numcopy=num;// PASSED THE NUMBER COPIES
temp=numcopy;// PASSED THE NUMBER COPIES
while(numcopy>0) { //COUNTED THE DIGIT IN THE NUMBER 
    numcopy/=10;
    count++;
}
while(temp>0) {  // MAIN LOGIC
    sum=temp%10;
    ans=ans+pow(sum,count);
    temp=temp/10;
}
if(ans==num) {
    printf("\nYES, THIS IS A ARMSTRONG NUMBER...");
} else {
    printf("\nNO, THIS IS NOT A ARMSTRONG NUMBER ...");
}
    return 0;
}