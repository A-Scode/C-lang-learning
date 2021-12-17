#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    // memory layout of c program https://www.geeksforgeeks.org/memory-layout-of-c-program/
        //Text segment  //stores the program file at very low address and make it read-only so no accidental change interuppt

        //Initialized segment  //contains global and static varible and is in read-write area
                               //pointer and constant global are in read-only

        //Unitialized segment bss //contains unitialized global and static variable intialized to 0 at end of data segment

        //Heap //it start at end of bss and grow to higher addresses ,used in dynamic memory allocation by malloc/calloc/free

        //stack //contains local variables ,set of values pushed for on one func call is called stack frame
                //in recursion each time func call new stack frame is created so scope is maintained

        
    //memory allocation

    int *ptr = (int*)malloc(sizeof(int)*10); //dynamic memory allocation
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;

    printf("sizeof dynamically allocated pointer value - %d\n", sizeof *ptr);//4 coz first address

    printf("\nthe arr el : %d %d %d %d\n", ptr[0],ptr[1],ptr[2],ptr[3]);//grabage value at not definend pointers

    ptr = malloc(sizeof(int)* 4); //will again find free memory and allocate to it
    //if memory is insufficient malloc returns null pointer
    printf("\nthe arr el : %d %d %d %d\n", ptr[0],ptr[1],ptr[2],ptr[3]);// all grabage values

    //4*3 bytes are still left

    //allocate much more memory to it
    int (*ptr2)[20]= malloc(sizeof(long double) * 20);
    printf("\nsizeof ptr2 : %d bytes\n", sizeof(*ptr2));//whole array pointer
    
    //calloc /contigious allocation
    int* ptr3 = (int *) calloc(5,sizeof(int));
                            // (n block , of size)
    *ptr3++ =5;*ptr3++ =10;*ptr3++ =15;*ptr3++ =20;*ptr3++ =25;
    ptr3-=5;
    printf("\ndata in ptr3 : %d %d %d %d %d\n" ,
    ptr3[0],ptr3[1],ptr3[2],ptr3[3],ptr3[4]);

    free(ptr3);
    int a;
    a =1;
    do{
        printf("\nI'am doing somethig do while\n");
        a--;
    }while(a!=-1);

    //opening a file 
    FILE *file_name = fopen("file_handling/samplefile.txt", "a+");

    //file_modes
        // w , r ,a ,r+ , a+ , w+
        //rb , wb , ab , rb+ , wb+ , ab+
    
    int (*fdptr) = (int*) malloc(sizeof(int)*500);

    fclose(file_name);
  
    return 0;
}