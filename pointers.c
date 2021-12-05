#include <stdio.h>
#include <stdbool.h>

//giving arr[2] will take only first 2 elems
void print_arr(int arr[] ,int n){ //arr[] interpreted as int *arr so it takes the pointer ot array
                        // to get sizeof arr
    printf("arr[] : %p\n", arr);
    printf("{\n");
    printf("sizeof arr pointer : %d bytes\n", sizeof arr); //giving size of pointer
    for(int i = 0 ; i< n; i++){ //in func sizeof will cause bugs coz arr is treated as pointer and reutrn size of int*
        printf("\t%d,\n", arr[i]);
    }
    printf("{\n");
}

long long arr_sum(int *arr ,int n){
  
    long long sum = 0;

    for( int i =0; i < n;i++){
        sum += arr[i];
    }
    return sum;

}

//local variable pointer to global
int *local_var(){
    /*static*/ int x = 20;
    printf("Address of x(func) : %p\n", &x);
    return &x; //memory is free after fun execution so give garbage value
}

int main(){
    //pointer store a varible address or a memory location

    int var = 10; //integer varible

    //creating pointer
    int *ptr = &var;
    //using * to acess value from pointer is called derefrencing
    printf("value of var : %d\n", *ptr);

    //changing var using pointer
    *ptr = 20;
    printf("value of var : %d\n", var);

    //creating double pointer
    int **ptr2 = &ptr;

    //changing using double pointer
    **ptr2 = 30;
    printf("value of var : %d\n", var);

    //address  of var
    printf("The adderss of p : %p\n", ptr);
    //address of pointer *ptr
    printf("The adress of pointer of p : %p\n", ptr2);

    //Arithmetic operation on pointers
    // ++ (increment)
    // -- (decrement)
    // += or + (addtion with integer)
    // -= or - (subtraction with integer)
    printf("pointer operation ++ : %p\n", ++ptr);
    printf("pointer operation -- : %p\n", --ptr);
    ptr +=2;
    printf("pointer operation +=2 : %p\n", ptr);
    ptr -=2;
    printf("pointer operation -+2 : %p\n", ptr);

    //array pointers 
    int arr[10] = {5,4,1,2,8};
                // 0,1,2,3,4 indexes

    printf("sizeof arr : %d\n", sizeof arr);


    printf("array pointer value : %p\n", arr );

    //get array first obj
    printf("arr[0] = %d\n", *arr);

    //get array n obj
    printf("arr[n] = %d\n", *((arr+3)+1));//n = 4 here arr is base adress of array and adding to it gets next elements\
                            //interpreted same as arr[3+1]

    //array out of range
    printf("arr[10] = %d\n", 10[arr]);// will not give any error but give unexpected values or garbage value
                            //interpreted same as arr[10]

    // Advantages of using array pointer as parameter over copying it
        //increases efficiency of code (copy is inefficient for memory)
        //save time 

    print_arr(arr,(sizeof arr /sizeof(arr[0])));

    printf("Sum of elems of array : %lld\n", arr_sum(arr,(sizeof arr /sizeof(arr[0]))));

    // * derefrencing operator
    // & address operator

    printf("*&*&*arr : %d\n", *&*&*arr); //derefrencing

    //creating pointer from other scope

    // danggling pointer
    // points to address which is freed
    int *ptr3 = local_var(); //this type of pointers are called danggling pointer

    printf("Address of x(out of func) : %p[dangling pointer]\n",ptr3); //since mem is freed after execution so garbaage value is assigned
    //but it will work if x is static since it remember throughout execution

    // void pointer
    // advantages
    // void pointer can be assigned to any datatype
    // malloc() and calloc() return void* so can be type casted to any type
    // cannot be derefrence directly without cating
    void *ptr4;

    int x =10;
    float y =20;

    ptr4 = &x;
    printf("void pointer is int : %d\n", *((int*)ptr4));

    ptr4 = &y;
    printf("void pointer is float : %.2f\n", *((float *)ptr4));

    //NULL pointer
    int *ptr5 = NULL; //carrys null value , uninitialized carrys garbage value
    printf("NULL pointer : %p\n", ptr5);

    // wild pointer
    int *ptr6; //is wild coz it carrys garbage value
    printf("wild pointer : %p\n", ptr6);

    //pointer to a func
    int (*func)(int); //here (*func) used bcoz without () operator preceedence will cause bugs

    //diff b/w array & pointer
        //pointer arithmetic operator ++,-- allowed
        //pointer value stored in read-only memory
        //sizeof pointer give only size by address
    
    //Pointer to whole array

    int (*arrptr)[10] = &arr;
    int *ptr7 = arr;

    printf("pointer for whole array : %p\n", arrptr);
    printf("pointer for array : %p\n", ptr7);
    ptr7++; //will add 1*sizeof(int) shifts 
    arrptr++; //will add 10*sizeof(int) bcoz of shifts whole array
    printf("pointer for whole array : %p\n", arrptr);
    printf("pointer for array : %p\n", ptr7);

    //sizeof
    printf("sizeof derefrence of arr : %d\n",sizeof *ptr7); //will give 4 as it points to arr[0]
    printf("sizeof derefrence of whole arr : %d\n", sizeof *arrptr);//will give 40 as it points to whole arr

    //2d array pointer
    int arr2d[3][3] = {{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    int (*arr2dptr)[3] = &arr2d[0];
    printf("(1,0) elem : %d\n", *arr2dptr[0]);
    arr2dptr++;
    printf("(2,0) elem : %d\n", *arr2dptr[0]);
    arr2dptr++;
    printf("(3,0) elem : %d\n", *arr2dptr[0]);

    return 0;
}