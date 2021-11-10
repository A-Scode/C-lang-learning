#include <stdio.h>

void print_arr_func(int arr[]){
    printf("\nthe array is : \n");
    for (int i = 0;i< sizeof( arr)/sizeof(int);i++){
        printf("%d\n", i[arr]);
    }
}

int main(void){
    //empty arrray
    int arr1[3];//{0,0,0}
    int arr2[500]={10,20,30,40};//{10,20,30,40,0}
    int arr3[]={343,23};

    int *arrp= arr3;
    
    printf("\narr1 size : %d\n",sizeof arr1);
    printf("\narr2 size : %d\n",sizeof arr2);
    printf("\narr3 size : %d\n",sizeof arr3);
    printf("\narr1 element : %d\n",*(arrp+1));
    printf("\narr2 element : %d\n", 3[arr2]);
    printf("\narr3 element : %d\n", *(arr3+1));//arr3+1 gives the adress of arr3[1]

    arr2[79/10]=10;//will save as arr2[7] it will do floor division

    printf("\narr2[7] = %d\n" , 7[arr2]);
    printf("\narr2[3] pointer : %p\n", 1+arr2);
    printf("\narr2[3] pointer : %p\n", 4+arr2);
    int* add = (int*) &arr2;
    printf("\narr2[2] pointer : %p\n", add+ 4); //address of next elem is +4(sizeof int)

    int len_arr2 = sizeof(arr2)/sizeof(int);
    printf("\nlength of arr2 is : %d\n", len_arr2);

    //tranversing an array
    for (int i =0;i < len_arr2;i++){
        if (i !=len_arr2-1) printf("%u,",i[arr2]);
        else printf("%u\n",i[arr2]);
    }

    //string
    //is a array of characters terminated with null charcter
    char str1[50] = "this is a string";
    printf("\nEnter the value to string : ");
    scanf(" %s", str1); //& is not used to bcoz str1 is arr and without [] it gives base address
    printf("\nEntered string is : %s\n", str1);

    //calling function giving arr
    print_arr_func(arr2);

    //pointer to char
    char char1= 'A';
    char* chrptr = (char*) &char1; //if want only to declare pointer [char *chrptr]
    //double pointer
    char **dbptr ;
    dbptr = &chrptr;
    printf("\nchar pointer : %c\n", *chrptr);
    printf("\nchar double pointer : %c\n", **dbptr);



    return 0;
}