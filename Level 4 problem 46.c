//Get a number string up to 50 digits and convert it to integer array.//
#include<stdio.h>
int main(){
    char str[51];// one space for null character.//
int arr[50];
int length=0;
int i=0;
printf("Enter a string:");
scanf("%s",str);
while(str[i]!='\0'){
    length++;// finding the length or the string.//
    i++;
}
for(int i=0;i<length;i++){
    arr[i]=str[i]-'0'; // as ASCII value of 0 is 48 let if number is one whose ASCII value is 49 and hence integer = (49-48=1).//
}
for(int i=0;i<length;i++){
printf("%The integer array is %d",arr[i]);
}
return 0;
}
