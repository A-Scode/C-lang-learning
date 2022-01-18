#include <stdio.h>
#include <conio.h>

int main(){
    FILE * write_file = fopen("files/file2.txt" , "w");

    // clrscr();

    fprintf(write_file , "this new file\n");
    fprintf( write_file,"inserted new line\n" );
    fprintf(write_file , "again a new line\n");

    fclose(write_file);

    // getch();
    return 0;
}