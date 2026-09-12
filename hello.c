#include <stdio.h>

int table(int n);

int main()
{
    int i;

    printf("Enter Number: ");
    scanf("%d", &i);
    table(i);
    return 0;
}

int table(int n)
{
    for(int t = 1; t < 11; t++)
    {
        printf("%d ", n * t);
    }

    return 0;
}
/*

int main(){
    printf("Hello World!\n");
    int n;
    printf("Enter Number:");
    scanf("%d", & n);
    for(int i=1; i<=10; i++){
        printf(" %d", (i*n));
    }
    printf("\n");

    return 0;
}
    */