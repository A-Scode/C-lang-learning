#include <stdio.h>
// #include <conio.h>
#include <time.h>
#include <string.h>
#define c 3 //columns 
#define r 3 //rows

typedef int(*type)[r];

type sum_matrix(int (* matrix1)[][c], int (* matrix2)[][c]){

    printf("result matrix is : \n");
    int result_matrix[r][c] ;

    for (int i = 0 ; i < r ; i++){
        for (int j = 0 ; j < c ; j++){
            result_matrix[i][j] = (*matrix1)[i][j] + (*matrix2)[i][j];
            printf("\t%d" , result_matrix[i][j]);
        }
        puts("");

    }
    int (* resptr)[r] = result_matrix;

    return resptr;

}

int main(){
    
   int matrix1[r][c] = {
       {2,0,5} ,
       {0,10,21},
       {1,52,11}
   };

   int matrix2[r][c] = {
       {2,0,5} ,
       {0,10,21},
       {1,52,11}
   };

    // clrscr();

    //this pointer can used for further operation
    int(* resptr)[r] = sum_matrix( &matrix1 , &matrix2 );

    char dest[50]="hrello "; 
    char src[20]="world";

    printf("%s\n",strcat(dest ,src ));
    printf("%s\n",strrchr(dest ,'r' ));
    printf("%s\n",strcpy(dest ,"hello" ));

    // getch();
    return 0;
}
