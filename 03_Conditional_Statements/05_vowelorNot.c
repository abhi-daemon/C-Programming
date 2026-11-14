//check character is vowel or not.

#include <stdio.h>
int main(){
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Entered character is Vowel.\n");
    }else{
        printf("Entered character is not Vowel.\n");
    }
    return 0;
}