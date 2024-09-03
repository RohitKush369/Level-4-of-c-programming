//Get a Two digit number from user and print the digit in "Tens" position.//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Two digit number:");
    scanf("%d",&x);
    y=x/10;
    printf("  The digit in Tens position is %d",y);
    return 0;
}
