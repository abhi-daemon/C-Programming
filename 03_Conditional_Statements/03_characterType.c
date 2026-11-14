// determine the character entered by th user.
/*

   category.                    ASCII range.                Characters. 
control charecter                0-31                     Non-Printable
Space                             32                         ' '
Digits                           48-57                       0-9
Uppercase letters                65-90                       A-Z
Lowercase letters                97-122                      a-z
Punctuation & symbol     33-47,58-64,91-96,123-126.       special char
DEL(Non Printable)                127                       Delete

*/

#include <stdio.h>
int main(){
    char ch;
    printf("Press any Key:");
    scanf("%c",&ch);

    if(ch>=32 && ch<=126){
        printf("%c is printable character.\nThe user has entered is ",ch);
        if(ch==32){
            printf("space\n");
        }else if(ch>=48 && ch<=57){
            printf("digit\n");
        }else if((ch>=65 && ch<=90)||(ch>=97 && ch<=122)){
            printf("alphabet\n");
        }else{
            printf("special character\n");
        }
    }else{
        printf("User enters non printable character.\n");
    }
    printf("Ascii %d\n",ch);
    
    return 0;
}