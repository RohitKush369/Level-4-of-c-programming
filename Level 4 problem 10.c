//Get a Three digit number from the user and print the sum of all digits.//
#include<stdio.h>
int main(){
int x,y;
printf("Enter a three digit number:");
scanf("%d",&x);
y=(x%10)+(x/10%10)+(x/100);
printf("Sum of all digits is %d",y);
return 0;
}
