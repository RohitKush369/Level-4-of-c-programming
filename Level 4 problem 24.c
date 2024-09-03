//Program to print the sum of all TWO digit Prime numbers.//
#include<stdio.h>
int main()
{
  int i, j,sum=0;
  for(i=10;i<100;i++) {
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
