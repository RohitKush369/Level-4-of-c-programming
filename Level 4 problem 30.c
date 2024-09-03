//Print the Largest eight-digit prime number.//
#include<stdio.h>
int main()
{
    int i,j;
    int isPrime;
    for(i=99999999;i>10000000;i--){
            isPrime=1;
    for(j=2;j*j<=i;j++){
        if(i%j==0){
            isPrime=0;
            break;
        }
    }
    if(isPrime){
        printf(" Eight digits largest prime number is %d",i);
        break;
    }
    }
    return 0;
}
