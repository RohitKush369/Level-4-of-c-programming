//Convert an integer array of up to 50 digits to character array and print using print using "printf("%s", ....);"//
#include<stdio.h>
int main()
{
    int arr[50];
    char str[51];
    for(int i=0;i<5;i++){
        printf("Enter the number:%d ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        str[i]=arr[i]+'0';// ASCII value of 0 is 48 and hence (if number=1+48=49)which is the ASCII value of 1.//
    }
    printf("%s",str);
    return 0;
}
