#include <stdio.h>
void namaste(int n);

int main(){
    int n=5;
    namaste(n);
}
//recursion function khud ko hi call kar raha hai
void namaste(int n){
    if(n==0){return;}
    printf("Namaste INDIA!\n");
    namaste(n-1);
}