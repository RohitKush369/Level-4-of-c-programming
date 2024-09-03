//Get a number from the user and print the reverse of it.//
#include<stdio.h>
int main()
{
    int x,y,reverse=0;
    printf("Enter a number:");
    scanf("%d",&x);
    while(x!=0){
      y=x%10;
    reverse=(reverse*10)+y;
    x/=10;
    }
    printf("%d",reverse);
   return 0;
}
