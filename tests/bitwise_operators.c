#include <stdio.h>

int main(){

    int a = 10;
    int b = 100;

    printf("bitwise a AND b : %i\n" , a & b);
    printf("bitwise a OR b : %i\n" , a | b);
    printf("bitwise NOT b : %i\n" ,  ~b);

    printf("right shift a>>b :%d\n" , a>>b);//0
    printf("left shift a<<b :%d\n" , a<<b);//unknown
/* for left and right shift operators 
    the rvalue must be positive , behaviour is undefined for -ve values
    the rvalue must be lower than bit size of lvalue*/

    return 0;
}