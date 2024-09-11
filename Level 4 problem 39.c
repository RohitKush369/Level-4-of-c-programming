//Get a number as String and print the integer value of the string.//
#include<stdio.h>
int main()
{
    int i,num;
char a[50];
    i=0;
    num=0;
    printf("Enter a number as a string:");
    scanf("%s",a);
    while(a[i]!=0){            // '/0' is an null character whose ASCII value is 0.//
        num=num*10+(a[i]-48); // 48 is the ASCII value of 0.//
        i++;
    }
    printf("Entered number is %d",num);
    return 0;
}
