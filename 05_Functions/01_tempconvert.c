#include <stdio.h>

float celsius(float n);

int main(){
    float n;
    printf("Enter Temp. in celsius:");
    scanf("%f",&n);
    float x=celsius(n);
    printf("temperature is %ffahrenhite\n",x);
    return 0;
}

float celsius(float n){
    float x=(9.0/5.0)*n+32.0;
    return x;
}
