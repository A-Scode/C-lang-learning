#include <stdio.h>


//new_fun for static

int new_fun(int a ){
    static int b = 10; //static declared only once in a program
    //it rembers value when program is out of scope

    static int c;//static var init as 0 implicity
    //static and global vars are stored in data segment while program execution

    static int d ;//= main(); //raise error coz static only init by constant literals
    //default values in static are 0 (if arithmetic) and null(else)
    //static can't be used in func parameter

    printf("\t %d" , c);

    b = b + a;
    return b;

}
 
//extern storage class
extern char name[]; //it means it is a global variable and any declaration in chlid scope points to this
//also can be used in multiple files

int main (void){
    //4-storage classes : auto , extern , static , register
    auto int name_len = 10;
    //auto is implicitly called on every variable in any block
    //make varible only use by child and itslef,but pointer can be used to access out side scope
    //auto assigned garbage value when they declared
    printf("%d " , name_len);

    //checking static
    printf("\n\n%d",new_fun(5));
    printf("\n\n%d",new_fun(5));
    printf("\n\n%d",new_fun(5));
    printf("\n\n%d",new_fun(5));
    printf("\n\n%d",new_fun(5)); //every time new output

    //register storage class 
    register unsigned arc = 64;
    //tries to store var in register of microprocessor than memory which benifits much faster execution
    //since register has no address so it's address can't be accessed
    //register only works in local scope not outside

    printf("\nthis is  a register variable : %u" , 64);

    //volatile keyword (run code with -O flag for optimized build)
    const int j = 10; //on optimization get cached in registers
    const volatile int k = 10; //will always access from memory location
    int *j_ptr = (int*) &j,*k_ptr = (int*) &k ;

    //const change by this method using pointers to change the value of pointers

    *j_ptr = j * 100;
    *k_ptr= k * 100;
    printf("\n\nnon-volatile (optimized) : %d\n\
    volatile (non-optimized) : %d \n ", j,k);

    //const and pointers
    int i = 21;
    int *ptr1 = (int*) &i;
    const *ptr2 = (int*) &i;
    int *const ptr3 = (int*) &i;
    const *const ptr4 = (int*) &i;

    //ptr1 value and pointer both can be changed
    ptr1 = (int*) &j;
    *ptr1 = 5;

    //ptr2 value can't be changed but pointer could
    ptr2 = &i;
    
    //ptr3 value can be changed but poiter not
    *ptr3 = 25;

    //ptr4 value and pointer can be not changed



    return 0 ;
}
