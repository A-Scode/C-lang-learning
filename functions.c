#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>


//creating a simple func
int max(int a , int b){
    if (a>b) return a;
    else if (a<b) return b;
}


fun(int (*func)(int a, int b , int c)){  //not return type 
    (*func)(5,4,6);

    void some_random_func(){
        printf("\nThis is some random function nested\n");
    }

    //calling a nested funciton
    some_random_func();
    return 0*0; //it implicitly declares it as int
}

void __attribute__((destructor)) startfun();

void startfun(void){
    printf("\nThe program ends with return 0 or exit(0)\n"); //not printed if exit(0) used
}


int random_sum(int a , int b, int c){
    return a+b+c;
}

         // argc is no of arguments / *argv[] takes list of argument
int main(int argc , char *argv[]){
    //using a simple func
    int max_int = max(5,4);
    printf("max no. is : %d\n",max_int);
    printf("\nargc : %d\n", argc);
    char *arr[]={"this ", "string ", "is ", "in " , "array ",
    "string ","string ","string ","string ","string "};

    printf("\nfirst command line argument is  : %s\n", argv[1] );//printing 1st command line arg from arr

    FILE *fp = fopen(argv[1], "w");

    printf("\nfile '%s' opend\n", argv[1] );
    perror("\nthis is some error msg\n");
    printf("\n'%d' has no return type\n",fun(random_sum) );//implicty int type is given

    //checking garbage value in gcc compiler
    int int1;//initialized as 0 by default in turbo c garbage value is used
    printf("this is some garbage %d\n", int1);
    printf("\nI'am in func %s\n", __func__);

    printf("file : %s , line : %d , func : %s", __FILE__ , __LINE__, __func__);

    fun(random_sum); //using function pointer to use it as  a callback

    //the  pow function
    printf("10^8 = %Lf", pow(10.0, 8.0));

    printf("\nconverting H to lowecase : %c\n", tolower('H'));
    putchar('K');

    //recording time 
    time_t time1;
    time(&time1);

    sleep(3);

    printf("\ntime1 : %ld", time1);
    
    _Exit(0); //it does not execute cleanup functions
    
    exit(0); //it does cleanup funcs like flush buffer and other so atexist fun is called
    return 0;
}   