#include <stdio.h>

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    int i=1;
    int divcount=0;
    while(i<=n){
        if(n%i==0){divcount++;}
        if(divcount>2){
            printf("Number is not prime \n");
            break;
        }
        i++;
    }
    if(divcount==2){printf("Number is prime\n");}
}