#include <stdio.h>
//#include <conio.h>
#include <math.h>

int main(){
    int rad;

    printf("Enter the radius : ");
    scanf("%d" , &rad);

    printf("\033[0;32m"); // set green

    for (int r = 0 ; r <= (2*rad) ; r++){
        for (int c = 0 ; c <= (2*rad) ; c++){
            int check_rad = floor(sqrt( pow((r - rad),2.0) + pow((c - rad) , 2.0) ));

            if (check_rad == rad){
                printf(" *");
            }else{
                printf("  ");
            }
        }
        printf("\n");
        if (r == rad){
            printf("\033[0;35m");// set purple
        }
    }

    //getch();
    return 0;
}