#include <stdio.h>
int main(){
    int i;
    int j;
    printf("Enter i and j:");

   // scanf("%d %d",&i);                  // segmentation fault 

     scanf("%d %d",&i,&j);               // working good

    //scanf("%d %d",&i,&i);               // i stored 2nd value entered and j have garbage value

   // scanf("%d %d",&j);                  // again segmentation fault
    
    // scanf("%d",&i,&j);          // value stored in 1st variable and 2nd variable have garbage value
 
    // printf("i is %d and j is %d\n",j);    // j is print instead of i and at place of j print 0
    
    // printf("i is %d and j is \n",i,j);       // printed 1st variable

    printf("i:%d and j:%d \n",i,j);

    return 0;
}