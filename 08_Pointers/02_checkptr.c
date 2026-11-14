#include <stdio.h>
int main(){
    int x;
    int *ptr;
    ptr=&x;
    *ptr=0;   // basicly *ptr means= value of x
    printf("x:%d \n *ptr:%d \n",x,*ptr);
    *ptr+=5;
    printf("x:%d \n *ptr:%d\n",x,*ptr);
    (*ptr)++;
    printf("x:%d \n *ptr:%d \n",x,*ptr);
    return 0;
}