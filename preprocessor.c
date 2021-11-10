#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <unistd.h>
#define str(x) (#x)

    #define ERR stderr
#define Log_Error(file , msg ,...) do{\ 
fprintf(file , msg, ##__VA_ARGS__ );\  
}while(0)
//... specifies to accepts extra args
//##__VA_ARGS__ put extra args here 

#include "preheader.h"

//_Genric for type checking

#define type_checked(x) _Generic( x, int : "int", float : "float",char :"char")


int main(void){
    //print macro
    printf("\nhello this macro: %s\n",str(1%321;));

    //using preprocessor to log errors
    Log_Error(ERR , "Error Occured : failed to open program %s\n","USING format specifier");

    //Crash();  //to crash program

    #undef ERR //undefining ERR
    puts(No_Err);
    puts(Hero);

    #line 1 //will make next line as line 1 for compiler in errors
    puts(se);
    
    if (!isgraph(" ")){ //isgraph() checks weather it's graphic charcter or not
        puts("' ' is a non-graphic charcter" );
    }
    
    #ifdef shyam
    #error something is wrong here; //will produce error here
    #endif

    //difftime()
    time_t tm1,tm2;

    time(&tm1);
    printf("\ntime is going on ...\n");
    sleep(2);
    time(&tm2);
    printf("\ndifference in time is : %.2f \n", difftime(tm2, tm1));//difftime returns float value

    //tmpnam 
    //L_tmpnam size of name gen +1 for null char
    char tmp1[L_tmpnam+1], tmp2[L_tmpnam+1];
    printf("\ntemp filename : %s\n", tmpnam(tmp1));
    printf("\ntemp filename : %s\n", tmpnam(tmp2));

    printf("\nmax no. of tmp names : %d\n", TMP_MAX);
    printf("\nsize of L_tmpnam: %d\n", L_tmpnam);

    //_Generic
    printf("\nthe type is : %s \n", type_checked('h'));//char returns int
    printf("\nthe type is : %s \n", type_checked(45));
    printf("\nthe type is : %s \n", type_checked(45.0f));

    //math
    printf("\nthe ceil fn : %.2lf\n", ceil(4533.222224));
    printf("\nthe floor fn : %.2lf\n", floor(4533.222224));
    printf("\nthe fabs fn : %.2lf\n", fabs(-4533.222224));
    printf("\nthe log (gives natural log with base e) fn : %.2lf\n", log(4533.222224));
    printf("\nthe log10 (gives natural log with base 10) fn : %.2lf\n", log10(4533.222224));
    printf("\nthe fmod (rem. of x divided y) fn : %.2lf\n", fmod(-4533.222224,3.0));
    printf("\nthe sqrt fn : %.2lf\n", sqrt(4533.222224));
    printf("\nthe pow (gives x to power y) fn : %.2lf\n", pow(4533.222224,2));
    int p;
    printf("\nthe modf fn : %.2lf\n", modf(4533.222224,&p));//returns fraction part and assign integer part ot pointer
    printf("\nthe exp (gives e^x) fn : %.2lf\n", exp(5));//returns e^x
    printf("\nthe cos fn : %.2lf\n", cos(5)); //simlar for sin,tan,etc...
    printf("\nthe acos (gives anti-cos) fn : %.2lf\n", acos(0.28));//similar for asin,atan,etc...
    printf("\nthe cosh (gives hyperbolic cos) fn : %.2lf\n", cosh(5));

    //strftime
    char strtime[50];
    struct tm *tmp;
    tmp = localtime(&tm1);
    strftime(strtime ,50,"%x - %I:%M%p",tmp );
    printf("\nthe time is : %d\n",strtime);

    //unistd.h

    //execvp
    //used to replace this process by call another process

    char *const args[]={"./hello_world.exe",0};
    // execvp(args[0],args);

    //execv similar to privious one
    execv(args[0], args);

    //this printf will not work as whole new process has been started
    printf("\nthe args are : %d\n", *args[0]);
    return 0;
}