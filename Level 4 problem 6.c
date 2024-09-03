//Get a Two digit number from the user and print the reverse of it.//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a Two digit number:");
    scanf("%d",&x);
    y=(x%10)*10+(x/10)*1;
    printf("Reverse of the number is %d",y);
    return 0;
}
