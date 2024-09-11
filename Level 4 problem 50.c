//Get two numbers of up to 50 digits and perform addition and print the result.//

#include<stdio.h>
int main(){
int num1[50];
int num2[50];
int sum[50];
int i=0;
printf("Enter the first number:");
scanf("%d",&num1[i]);
printf("Enter the second number:");
scanf("%d",&num2[i]);
sum[i]=num1[i]+num2[i];
printf(" The sum is:%d",sum[i]);
return 0;
}
