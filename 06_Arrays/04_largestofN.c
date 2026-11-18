/* program to find largest of n numbers using arrays. */
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of element:");
    scanf("%d",&n);
    const int m=n;
    int large=-9999,num[m],index=0;
    printf("Enter the numbers-\n");
    for(int i=0;i<m;i++){
        scanf("%d",&num[i]);
        if(num[i]>large){
            large=num[i];
            index=i;
        }
    }
    printf("\nThe largest number:%d\nindex of largest number:%d\n",large,index);
    return 0;
}