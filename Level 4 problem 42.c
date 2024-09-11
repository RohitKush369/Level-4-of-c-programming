//Get a string and find the length of the string.//
#include<stdio.h>
int main()
{
    char str[40];
    int i=0;
    int length=0;
     puts("Enter a string:");
    gets(str);
    while(str[i]!='\0'){ // '\0' is a null character whose ASCII value is 0//
            length++;
            i++;
    }
    printf("Length of the string is %d",length);
    return 0;
}
