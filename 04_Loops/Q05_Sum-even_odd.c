#include <stdio.h>
// while loop
// program to calculate sum of even and
// sum of odd number separately between 1 and 100.
int main(){
    int i=1,sum_even=0,sum_odd=0;
    while(i<=100){
        if(i%2==0){
            sum_even += i;
        }else{
            sum_odd += i;
        }
        i++;
    }
    printf("sum of even number: %d\nsum of odd numbers: %d\n",sum_even,sum_odd);
}