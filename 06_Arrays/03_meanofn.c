/* program to find mean of n numbers in arrays. */
#include <stdio.h>
#define x 20
int main(){
    float sum=0,mean, num[x];
    int n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter numbers-\n");
    for(int i=0;i<n;i++){
        scanf("%f",&num[i]);
        sum+=num[i];
    }
    mean=sum/n;
    printf("\n mean of numbers:%.2f\n",mean);
    return 0;
}