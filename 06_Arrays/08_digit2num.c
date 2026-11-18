/* program to enter n number of digits. form a number using these digits.*/
#include <stdio.h>
int main(){
    int m;
    printf("Enter the number of element:");
    scanf("%d",&m);
    const int n=m;
    int digit[n],number=0;
    printf("Enter the Digit-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&digit[i]);
        number=number*10+digit[i];
    }
    printf("\nThe number formed from digit:%d.\n",number);
}