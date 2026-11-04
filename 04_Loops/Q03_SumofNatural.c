#include <stdio.h>
//WAP to find the sum of first 10 natural numbers using for loop.
int main(){
    int sum=0;
    for(int i=1; i<=10; i++){
        sum+=i;
    }
    printf("The sum of first 10 natural numbers: %d\n",sum);
    return 0;
}
