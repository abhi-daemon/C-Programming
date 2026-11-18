/* program to interchange the largest and smallest number in the aray. */
#include <stdio.h>
int main(){
    int m;
    printf("Enter number of element:");
    scanf("%d",&m);
    const int n=m;
    int small=9999,large=-9999,s=0,l=0,num[n];
    printf("Enter the numbers-\n");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
        if(num[i]>large){
            large=num[i];
            l=i;
        }
        if(num[i]<small){
            small=num[i];
            s=i;
        }
    }
    num[s]=num[s]+num[l];
    num[l]=num[s]-num[l];
    num[s]=num[s]-num[l];
    printf("\nLargest:%d, Smallest:%d\n",large,small);
    printf("Index of Largest:%d, Index of Smallest:%d\n",l,s);
    printf("The New array is:");
    for(int i=0;i<n;i++){
        printf("%d, ",num[i]);
    }
    prinf("\n");
    return 0;
}