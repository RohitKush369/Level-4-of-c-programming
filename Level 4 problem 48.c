//Adjust the carry in an integer array. (i.e. convert the 2 digit number into single digit and add the carry to the next number).//
#include <stdio.h>

int main() {
    int arr[50];
    int carry=0;
    for (int i=0;i<5;i++) {
        printf("Enter digit%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=5;i>=0;i--) {
        arr[i]= arr[i]+carry;
        if (arr[i]>=10) { // When digit>10 there will be  a carry.//
            carry=arr[i]/10;  // Finding the carry.//
            arr[i]=arr[i]%10;  // Taking the single digit.//
        }
         else
            {
            carry=0; // if digit<10 there will be no carry.//
        }
    }
    for (int i=0;i<5;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
