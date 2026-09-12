#include <stdio.h>
int pyramid(int k);

int main(){
    int n;
    printf("Enter Height(1-8):");
    scanf("%d", &n);
    if(n>0 && n<=8){pyramid(n);}
    else{printf("Your input is not between 1 to 8\n");}

    return 0;

}

int pyramid(int k){

    for(int i=1; i<=k; i++){
        for(int w=1; w<=k-i; w++){
            printf(" ");
        }

        for(int h=1; h<=i; h++){
            printf("#");
        }

        printf("  ");

        for(int h=1; h<=i; h++){
            printf("#");
        }
        printf("\n");
    }
}