#include <stdio.h>

//creating struct1

struct struct1 {
    int x, y; //x=10 will give error bcoz no memory allocated just data type declared
    float z; //members
}; //remember it's not a block

union union1{
    int x:10,y;
    double z; //all the members share same memory location
    //memory size decided by largest member so its 8 by float
};

void main(){
    //enum - user defined data-types in c
    //enum is useful in defining constants for a block of scope in easy way
    //it readily indexes the enum
    enum week {Mon ,Tue ,Wed ,Thus ,Fri ,Sat};
            //  0    1    2    3     4    5
    printf("%d %d %d %d %d %d\n",Mon ,Tue ,Wed ,Thus ,Fri ,Sat );
    enum week day=Mon;

    printf("today is : day-%d\n", day);
    printf("sizeof enum var : %d\n", sizeof day);

    //struct
    //limitations -
    //cannot use operators like +,-,etc
    //do not permit funcs inside structures
    //no static member allowed
    struct struct1 obj1 = {5,10,20};

    printf("variables in obj1:\n\tx=%d\n\ty=%d\n\tz=%f\n", obj1.x, obj1.y , obj1.z);
                                                            // member of struct accessed using the . operator
    //initializing in unordered manner
    struct struct1 obj2 = {.y= 10, .z=5.322334343434};
                            //only works in c not in c++
    printf("variables in obj2:\n\ty=%d\n\tz=%f\n", obj2.y , obj2.z);

    printf("sizeof struct1 : %d\n", sizeof(struct struct1));

    //array of structures
    struct struct1 structarr[3] = {
        {1,2,3},
        {4.5,6},
        {7,8,9}
    };

    puts("struct1 sturctarr : ");
    for (int i =0 ; i < sizeof(structarr)/sizeof(struct struct1); i++){
        printf("\t%d\t%d\t%.2f\n", structarr[i].x, structarr[i].y, structarr[i].z);
    }

    //struct pointer
    struct struct1 *ptr1 = &obj1;
    int *ptr2 = structarr;

    //accessing using pointer
    printf("ptr1 : %d , %d , %f\n", ptr1->x ,ptr1->y  ,ptr1->z);

    //union
    //union is user defined datatype same as struct but all members share same memory location

    union union1 uobj1 = {2147483647,4,1.00};
    printf("sizeof union union1 : %d\n", sizeof(union union1));
    printf("values of union : %d %d %lf\n", uobj1.x , uobj1.y, uobj1.z);
    uobj1.z=7.00;
    printf("values of union : %d %d %lf\n", uobj1.x , uobj1.y, uobj1.z);

    //pointers to union
    //same as struct

    union union1 *ptr3 = & uobj1;
    //changing value using pointer
    ptr3->x=700;
    printf("ptr3 :\n\t%d\t%d\t%lf\n", ptr3->x, ptr3->y,ptr3->z);

    struct struct3 {
        char chr;
        short int int1;
    };
    //sizeof struct3 should be 3 bytes
    printf("sizeof struct3 : %d bytes\n",sizeof(struct struct3));// 4 bytes
    //to align memory addresses
    //https://www.geeksforgeeks.org/structure-member-alignment-padding-and-data-packing/
    //  1(char) + 1(padding) + 2(short int) = 4byte

    //struct type supports only assignment operation 
    //not any other like equality check

    struct struct1 obj3 = obj2; //assignment

    //printf("obj2 == obj3 : %d", obj2 == obj3); //produce error

    struct date{
        //bit fields
        unsigned int d :5; //only 5 bits of memory allocated
        unsigned int m :4; //bit fields only work in struct and union
        unsigned int y : 11; //bit fields can't be greater data type size i.e 4*8 =32
    };

    struct date date1 =  {31, 12, 2021};
    printf("date1 is : %d/%d/%d\n", date1.d, date1.m, date1.y);
    printf("sizeof date : %d\n", sizeof(struct date));//4 adds remaining padding bytes

    struct today{
        int d : 5;
        int : 0; //force alignment on boudary
        int m : 4;
        int y : 11;
    };
    printf("sizeof today : %d\n", sizeof(struct today) );//8 forced padding
    


}