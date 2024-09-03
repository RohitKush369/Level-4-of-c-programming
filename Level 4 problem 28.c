//Print the Smallest Four digit prime number.//
#include<stdio.h>
int main()
{
    int i,j;
    int isPrime;
    for(i=1000;i<10000;i++){
        isPrime=1;
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime){
        printf(" Four digits smallest prime number is %d",i);
        break;
        }
    }
    return 0;
}
