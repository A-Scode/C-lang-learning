#include <stdio.h>

int main(){
    printf("hello\r\f");
    char * str ;
    gets(str);

    printf("%s\n" , str);

    return 0;
}