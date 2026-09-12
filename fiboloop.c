#include<stdio.h>


int main(){
    int n;
    printf("Enter Series Length:");
    scanf("%d",&n);
    int a=0;
    int b=1;
    for(int i=1; i<=n; i++){
        if(i==1){
            printf("0 ");
            continue;
        }
        if(i==2){
            printf("1 ");
            continue;
        }
        int s=a+b;
        printf("%d ",s);
         a=b;
         b=s;
    }
    printf("\n");
    return 0;

}

