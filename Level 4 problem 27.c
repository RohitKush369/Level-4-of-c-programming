//Print the largest Three digit prime number.//
#include<stdio.h>
int main()
{
    int i,j;
    int isPrime;
    for(i=999;i>100;i--){
        isPrime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
        printf("Three digits largest prime number is %d",i);
        break;
        }
    }
    return 0;
}
