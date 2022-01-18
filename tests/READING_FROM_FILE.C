#include <stdio.h>
#include <conio.h>

int main(){

    FILE * read_file = fopen("files/file1.txt" , "r");
    //clrscr();
    puts("file data : \n");

    do{
        if( feof(read_file)){
            break;
        }
        char line[200];
        fscanf(read_file ," %[^\n]s" , line);
        printf("%s\n" , line);

    }while(1);
    fclose(read_file);
    //getch();
    return 0;
}