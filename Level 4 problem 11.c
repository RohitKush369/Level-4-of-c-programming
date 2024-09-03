//Get a Four digit number from the user and print the sum of all digits.//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a four digit number:");
    scanf("%d",&x);
    y=(x%10)+(x/10%10)+(x/100%10)+(x/1000);
    printf("sum of the digits is %d",y);
    return 0;
}
