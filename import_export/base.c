#include <stdio.h>

void create_pointer();


int main(){
    extern const double pi;
    extern int sum(int , int);

    printf("some pi : %lf\n" , pi);
    printf("some sum : %d\n" , sum(5,10));
    do{
        create_pointer();
    }while(0);

    return 0;
}

#include "some.h"

void create_pointer(){
    char *p = (char *) &"pointer";
}

