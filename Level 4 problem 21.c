//Write a program to print the total number of TWO digit Prime numbers.
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=10;i<100;i++){
        int isPrime=1;// Assuming  the number is prime.//
    for(j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=0;// Number is not prime.//
            break;
        }
       }
       if(isPrime==1){
        count++;
       }
    }
    printf("%d",count);
    return 0;
}
