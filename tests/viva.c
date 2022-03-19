#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    // char str1[] = (char*) malloc(50);
    FILE * fp = fopen("files/file1.txt" , "r");

    fscanf(fp , "%s");

    printf("%d");

    // printf("%d", sizeof(str1));

    return 0;
}