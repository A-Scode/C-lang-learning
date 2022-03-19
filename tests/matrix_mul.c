#include <stdio.h>
#include <conio.h>

void print_matrix(int r , int c ,int arr[r][c] ){

    for (int i =0 ; i < r ; i++){
        for (int j = 0 ; j < c; j++){
            printf("\t%d" , arr[i][j]);
        }
        puts("");
    }
}

int main(){

    int r1 , r2, c1 , c2;

    printf("Enter no. of rows in first matrix : ");
    scanf(" %d" , &r1);
    printf("Enter no. of column in first matrix : ");
    scanf(" %d" , &c1);
    printf("Enter no. of rows in second matrix : ");
    scanf(" %d" , &r2);
    printf("Enter no. of column in second matrix : ");
    scanf(" %d" , &c2);

    int res_r = r1;
    int res_c = c2;

    int matrix1[r1][c1] ;
    int matrix2[r2][c2];

    int res_matrix[res_r][res_c];

    printf("Enter first matrix : ");
    for (int i = 0 ; i < r1 ; i++){
        for (int j = 0 ; j < c1 ; j++){
            scanf(" %d" , &matrix1[i][j]);
        }
    }

    printf("Enter second matrix : ");
    for (int i = 0 ; i < r2 ; i++){
        for (int j = 0 ; j < c2 ; j++){
            scanf(" %d" , &matrix2[i][j]);
        }
    }

    printf("matrix1 :\n");
    print_matrix(r1 , c1 , matrix1);
    printf("\n");
    printf("matrix2 :\n");
    print_matrix(r2 , c2, matrix2 );

    for (int i =0; i< res_r ; i++){
        for (int j = 0 ; j < res_c ; j++){
            int sum = 0;

            for (int k = 0 ; k < c1 ; k++){
                sum += matrix1[i][k]* matrix2[k][j];
            }
            res_matrix[i][j] = sum;
        }
    }

    printf("res matrix :\n");
    print_matrix(res_r , res_c , res_matrix);

    return 0;
}