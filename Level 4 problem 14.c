//Write a program to print the total number of single digit odd numbers.//
#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=1;i<10;i++){
    //if(i%2!=0)//
    if(i==1||i==3||i==5||i==7||i==9){
        count++;
    }
    }
    printf("%d",count);
    return 0;

}
