//Get an integer and print it as string.//
#include<stdio.h>
int main(){
int i, number;
char a[50];
printf("Enter a number:");
scanf("%d",&number);
i=48;
a[49]=0;
while(number!=0){
    a[i]=(number%10)+48;  //48 is the ASCII value of 0//
    number=number/10;
i--;
}
i++;
printf(" string is %s",&a[i]);
return 0;
}
