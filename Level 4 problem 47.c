//Add two integer arrays of up to 50 digits and store the result in a 51 digits array.//
#include<stdio.h>
int main()
{
    int arr1[50];
    int arr2[50];
    int arr3[51];
    for(int i=0;i<=5;i++){
        printf("Enter the first array's digit:%d ",i+1);
        scanf("%d",&arr1[i]);
        printf("Enter the second array's digit:%d ",i+1);
        scanf(" %d",&arr2[i]);
        arr3[i]=arr1[i]+arr2[i];
    }
    for(int i=0;i<=5;i++){
     printf("%d\n",arr3[i]);
    }
    return 0;
}
