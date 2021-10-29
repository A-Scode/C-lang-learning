#include <stdio.h>
#define value "this is a string let see how it works"
#define const_exp (50*2.0/56.0)
#define increment(x) ++x
#define divide(a,b ) a/b
#define  recheck(a,b,c)({\
    printf("value %i" , a+b-c);\
})
#define square(x)  x*x

#define new_const  fun()


#pragma startup start_fun() //before main start  //are not woking well with gcc
#pragma exit end_fun() //after main exits //are not woking well with gcc
//To simulate these code across all compilers and platform we can use #if...

#define arc 64-bit



#pragma warn -rvl //no waning onreturn value



void  start_fun(){
    printf("this is before main starts");
}
void end_fun(){
    printf("this is after main ends");
}


int fun(void){
    printf("hello\n");
    return 500502;
}


int main(){
    #if arc == 64-bit
        start_fun();
    #elif arc == 32-bit
        end_fun();
    #endif
    int a ;
    a=25;
    printf("a = %i \n" , a);
    fun();
    printf("the fun() returns is : %d" , fun());
    int *b = &a;
    printf("the id of fun() : %u", b );

    //checking the #define 
    printf("the value of value is : %s\n", value);
    //checking the #define exp
    printf("the expression : %f", const_exp);
    char  *num = "hello how are you";
    printf("the expression : %s", increment(num));
    int c = 500;
    printf("\n\n\n recheck is : %i",recheck(a,b,c));
    printf("\n\n\n\n\t %i", new_const);
    printf("\n%i" , 36/square(6));

    printf("%s\n",__FILE__);
    printf("%s\n",__TIME__);
    // #undef __DATE__     //this will undefine the macro
    printf("%s\n",__DATE__);
    printf("%i\n",__amd64);
    printf("%i\n",__CHAR_BIT__);


    //get ready for some floating point errors
    int j = 2382983294;
    int k =  2382983294;
    int l = j*k/(1.0/0.0);
    printf("%i\n", l);
    printf("%f",(1.0/0.0));
    

return 0;
}


