//Print the total number of all Palindrome numbers less than 100000.//
#include<stdio.h>
int main()
{
    int i,x,count=0;
    for (i =0;i < 100000; i++)
    {
        x=i;
        int reverse=0;
        while(x>0)
        {
            reverse=reverse*10+(x%10);
            x/=10;
        }
        if(i==reverse){

         count++;
        }
    }
    printf("total number of all Palindrome numbers less than 100000 is %d",count);
    return 0;
}
