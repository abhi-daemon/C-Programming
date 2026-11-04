#include <stdio.h>
//program accept an integer from the user 
//and reverse the number digits using while loop.
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int digit,rev=0,m=n;
    while(m){
        digit=m%10;
        rev = rev*10 + digit;
        m=m/10;
    }
    printf("The %d after reversing digits: %d\n",n,rev);
    return 0;
}