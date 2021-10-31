// #include <stdio.h>  not required becuse imported in header file
#include <stdlib.h>
#include "extern_kw.h" // .c files can be imported 

//global scope variables
char global_str52141[] = "this is a global string in the program\n";
char global_char123 = 'z';
float global_float123 = -5.3330801000000001;
double global_double123 = -4.52212532153; //double doesn't support -ve floating point no.

const char global_const[] = "this is constant";//const can be changed


void function(){
    int local_x123 = 10;
    static int local_y123 = 10;
    auto int k = 10; // all variable by default are auto but this is keyword is to define it explicity
    printf("x : %i , y : %i\n",local_x123, local_y123);
    local_x123=local_x123+10 ,local_y123= local_y123+10;
}


//function prototype scope
void sum(int a , int b){
    printf("\n\t\t\t%i" , a+b);
}

//using goto 
char test_goto(int a ,char chr){
    if (chr == 'A')goto end;
    else goto quit;
    end:
        printf("end");
    quit:
        printf("\n\n\nexiting .....");

    return 'a';

}

//declaring complex statements

char (*fp)(int , char[1]);

int main(void){
    printf("%s" , global_str52141);
    printf("%c\n" , global_char123); //%c specifier for char
    printf("%f\n" , global_float123);
    printf("%d\n" , global_double123);
    function();
    function();
    function();
    function();

    printf("\n These are externs from other file : %i ,%s" , global_extern,
    file_name);

    printf("\n%s" , global_const);

    //diffrenet size of data types
    typedef long long int l;

    short si;//2
    short unsigned sui;//2
    int i ;//4
    unsigned ui;//4
    long int li;//4
    unsigned long int uli;//4
    l lli;//8
    unsigned long long int ulli;//8
    float f;//4
    double d ;//8
    long double ld;//16
    printf("\n si : %10i bytes \nsui : %10i bytes \ni : %12i bytes \
    \nui : %11i bytes \nli : %11i bytes \nuli : %10i bytes \nlli : %10i bytes \nulli : %9i bytes \nf : %12i bytes \
    \nd : %12i bytes \nld : %12i bytes" ,sizeof( si) ,sizeof(sui) ,sizeof(i),sizeof(ui),sizeof(li),sizeof(uli),sizeof( lli),sizeof(ulli) ,sizeof( f),sizeof(d),sizeof(ld));

    //local or block scope variables

    char local_str[] = "this is a local variable under main()";
    {
        //next block
        //In c block starts with { and ends with }...
        printf("\n\n\n%s",local_str);
        {
            //local to local
            char local_str[]= "local to local scope";
            printf("\n\t\t\v%s" , local_str);
        }

        sum(5,10);
        char temp_chr = 'B';
        test_goto(1,temp_chr);

        imported_fun();

        long long int pointer_fun = &imported_fun;

        printf("%lli, %lli" , imported_fun , pointer_fun);

        complex_declaration:
            fp = test_goto;
            printf("\n\n\tthis is pointer of test_goto() : %u" , *fp);

        float_precision:
            float num = 45.49384834;
            printf("\n this is +ve precision %15.5f ", num);
            printf("\n%-15.5f  this is -ve precision ", num);

    }

    return 0;
}