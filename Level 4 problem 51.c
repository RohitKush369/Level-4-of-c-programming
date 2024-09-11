//Get a string and a character from the user and find all the positions
// where the character present and print it.
#include <stdio.h>
#include <string.h>
int main(){
    char str[40],ch;
    int i,len;
    printf("Enter a string: ");
    scanf("%s",str);
    printf("Enter a character to find the position: ");
    scanf(" %c",&ch);
    len=strlen(str);
    for(i=0;i<len;i++) {
        if (str[i]==ch) {
            printf("The position is:%d ",i);
        }
    }
    return 0;
}
