//Write a program to print the total number of single digit Prime numbers //Assume 0 & 1 are not Prime.//
#include<stdio.h>
int main()
{
    int i,count=0;
    for(i=2;i<10;i++){
        if(i==2|| i==3 || i==5|| i==7){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
