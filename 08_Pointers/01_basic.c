#include <stdio.h>
int main(){
    int age=19;
    int *ptr=&age; // *ptr means value stored at address
    int _age=*ptr;
    printf("Age is %d \naddress is %p \nand a %d\n",age, ptr, _age);
    return 0;
}