/*
write a program in c to swap two variables 
(a) using third temporary variable,
(b) without using 3rd variable 
*/

#include <stdio.h>
int main(){
    int a;
    int b;
    printf("Enter the first number(a):");
    scanf("%d",&a);
    printf("Ener the second number(b):");
    scanf("%d",&b);

    // using 3rd temporary variable

    int c=a;
    a=b;
    b=c;
    printf("First Number is (a) %d\n",a);
    printf("second number is (b) %d\n",b);
    return 0;
}