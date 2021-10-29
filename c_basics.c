#include <stdio.h>
//  
int main(){
    //\a for alarm beep sound in the system
    printf("\a this is a alarm \v \t hello \0  ");

    printf("My mobile number "
          "is 7\a8\a7\a3\a9\a2\a3\a4\a0\a8\a  \\this is backslach with escape character");
    printf("\072");

    //Tokens
    char string[20]="hello world what" ;
    char arr_str[10]={'a','b','c','\0'}; //strings are just array of characters in c lang ,
    //characters are inti.. by '' single quote and strings are init.. by "" double quotes

    //lets check by actual array
    // char act_arr[]= ['a', 'c','j','\0'];

    printf("\n\n%s\t\t%s",string,arr_str);

    int i = 5, j=6;
    printf("\n%i , %i" , i, j);
    //lets swap the values
    int temp_i= i , temp_j = j;
    i = temp_j, j = temp_i;
    printf("\n%i , %i" , i, j);
    

    return 0;
}