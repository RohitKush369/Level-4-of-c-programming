//Get an integer and print each digit as character.Print one character on one line.//
#include<stdio.h>
int main()
{
    int number1,number2;
    printf("Enter a Number: ");
    scanf("%d",&number1);
    number2=0;
    while(number1!= 0)
    {
        number2=(number2*10)+(number1%10);
        number1=number1/10;
    }
    while(number2!=0)
    {
        printf("%c\n",((number2%10)+48)); // if integer is 1 then (1+48)=49 which is the ASCII value of 1 and it prints 1//
        number2=number2/10;
    }
    return 0;

}
