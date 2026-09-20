#include <stdio.h>
int main(){
    int age=19;
    int *ptr=&age;
    int _age=*ptr;
    printf("Age is %d \naddress is %p \nand a %d\n",age, (void*)ptr, _age);
    return 0;
}