#include <stdio.h>
int main(){
    int a,b;
    printf("Enter Starting Number:");
    scanf("%d",&a);
    printf("Enter Ending Number:");
    scanf("%d",&b);
    printf("The Prime Number between %d and %d : ",a,b);
    for(int i=a;i<=b;i++){
        int divider=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                divider++;
            }
            if(divider>2){
                break;
            }
        }
        if(divider==2){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}