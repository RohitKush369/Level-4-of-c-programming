//Write a program to multiply up to two 50 digit numbers.//
#include<stdio.h>
int main()
{
    int num1[50];
    int num2[50];
    int result[50];
    int i=0;
    printf("Enter the first number: ");
    scanf("%d",&num1[i]);
    printf("Enter the second number: ");
    scanf("%d",&num2[i]);
    result[i]=num1[i]*num2[i];
    printf("%d",result[i]);
    return 0;
}
