#include <stdio.h>
// accept a number from user and 
//display its table upto 10 using a for loop.
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("The table of %d is-\n",n);
    for(int i=1; i<=10; i++){
        printf("%d ",n*i);
    }
    printf("\n");
    return 0;
}