//Write a program to print the sum of all THREE digit odd numbers.//
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100;i<1000;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
        printf("%d",sum);
        return 0;
}
