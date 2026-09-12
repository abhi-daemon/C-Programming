#include <stdio.h>
int main(){
    int n;
    printf("Number of value:");
    scanf("%d",&n);
    int j;
    int sum=0;
   for(int i=1; i<=n; i++){
    printf("Enter your number %d: ", i);
    scanf("%d", &j);
    sum = sum + j;
   }
   printf("Your average is: %f \n", (float)sum / n);
    return 0;
}