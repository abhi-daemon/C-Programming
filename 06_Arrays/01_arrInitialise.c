#include <stdio.h>
int main(){
    int marks[3]={23,27,18}; //declaration and initialisation.
    
    printf("%p\n",marks);
    printf("%p\n",&marks[0]);
    //print arrat
    for(int i=0;i<=2;i++){
        printf("marks%d is %d\n",i+1,marks[i]);
    }
    // size of array element.
    printf("size of array element:%lu\n",sizeof marks[0]);
    // length=upper_bound-lower_bound +1
    int length=2-0+1;
    printf("Length of array:%d\n",length);
    return 0;
}

/*
            OPERATION THAT CAN BE PERFORMED ON ARRAYS
            -Traversal                -Insertion
            -Deletion                 -Merging
            -Search                   -Sorting

            *Traversal 2-10;

*/