#include <stdio.h>
// program to accept a number from user 
//and check whether it is a prime number or not using a while loop.
int main(){
    int n,i=1,divider=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            divider++;
        }
        if(divider>2){
            break;
        }
        i++;
    }
    if(divider==2){
        printf("The given number %d is prime number.\n",n);
    }else{
        printf("The Given number %d is not a prime number\n",n);
    }
    return 0;
}