#include <stdio.h>
// Write a C program to accept a number from the user and check
// whether it is an Armstrong number or not using a while loop.
int main(){
    int n,d,digits=0,sum=0;
    printf("Enter a Number:");
    scanf("%d",&n);
    int m=n;
    while(m){
        m=m/10;
        digits++;
    }
    m=n;
    while(m){
        d=m%10;
        int i=digits,x=1;
        while(i){
            x=x*d;
            i--;
        }
        sum+=x;
        m=m/10;
    }
    if(sum==n){
        printf("Given Number %d is an Armstrong number\n",n);
    }else{
        printf("Given Number %d is not an Armstrong Number\n",n);
    }

}