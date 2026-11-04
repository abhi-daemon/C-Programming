#include <stdio.h>
#include <math.h>
int checksum(long m);
int cardtype(long n);
int america(long n);
int master(long n);
int visa(long n);
int main(){
    long k;
    printf("Enter Credit Card Number:");
    scanf("%ld", &k);
    int x=checksum(k);
    if(x%10==0){
        cardtype(k);
    }else{
        printf("Invalid card!\n");
    }

    return 0;
}

int checksum(long m){
    int sum=0;
    int i=1;
    while(m){
        if(i%2!=0){
            sum=sum+m%10;
            m=m/10;
        }else{
            int x=0;
            x=m%10;
            m=m/10;
            x=x*2;
            if(x/10==0){
                sum=sum+x;
            }else{
                while(x){
                    sum=sum+x%10;
                    x=x/10;
                }
            }
        }
        i++;
    }
    return sum;
}

int cardtype(long n){
    long k=n;
    int i=0;
    while(k){
        k=k/10;
        i++;
    }
    int x=0;
    printf("digit is %d\n",i);
    if(i==15){
        x=n/pow(10,13);
        if(x==34 || x==37){
            printf("American Express Card\n");
        }
    }
    else if(i==13){
        x=n/pow(10,12);
        if(x==4){printf("visa card\n");}
    }
    else if(i==16){
        x=n/pow(10,14);
        if(x>50 && x<56){printf("master card\n");}
        x=x/10;
        if(x==4){printf("visa card\n");}
    }
    else{printf("Invalid Card!\n");}
}
