//Get a number up to 50 digits and reverse it.//
#include<stdio.h>
int main()
{
  int arr[50];
  for(int i=0;i<5;i++){
    printf("Enter the number: %d\n",i+1);
    scanf("%d",&arr[i]);
      }
  for( int i=4;i>=0;i--){
    printf("%d",arr[i]);
  }
  return 0;
}
