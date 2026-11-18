/*distinction on marks of student.*/
#include <stdio.h>
#define n 5
int main(){
    int marks[n];
    int count=0;
    for(int i=1; i<n; i++){
        printf("Enter marks of roll number [%d]:",i);
        scanf("%d",&marks[i]);
        if(marks[i]>=80){
            count++;
        }
    }
    printf("\nNumber of students secured above or equal to 80 marks:%d\n",count);
    printf("Roll number of Students secure 80 above marks:");
    for(int j=1; j<n; j++){
        if(marks[j]>=80){
            printf("%d, ",j);
        }
    }
    return 0;
}