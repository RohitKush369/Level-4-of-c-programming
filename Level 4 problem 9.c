//Get a Two digit number from the user and print the sum of all digits.//
#include<stdio.h>
int main(){

int x,y;
printf("Enter a Two digit number:");
scanf("%d",&x);
y=x%10+x/10;
printf("sum of digits is %d",y);
return 0;
}
