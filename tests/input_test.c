#include <stdio.h>
#include <math.h>

int main(){

    double a , b;

    printf("Enter base : ");
    scanf(" %lf" , &a);
    printf("Enter exponent : ");
    scanf(" %lf" , &b);

    printf("Answer is : %lf" , pow(a , b));

    return 0;
}