/*
Determine whether a person is eligible to vote.
*/

#include <stdio.h>
int main(){
    int age;
    printf("Enter Your Age:");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible to vote.\n");
    }else{
        printf("You are NOT eligible to vote.\n");
    }
    return 0;
}