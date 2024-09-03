//Get 2 numbers from user and find the LCM of them.//
#include<stdio.h>
int main()
{
    int i,num1,num2,lcm;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);
    for(i=1;i<=num1*num2;i++){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            break;
        }
    }
    printf("LCM of two numbers %d and %d is %d",num1,num2,lcm);
    return 0;
}
