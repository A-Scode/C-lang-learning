#include <stdio.h>

//global variable

char global_str52141[] = "this is a global string in the program\n";
char global_char123 = 'z';
float global_float123 = -5.3330801000000001;
double global_double123 = -4.52212532153; //double doesn't support -ve floating point no.

void function(){
    int local_x123 = 10;
    static int local_y123 = 10;
    printf("x : %i , y : %i\n",local_x123, local_y123);
    local_x123=local_x123+10 ,local_y123= local_y123+10;
}

int main(void){
    printf("%s" , global_str52141);
    printf("%c\n" , global_char123); //%c specifier for char
    printf("%f\n" , global_float123);
    printf("%d\n" , global_double123);
    function();
    function();
    function();
    function();
    return 0;
}