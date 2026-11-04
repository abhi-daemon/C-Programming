#include <stdio.h>

/* 
Q12. Write a C program to create a simple calculator using a do-while loop.
The program should:
1. Display a menu: 1. Addition; 2. Subtraction; 3. Multiplication; 4. Division; 5. Exit.
2. Accept the user's choice.
3. Accept two numbers and perform the selected operation.
4. Display the result.
5. Continue displaying the menu until the user selects Exit.
*/

int main(){
    float a,b;
    int n;
    do{
        printf("\nThe Calculator Menu:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5.Exit\n");
        printf("Enter selected operation:");
        scanf("%d",&n);
        if(n==1){
            // Perform Addition
            printf("Enter two numbers:");
            scanf("%f %f",&a,&b);
            printf("\nSum:%.2f\n",a+b);
        }else if(n==2){
            // Perform Subtraction
            printf("Enter two numbers:");
            scanf("%f %f",&a,&b);
            printf("\nDiffrence: %.2f\n",a-b);
        }else if(n==3){
            // Perform Multiplication
            printf("Enter two numbers:");
            scanf("%f %f",&a,&b);
            printf("\nMultiplication: %.2f\n",a*b);
        }else if(n==4){
            // Perform Division
            printf("Enter two numbers:");
            scanf("%f %f",&a,&b);
            printf("\nDivision: %.2f\n",a/b);
        }else if(n==5){
            continue;
        }else{
            printf("\nInvalid Input Given!\n");
        }
    }while(n!=5);
    return 0;
}