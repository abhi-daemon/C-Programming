// Change the case of a given character.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122){
        printf("user entered LowerCase.\n");
        ch=ch-32;
        printf("UpperCase is %c\n",ch);
    }else if(ch>=65 && ch<=90){
        printf("User entered UpperCase.\n");
        ch=ch+32;
        printf("LowerCase is %c\n",ch);
    }else{
        printf("Enter Invalid Key!\n");
    }

    return 0;
}