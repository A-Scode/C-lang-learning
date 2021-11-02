#include <stdio.h>
// this new file is specifically created to check extern keyword

extern int global_extern; //decalaration of variable is done
int global_extern = 832; //definition is done

//definition is assumed to be super set of declaration

extern char file_name[]; //extern keyword just makes the varible global
//no memory allocatin done on extern
char file_name[] = __FILE__;

//this type of files can be used in large projects to maintains a lot of
// variable whose values can be changed in specific file


//importing this file with main func will conflict in the parent program


int imported_fun(void){  //extern implicity called to funcitions but not to variables.
    printf("\n\t\tthis file is imported...😂");
    return 0;
}