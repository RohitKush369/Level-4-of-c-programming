//write a program to print the total number of THREE digit odd numbers.//
#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=100;i<1000;i++){
        if(i%2!=0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
