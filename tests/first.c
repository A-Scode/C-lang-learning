#include <stdio.h>
#include "second.h"

int main(){

    extern const float pi;
    const float pi;

    printf("pi : %f\n" , pi);

    return 0;
}
