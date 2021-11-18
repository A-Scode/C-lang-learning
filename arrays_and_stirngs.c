#include <stdio.h>
#include <stdlib.h> // for using malloc,free and realloc
#include <string.h>
#include <ctype.h>

void print_arr_func(int arr[]){
    printf("\nthe array is : \n");
    for (int i = 0;i< sizeof( arr)/sizeof(int);i++){
        printf("%d\n", i[arr]);
    }
}

//stirng returning function
char *this_is_string(){
    char *str = "\nstring pointer returned from a funtion....\n";
    return str; ///reutrning pointer
}

void arr_func(int n ,int m, int arr[][n][m]){

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

    //multi-dimensional array

    // int arr4[][][5];// will cause error bcoz left most only allowed to be unspecified

    int arr4[][5][5]={
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}},
        {{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1},{1,1,1,1,1}}
    };

    //traversing 3d array
    printf("\n3D-Array : --->\n");
    printf("arr[0] :%d \n" , sizeof arr4/sizeof arr4[0]); //arr4[0] is treated as *(arr4+0) by compiler
    printf("arr[0][0] :%d \n" , sizeof arr4[0]/sizeof arr4[0][0]);
    printf("arr[0][0][0] :%d \n" , sizeof arr4[0][0]/sizeof arr4[0][0][0]);
    for (int i =0; i< sizeof arr4/sizeof arr4[i]; i++){
        for (int j =0; j< sizeof arr4[i]/sizeof arr4[i][j]; j++){
            for (int k =0; k< sizeof arr4[i][j]/sizeof arr4[i][j][k]; k++){
                printf("%d,%d,%d-%d ",i,j,k,arr4[i][j][k]);
                if (k==( sizeof arr4[i][j]/sizeof arr4[i][j][k] -1)) printf("\n");
            }
        }
    }

    //strcpy
    char str2[30] = "hdzdf" , str3[30];
    *str2 = 'A';//since str2 is pointer to base address of string array so only str2[0] is writable with this
    strcpy(str3, str2);
    printf("\nstr3 : %s\n",str3);

    //strcat 
    char str4[]="hello ", str5[] = "world";
    printf("\n%s\n", strcat(str4 , str5)); //takes string pointer and return string pointer

    //strcmp
    char str6lft[]="zfz" , str6rgt[]="gfg";
    printf("\nstr6lft : %s , str6rgt : %s",str6lft,str6rgt);
    printf("\nThe comparisionof str6lft and str6rgt : %d\n", strcmp(str6lft,str6rgt));//reutrns 1 ,since lft is greater than rgt(i.e. >0)

    char str7lft[]="gfg" , str7rgt[]="gfg";
    printf("\nstr7lft : %s , str7rgt : %s",str7lft,str7rgt);
    printf("\nThe comparisionof str7lft and str7rgt : %d\n", strcmp(str7lft,str7rgt));//reutrns 0 ,since lft is equal to rgt(i.e. =0)

    char str8lft[]="bfb" , str8rgt[]="gfg";
    printf("\nstr8lft : %s , str8rgt : %s",str8lft,str8rgt);
    printf("\nThe comparisionof str8lft and str8rgt : %d\n", strcmp(str8lft,str8rgt));//reutrns -1 ,since lft is lesser than rgt(i.e. <0)

    //string literal stored in read-only part of memory,attempt to modifying them gives undefined behaviour

    //declaring string with pointers
    char *s = "this is string saved as pointer location";
    
    //since it is pointer so it has sizeof long unsigned i.e. 8
    printf("\nsizeof *s is : %d\n",sizeof s);
    printf("\*s is : %s\n", s);

    //conclusion is both are same but diff is we can't use sizeof operator and other related things

    //gets() is risky bcoz it doesn't checks the array bounds . so it suffers from buffer overflow
    char str9[10],str10[10];
    printf("\nEnter a string : ");
    gets(str9);
    scanf("%[^\n]s", str10);//this will automatically bypassed
    printf("\nstr9 : %s , str10 : %s\n",str9 , str10);

    //therefore fgets used to get string input instead of gets
    char *str11; //can be used get string of undefined sizes
    printf("\nEnter strings for str11 : ");
    scanf(" %s",str11);
    printf("\nstr11 : %s", str11); //any length of string can be inputed
    printf("\nlength of str11 is : %d\n" , strlen(str11)); //strlen gives size excluding \0 character
    if (strlen(str11) == 0) printf("\n isNull");

    //storing string in read-write segment stack segment
    char str12[] ="hello this is string";  //stored in stack segment like other auto variables
    *(str12+1) = 65; //base address + 1
    printf("\nstr12 : %s\n", str12);
    printf("this_is_string() : %s\n",this_is_string());

    //3d array passing to a function
    arr_func(5, 5, arr4 );
    
    //multiline strings in c

    char *str13 = "zello "   "this multiline stirng works "
    "without any special charcter"  //compiler makes these string as one
    ;
    puts(str13);

    //arrays of void type and function type don't works
    //void type pointer are possible like

    void *arr5;

    printf("%p\n",arr5);

    //short hand notation for array in c
    //this is same as {1,1,1,1,1,0,50,50,50}
    int arr6[10] = {[0 ... 4]1, [6 ... 8]50};
                //using index to map multiple values

    printf("%d\n",*(arr6+4));//gap at 5 will be filled by 0

    //string duplicate
    char* dupstr11 = strdup(str11);//returns a char * pointer
    //strndump is same but takes n , to copy only n bytes

    //strpbrk
    //matches two string and return pointer to the matching character
    char* strpbrk_char;
    strpbrk_char =  strpbrk(str12, s);
    printf("\nThe first matching char in s & str13 is : %s\n", strpbrk_char);

    //ispunct
    //defined in ctypes.h  
    //all character that nither alphanumeric nor space are included in puctuation
    // ! " # $ % & ' ( ) * +, - . / : ;  ? @ [ \ ] ^ _ ` { | } ~

    printf("\ncheck ']'  is punctuation or not : %d\n", ispunct(']'));

    //isapha and isdigit
    //returns non-zero on true and zero on false

    printf("this is a num : %d ; this is alpha : %d" , isdigit('5'), isalpha('a'));

    
    return 0;
}