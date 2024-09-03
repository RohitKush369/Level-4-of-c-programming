//Get a number from the user and print the sum of all digits.//
#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x!=0){
        y=x%10;
        sum=sum+y;
        x=x/10;
    }
    printf("%d",sum);
    return 0;
}
