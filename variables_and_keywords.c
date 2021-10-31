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

char (*fp)(int , char);

int main(void){
    printf("%s" , global_str52141);
    printf("%c\n" , global_char123); //%c specifier for char
    printf("%f\n" , global_float123);
    printf("%lf\n" , global_double123);
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
    printf("\n si : %10lu bytes \nsui : %10lu bytes \ni : %12lu bytes \
    \nui : %11lu bytes \nli : %11lu bytes \nuli : %10lu bytes \nlli : %10lu bytes \nulli : %9lu bytes \nf : %12lu bytes \
    \nd : %12lu bytes \nld : %12lu bytes" ,sizeof  si ,sizeof sui ,sizeof i,sizeof ui,sizeof li,sizeof uli,sizeof  lli,sizeof ulli ,sizeof  f,sizeof d,sizeof ld);

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

        long long int pointer_fun = (long long) &imported_fun;

        printf("%p, %lli" , imported_fun , pointer_fun);

        complex_declaration:
            fp = &test_goto;
            printf("\n\n\tthis is pointer of test_goto() : %p" , *fp);

        float_precision: ;
            double num = 45.49384834;
            printf("\n this is +ve precision %15.5lf ", num);
            printf("\n%-15.5lf  this is -ve precision ", num);

    }

    //declaring constants

    //using const
    const  double pie = 3.14;
    printf("\npie : %lf", pie);

    //usning enum
    enum const_vars {const1 =2 ,const2 =3, const3=4} ;
    printf("\n\n\t%u%i%d this is something constant",const1,const2,\
    const3);

    //macros as constant 
    #define new_ratio_const 2/1
    printf("\n macro const new ratio const : %i", new_ratio_const);

    //octal ,dec,hex
    //in c 0 is null \0 is format specifier for null

    int oct = 012; //0 is prefix for octal
    char hex = 0x61;
    int bin = 0b1010;
    printf("\nthis is octal %o %d" , oct, oct);
    printf("\nthis is hex %x %c" , hex, hex);
    printf("\nthis is bin %i" , bin); //no format specifier for binary
    char c = 97;
    c  = c+10;
    printf("\n\n%c",c); //will convert it to ascii

//in c if int is compared to unsigned than the int is
//promoted to unsigned

//check how varibles work

float f_int = 0.1;
if (f_int == 0.1f) //f is necessary to specify it is a single precisioin floating point
printf("\n\n%f", f_int);

long llong;
unsigned us;   // all are valid because int is called implicitly
long long lllong; //all are grabage value because not used in the program

    return 0;
}