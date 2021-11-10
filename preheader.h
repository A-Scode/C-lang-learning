#define Crash() do{\
(( void (*)(void) )0 )();\
}while(0)

#ifdef ERR 
#define No_Err "hii"
#endif

#ifndef Hero
#define Hero "I am hero"
#endif

#ifndef true
#define true 1
#endif

#pragma startup func1//not works in gcc
#pragma exit func1//not works in gcc

#if true<1
#define bhag 0
#elif flase ==6
#define yha 9
#else
#define se "10"
#endif

void __attribute__((constructor)) func1(); //replace #pragma startup
void __attribute__((destructor)) func1(); //replace #pragma exit
void func1(){
    puts("Insidie function1");
}