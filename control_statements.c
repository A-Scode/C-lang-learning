#include <stdio.h>

int main(void){
    const int int1 = 50;
    int int2 = 10;
    const char str1[] = "this is str1";
    switch(int2){
        case  10:  // int1: //requires const int not even const string will work and only work in c++
            printf("\nthis will not work\n");
        // break;
        default: 
            printf("\nThis is default(if any above not work) string\n");
        break;// execution of break statement terminates switch case
    }

    //for loop 
    for (int int3 = 0 ; int3<=5; int3+=1){
        printf("I'am in for loop : %d\n", int3);
    }

    int int4 = 0;
    while (int4<=5){
        printf("I'am in while loop : %d\n", int4);
        // continue; //will make it infinite    
        int4++;
    }
    switch (int2){
        int int5 = 5; //never executed in switch case

        case 10: //.0: //case ony supports int type
        printf("\nint5 : %d\n", int5);//0

        // case 5+5 ://two cases can't be same
        // printf("\nint5 : %d\n", int5);//0

        0;
    }

    //avoid using goto statements as they and they make program logic complex

    //continue and break
    for (int int7 = 1 ; int7 >6 ; int7++){
        if (int7%2 == 0){
            printf("\nNext is continuing\n");
            continue;
        }
        else if (int7==5){
            break;}
        printf("\nprint not continued\n");
    }
    // loop using goto statement and label
    int int6 = 0;
    loop_label : 
        printf("I'am under goto loop : %d\n" , int6);
        int6++;
        if (int6 < 5){
            goto loop_label;
        }

    switch(int1){
        case 1 ... 10://range from 1-10
        printf("int6 is in range of 1-10 : %d\n", int6);

        case 11 ... 20:
        printf("int6 is in range of 11-20 : %d\n", int6);

        case 21 ... 30:
        printf("int6 is in range of 21-30 : %d\n", int6);


    }

    return 0;
}