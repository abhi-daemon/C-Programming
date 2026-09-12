#include <stdio.h>
int coin(int n);

int main(){
    int x;
    printf("Enter amount:");
    scanf("%d",&x);
    coin(x);
    return 0;
}

int coin(int n){
    int i=0;
    int j=0;
    int k=0;
    int l=0;
    int m=0;

        i=n/20;
        n=n%20;
    
        
        j=n/10;
        n=n%10;
    
        k=n/5;
        n=n%5;

        l=n/2;
        n=n%2;

        m=n/1;
        n=n%1;

        printf("20's coins:%d \n",i);
        printf("10's coins:%d \n",j);
        printf("5's coins:%d \n",k);
        printf("2's coins:%d \n",l);
        printf("1's coins:%d \n",m);
        printf("minimum number of coins:%d \n",i+j+k+l+m);

return 0;
     
}