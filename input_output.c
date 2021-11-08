#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <time.h>
//to take command line arguments
int main(int argc){
    printf("\nthis is commandline argument : %i\n\n\n",argc);

    //printf returns the no. of characters printed
    printf("\nNo. of charcters printed are : %d",printf("\
    this is paragraph to check\n\
    how many charcter are printed in this line"
    ) );

    //scanf return the no of input given
    char a[100],b[100],c;

    printf("\nthis is a printf for taking name input : ");
    int i = scanf("%s" , &a);
    printf("the no of inputs you entered is : %i", i);
    printf("\n\nthe inputs you entered : %s" ,a);
    
    //getchar() getc() and fgetc() return integer

    //scanset in c
    char volatile str1[100],str2[100],str3[100],str4[100];

    //%[] is format specifier for scanset
    printf("\n this input only takes upto new line : ");
    scanf(" %[^\n] ",str1);
    printf("\n the value you enterd : %s",str1);

    //for A-z
    printf("\n this input only takes upto A-z : ");
    scanf(" %[A-z] ",str2);
    printf("\n the value you enterd : %s",str2);

    //this will end input at char s and not including s
    printf("\n this input only takes upto S : ");
    scanf(" %[A-Z^S] ",str3);
    printf("\n the value you enterd : %s",str3);

    //stops at o
    printf("\n this input only takes upto o : ");
    scanf(" %[^o] ",str4);
    printf("\n the value you enterd : %s\n",str4);
    
    
    
    //gets
    char str5[10];
    puts("using gets() to take input");
    // *(&str5[1000]) = "K"; //writing to at 1000 pos of arry of char (string)
    gets(str5);
    printf("data in buffer is : %s\n" , str5);
    //puts and printf and fputs

    puts("hello c language"); 
    puts("hello c language again\n\0"); //puts \n at end automatically


    //printf can cause security issues
    char static str6[20]="hello is 10";
 
    printf("str6 using printf %s \n",str6);

    //usings puts is preffered because in strig formatting printf can cause errors
    puts(str6);

    //using fputs 
    fputs("this is stirng from fputs",stdout); //no endline like puts
    puts("\nhii");

    // %n special specifier
    int n ;
    printf("this is some stirng %n \n",&n);
    printf("the length of above string is : %d",n);

    //sprint and fprint 
    char str7[30];
    sprintf(str7, "\nthis is sprintf, %d",n);//this format string and stores into str7
    puts(str7);

    fprintf(stdout , "\nthis is fprintf, %d\n",n);


    //to input a single charcter
    printf("single char : ");
    // char chr1 = getchar() ;           //this cause freeze buffer
    // printf("\nsingle char is : %c\r\n",chr1);
    printf("\nksldfhello\n");

    //printf crux
    printf("%c ",5+"hello world\n");//this will move the cursor pointer to 5
    printf("%c ",5["hello world\n"]);//all works same compiler breaks down as first
    printf("%c ","hello world\n"[5]);//all works same compiler breaks down as first

    //getchar getc getch getche

    //all read a character and return an integer value

    //getc
    printf("\nEnter a charter in getc : \n");
    printf("\nThe character is : %c\n",getc(stdin));

    //getc and getchar are same and standard funcions

    //getch is present in conio.h and does not use buffer so not waits for enter key
    printf("Enter a charachter in getch: \n");
    printf("the character you entered in is : %c \n",getch());

    printf("%p\n" , *stdin);

    //getche is same as getch

    //difference between %i and %d

    //%i assumes it as integer with any base (oct 0 , hex 0x , dec , bin 0b) converts it to dec
    //%d assumes as the num is decimal
    int int1 , int2;
    scanf(" %d\n",&int1);
    scanf(" %i\n",&int2);

    printf("\nint1 : %d , int2 : %i ");

    //fflush
    //fflush used to write buffered data to output streams like files and stdout (not input steams like stdin)
    fflush(stdout);

    //fscanf use to read data from file 
    char str8[200];
    fscanf(stdin , "%*s %s",str8  ); //%*s skip string until an end line or whitespace encounters

    printf("%s"  , str8);


    //the common buffer problem after using multiple scanf
    //scanf leaves \n in the buffer and next scanf reads it and move forwad empty
    //this cause unusal behaviour in program

    //printable and non-printable characters 

    //control character are placed b/w ascii 0x00 (null) to 0x1f and including 0x7f

    char new_char ;
    printf("\n Enter charcter to check it's type : ");
    new_char = getch();
    printf("\nthe charcter is : %c", new_char);
    if(isprint(new_char)) printf("\n\tit is printable");  //this fn present in ctypes.h
    else if (iscntrl(new_char)) printf("\n\tit is control char...");  //this fn present in ctypes.h


    //random numbers 

    //srand used to set seed for random no (default is srand(1))
    printf("\n\nthe random int is : %i" , rand()); //every time gives same no due to same seed(1)

    srand(time(0));
    
    printf("\nthe new random no with time(0) seed is : %i" , rand());

    printf("\n time.h time is : %llu ", time(0) );

    return 0;
}

