#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
    int chars , spaces , lines , words;
    char one_char;

    FILE * fp = fopen("files/file2.txt" , "r");

    if (fp == NULL ) return 0;

    chars=0;spaces=0;lines=0;words=0;

    while (!feof(fp)){
        one_char = fgetc(fp);
        chars++;

        if (one_char == ' '){
            spaces++;words++;
        }
        else if(one_char == '\n'){
            lines++;words++;
        }
    }

    printf("chars = %d\nspaces = %d\nlines = %d\nwords = %d",
    chars,spaces , lines, words

    );
    fclose(fp);

    return 0;
}