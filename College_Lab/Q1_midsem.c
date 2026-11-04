#include <stdio.h>
int main(){
    char ch;
    printf("Enter a Character:");
    scanf("%c",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
        printf("Given character is vowel\n");
    }else{
        printf("Given number is Consonant\n");
    }
    return 0;
}