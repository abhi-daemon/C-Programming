
/* Enter Roll number and year of birth from user and print them */

#include <stdio.h>

int main(){
    int roll;
    int birthyear;
    printf("Enter Roll No. and year of Birth:");
    scanf("%d %d",&roll,&birthyear);
    printf("Your roll no. is %d and Year of Birth is %d\n",roll,birthyear);
    return 0;
}