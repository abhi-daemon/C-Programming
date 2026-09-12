#include <stdio.h>
long fact(long n);

int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    printf("N! = %ld \n",fact(n));
    return 0;
}

/*
long fact(long n){
    if(n==1){return 1;}
    long m=fact(n-1);
    long x=m*n;
    return x;
}

*/
long fact(long n){
    if(n==0){return 1;}
    printf("factorial\n");  // printed for n-1 time but ???
    return n*fact(n-1);
    printf("factoria\n"); // line after return not printed
}