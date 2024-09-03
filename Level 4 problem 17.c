//Write a program to print the sum of all single digit odd numbers.//
#include<stdio.h>
int main()
{
    int i,count=0,sum=0;
    for(i=1;i<10;i++){
        if(i%2!=0){
        sum=sum+i;
    }
    }
    printf("%d",sum);
    return 0;
}
