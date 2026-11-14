/* Date: 23-09-2026
Q-6. Study behavior of integral data types in case of overflow. Declare an example of data types 
unsigned char and unsigned short int each. assign them values near to their maximum safe value. 
Do some arithmatic operations so that value goes beyond the safe limit write and explain the 
output behaviour.
*/
#include <stdio.h>
int main(){
    unsigned char a=252;    /* overflow after 255 and start printing after this again 
                                from 0 to 255 because its safe limit is 255
                                    due to its storing  size of 1 byte */
                                    
    unsigned short int n=65530;  /* overflow after 65535 and start printing after this again 
                                     from 0 to 65535 because its safe limit is 65535
                                       due to its storing  size of 2 byte */
    a=a+7;
    n=n+9;
    printf("char = %d \n",a);
    printf("int = %d\n",n);
    return 0;
}