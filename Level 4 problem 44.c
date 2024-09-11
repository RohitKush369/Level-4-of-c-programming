#include<stdio.h>
int main()
{
    char str[51]; // we have to create a space for null character also.//
    int i=0;
    printf("Enter a string:");
    scanf("%s",str);
    while(str[i]=='0'){
        i++;
    }
    if(str[i]=='\0'){
        printf("0\n");//when ever we print null character its space is invisible.//
    }                 // 0 is the ASCII value of null character hence all zeros are invisible.//
    else
        {
        printf("%s\n",&str[i]);
    }
    return 0;
}
