//Get a Three digit number from user and print the digit in "Ones" position.//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=x%10;
    printf("The digit in Ones position is %d",y);
    return 0;
}
