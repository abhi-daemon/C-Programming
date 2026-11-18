/* program to find second largest number using an array of n numbers. */
#include <stdio.h>
int main(){
    int m;
    printf("Enter Number of element:");
    scanf("%d",&m);
    const int n=m;
    int large=-9999,large2nd=-9999,a=0,b=0,num[n];
    printf("Enter the number-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        if(num[i]>large){
            large=num[i];
            a=i;
        }
    }
    for(int i=0;i<n;i++){
        if(num[i]!=large){
            if(num[i]>large2nd){
                large2nd=num[i];
                b=i;
            }
        }
    }
    printf("\nThe largest number is %d and have index %d.\n",num[a],a);
    printf("The second largest number is %d and have index %d.\n",num[b],b);
    return 0;
}