#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=x/10%10;
    printf(" The digit in Tens position is %d",y);
    return 0;
}
