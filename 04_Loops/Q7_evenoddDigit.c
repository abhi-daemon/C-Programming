#include <stdio.h>
//program accept an integer and count number of even
// and odd digits in it using while loop.
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    int digit,m=n;
    int even=0,odd=0;
    while(m){
        digit=m%10;
        if(digit%2==0){
            even++;
        }else{
            odd++;
        }
        m=m/10;
    }
    printf("The number %d have\nEven Digits = %d, Odd Digits = %d\n",n,even,odd);
    return 0;
}