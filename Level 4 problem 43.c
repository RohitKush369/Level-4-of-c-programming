//Get a String of numbers up to 50 digits and validate the number.// 123445 is valid and 14as4df is invalid number.//
#include<stdio.h>
int main()
{
    int i;
    char string[50];
    printf("Enter the Number: ");
    scanf("%s",string);
    i=0;
    while(string[i]!=0)
    {
        if((string[i]<48) || (string[i]>57)) // here we are checking from 0 to 9 //
        {
            printf("Number is invalid");
            return 0;
        }
        i++;
    }
    printf("Number is valid");
}
