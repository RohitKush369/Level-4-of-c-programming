//Program to Print the sum of all THREE digit Prime numbers.//
#include<stdio.h>
int main()
{
    int i,j,sum=0;
    for(i=100;i<1000;i++){
        int isPrime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
