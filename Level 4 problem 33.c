//Print the total number of non-decreasing numbers from 1000 to 9999.//
#include<stdio.h>
int main()
{
    int i,j,count=0;
    for(i=1000;i<=9999;i++){
        if(i==i+j){
            count++;
        }
    }
    printf("%d",count);
}
