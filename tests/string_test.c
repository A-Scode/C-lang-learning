#include <stdio.h>

int main(){
    printf("hii\n");

    char *str =  "hello";
    char str2[10] = { 65 , 22,32,45,11,0 };
    *str = 'k';
    
    printf("%s" , str2 );
    printf("%c" , str[0]);

    return 0;
}