#include <stdio.h>

int main(){
    extern const double pi;
    extern int sum(int , int);
    printf("some pi : %lf\n" , pi);
    printf("some sum : %d\n" , sum(5,10));
    return 0;
}
#include "some.h"

