//Get a Three digit number from user and print the digit in "Hundreds" position.//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=x/100;
    printf("The digit in Hundreds position is %d",y);
    return 0;

}
