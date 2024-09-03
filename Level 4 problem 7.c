//Get a Three digit number from the user and print the reverse of it.//
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a three digit number:");
    scanf("%d",&x);
    y=(x%10)*100+(x/10%10)*10+(x/100)*1;
    printf("reverse of the number is %d",y);
    return 0;
}
