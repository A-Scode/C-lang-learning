#include <stdio.h>

int main(){
    const int arr[10] = {5,433,45,4532,4643,54,23};

    int * arrptr = (int*) &arr;

    // *(arr + 2) = 10; //or arr[2] = 10 ; gives error

    *(arrptr + 2) = 10; // non constant pointer can change the value

    for (int i =0 ; i < sizeof(arr)/sizeof(int) ; i++){
        printf("%d " , arr[i]);
    }

    return 0;
}