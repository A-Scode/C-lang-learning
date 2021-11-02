#include <stdio.h>
#include <stdbool.h> // required to get datatype bool

int main(void){
    bool isValidFile = true;
    printf( isValidFile ? "ture":"false");

    //integer promotion on datatypes small than int
    short int sint = 25; //2 bytes > int
    char chr = 'a';   //1 byte > int

    char d = sint*sint*sint*sint/100 ;//here char promoted to int sice char can't get value more than 128
    printf("\n\n\n%i" , d );

    //size_t data_type
    printf("\n\nsize_t : %llu bytes" , (unsigned long long) (sizeof (size_t))); //it is just a typedef macro in headers by compiler

    //only long available in double
    long double ld = 0.1;
    printf("\n\nsize of ld : %Lf bytes , %lf",sizeof ld , ld);

    //char arithmetic oprations
    char ch1 = 78, ch2 = 3 , ch3 = ch1+ch2,ch4 = ' '+ch3;
    printf("\n\n \
    ch1 : %d ,%c  ;  \n \
    ch2 : %d ,%c  ; \n \
    ch3 : %d ,%c  ; \n \
    ch4 : %d ,%c  ;  \n \
    " , ch1,ch1, ch2,ch2, ch3,ch3, ch4,ch4 );


    // implicit conversion

    int num1 = 43;
    char chr5 = 'n';

    float x = chr5 +num1 ; //implicit conversion of num1 to float

    printf("\nz : %f ", x);
    //explicit type conversion
    char chr6 = 'A';
    int int_chr6 = (int)chr6;
    printf("\ntype converted char to int %d",int_chr6);
    return 0;
}