#include <stdio.h>
#include <stdlib.h>

int global;
int main(){
    int n = 9;

    int t;
    printf("%p\n" , &t);

    t=0;
    printf("%p\n" , &t);

    printf("%d\n" , global);
    printf("%p\n" , &global);

    // global = 20;

    int *arr1 = (int *) malloc(50* sizeof(int));
    *arr1 = {50,34,23,534,2312,2} ;

    printf("%d\n" , global);
    printf("%p\n" , &global);


    return 0;
}