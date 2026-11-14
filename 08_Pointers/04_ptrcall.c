#include <stdio.h>
void square(int n);
void _square(int* n);
int main(){
    int n;
    printf("Enter a number to find square: ");
    scanf("%d",&n);
    square(n);
    printf("n is %d\n",n);
    _square(&n);
    printf("n is %d \n",n);   // n ab n*n print hoga bcz hamne address par value change ki hai
    return 0;
}
// call by value
void square(int n){
    n=n*n;
    printf("square is %d\n",n);
}

// call by reference 
void _square(int* n){
    *n=(*n)*(*n);        // ham address ke andar change kar rahe hai
    printf("Square is %d\n",*n);
}