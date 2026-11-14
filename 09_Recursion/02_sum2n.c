#include <stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("sum to n is %d\n",sum(n));

    return 0;
}

int sum(int n){
    if(n==1){return 1;} // base case
    int nm1=sum(n-1); // recursive case
    int sumN=nm1+n;
    return sumN;


}