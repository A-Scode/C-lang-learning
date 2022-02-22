#include <stdio.h>
#include <stdlib.h>

int main(int argc , char * argv[]){
    system("cls");

    printf("No of arguments are : %d\n" , argc);
    printf("the arguments are : \n");

    for (int i =0 ; i < argc ; i++){
        printf("\tArgument %u : %s\n",i, *(argv+i));
    }

    // getchar();
    return 0;
}