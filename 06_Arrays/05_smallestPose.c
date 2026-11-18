/* program to print position of smallest number in an array. */
#include <stdio.h>
int main(){
    int m;
    printf("Enter the number of element:");
    scanf("%d",&m);
    const int n=m;
    int num[n],index=0,small=9999;
    printf("Enter the numbers-\n");
    for(int i=0;i<m;i++){
        scanf("%d",&num[i]);
        if(num[i]<small){
            small=num[i];
            index=i;
        }
    }
    printf("\nThe Index of Smallest Number:%d\n",index);
    return 0;
}