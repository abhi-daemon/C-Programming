/* 16/09/2026
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

   // without using 3rd variable

    a=a+b;
    b=a-b;
    a=a-b;
    
    // one another method but not defined in case of zero
/*
    a=a*b;
    b=a/b;
    a=a/b;
   */
    printf("after swap \n a is %d \n b is %d \n",a,b);
    return 0;

}