/* program to find whether the array of integers contain a duplicate number. */
#include <stdio.h>
int main(){
    int m;
    printf("Enter number of element:");
    scanf("%d",&m);
    const int n=m;
    int num[n],flag=0;
    printf("Enter numbers-");
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(num[i]==num[j] && i!=j){
                printf("Duplicate number %d found at location %d and %d\n",num[i],i,j);
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("\nNo Duplicate\n");
    }
    return 0;
}