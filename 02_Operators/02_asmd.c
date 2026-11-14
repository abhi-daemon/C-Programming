/*   16/09/2026
 write a program in c, which takes two integer value from user and perform 
addition, subtraction, multiplication, division */

#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);
    printf("1. Addition\n ");
    printf("The sum is %d\n\n", a + b);
    printf("2.Subtraction\n");
    printf("The difference is %d\n\n", a - b);
    printf("3. Multiplication\n");
    printf("The Multiplication is %d\n\n",a*b);
    printf("4. Division\n");
    printf("The Division is %d\n\n",a/b);
    return 0;
}