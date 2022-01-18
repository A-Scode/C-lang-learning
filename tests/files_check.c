#include <stdio.h>
#include <conio.h>

int main(){

    FILE * file_write= fopen("files/file1.txt" , "w");

    fprintf(file_write , "this is some txt there\nnew line here\nand here also");

    fflush(file_write);
    fclose(file_write);

    FILE * file_read = fopen("files/file1.txt" , "r");

    char * file_data[200];

    fscanf(file_read ,"%[^\a]" , file_data);
    printf("%s", file_data);

    return 0;
}