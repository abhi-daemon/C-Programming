#include <stdio.h>
int main(){
    int x=100;
    int *ptr=&x;
    int **pptr=&ptr;
    printf("x:%d \n *ptr:%d\n **pptr:%d\n",x,*ptr,**pptr);
    printf("address of x:%p \naddress of ptr:%p\n",ptr, pptr);
    return 0;
}