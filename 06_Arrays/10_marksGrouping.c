/* 
program to read marks of 10 students in the range 1-100. then make 10 groups:1-10,11-20,21-30,etc
count the number of values that false in each group and display the result.
*/
#include <stdio.h>
#define n 10
int main(){
    int marks[n],group[n]={0};
    for(int i=0;i<n;i++){
        printf("Enter Student %d marks:",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
       int j=marks[i]/10;
       if(marks[i]%10!=0){
        group[j]+=1;
       }else{
        group[j-1]+=1;
       }
    }
    printf("\nGroup           frequeancy\n");
    for(int i=0;i<n;i++){
        printf("   %d                 %d\n",i,group[i]);
    }
    return 0;
}