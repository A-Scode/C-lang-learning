#include <stdio.h>
#define name_to_str(a) #a
#define join_num(a, b) a##b

int main(void){

    //types of operators in c
    // arithmetic operators (+,-,/,*,%,++i,i++,--i,i--)
    // relational operators (==,!=,<,>,<=,>=)
    // bitwise operators (&,|,~,^,<<,>>)
    // assignment operators (=,+=,-=,etc.)
    // other operators (comma , conditional , sizeof , address , redirection)

    int int1 = 20 , int2 = 34;

    printf("\t\ta - b : %5i\n",(int1-int2));
    printf("\t\ta - b : %5i\n",(int1+int2));
    printf("\t\ta - b : %5i\n",(int1/int2));
    printf("\t\ta - b : %5i\n",(int1*int2));
    printf("\t\ta - b : %5i\n",(int1%int2));

    //using i++ operator 
    // it adds up 1 after executing current statement
    printf("value of int1 before i++ : %i\n", int1++);
    printf("value after i++ is : %i\n",int1);

    //using ++i operator
    printf("value of int2 before ++i : %i\n",++int2);
    printf("value of int2 after ++i : %i\n\n",int2);

    //relational and logical operators
    printf("For int1 : %i , int2 : %i\n\n",int1 , int2);
    printf("equal equal to operator : %s\n", int1 == int2?"ture":"false");
    printf("not equal to operator : %s\n", int1 != int2?"ture":"false");
    printf("greater than operator : %s\n", int1 > int2?"ture":"false");
    printf("greater than equal to operator : %s\n", int1 >= int2?"ture":"false");
    printf("less than operator : %s\n", int1 < int2?"ture":"false");
    printf("less than equal to operator : %s\n", int1 <= int2?"ture":"false");

    //logical operators
    //And operator if both inputs are true reutrn true(1) else flase(0)
    printf("\nAND operation : %i  \n",0b100100 && 0b001001);
    //OR operator if any of inputs are true reutrn true(1) else flase(0)
    printf("\nOR operation : %i  \n",0b100100 || 0b001001);
    //NOT operator if  input is true reutrn flase(0) else true(1)
    printf("\nNOT operation : %i  \n",!0b100100);

    //short-circuit in logical operators

    //int1 = 21 int2 = 35
    //AND
    //here printf will not run becoz first condition is false thus it doesn't checks 2nd one
    int int3 = (int1 == int2) && printf("this is ture bcoz it return no of charcters");

    //OR
    // here 2nd operand will not be evaluated if 1st is true
    int int4 = (int1!=int2) || printf("this is also true");

    //Bitwise operators (&,|,~,>>,<<,^)
    printf("\n\nBitwise AND : %i\n",0b100100 & 0b001001); //000000 ,or 0
    printf("Bitwise OR : %i\n",0b100100 | 0b001001); //101101 ,or 45
    printf("Bitwise NOT/complement : %i\n",~0b100100 );//011011 ,or 16+8+2+1
    printf("Bitwise XOR : %i\n",0b100100 ^ 0b001001);//101101 ,or 45
    printf("Bitwise Right Shift : %i\n",0b100100 >> 31); //these shift bits in memory so carefull of mem size
    printf("Bitwise Left Shift : %i\n",0b100100 << 3);//for int is 32 (31+1(singn bit))
    //32 bit shif will show waring in case of integer

    //operator preceedence and asociativity

    //associativity for most opreater is L to R
    //associativity matters when an expression uses opreater of same preceedence

    printf("\ncalulation result : %.2f\n",10+200*0.1-7/2);

    //associativity R to L :- ++,--,+,-!,~,(type)[casting],&(address),sizeof,
    //?:(ternary operator)

    //comma operator
    int a = (1,2,3,4,4,32,0,2); //this takes 2 operand .discards 1st and return the 2nd value
    printf("\n the value return by comma : %i", a);

    //sizeof operator

    printf("\nthe sizeof 4+5.0 and int is : %u , %u\n", sizeof( 4+5.0), sizeof(int) );
    //since 5.0 is eval as double by default

    sizeof a++;
    printf("\nvalue of a is : %i\n", a);//2, becoz sizeof is compile time operator

    // ++i,i++,--i,i-- requires L-value 
    //this will throw error
    //printf("\n the value of ++(-i) : %i\n",++(-a));//size ++i,etc required to update value of i
    //but -(++i) is valid
    //lvalue means it has some memory address

    //preceedence of post++ is heigher than pre++

    //-ve in modulus
    printf("\nmod of -int1 to int2 : %d\n", -int1%-int2  );//sign of left oprand is assigned to res in %

    printf("\nlet see the ternary : %i\n",0?"cdddss":3434);//show warning of inter type mismatch in conditional exp

    //++*p ,*++p ,*p++

    int arr[] = {50,60,70};
    int *p = arr;

    //++*p
    ++*p; //eval as ++(*p)
    printf("\nthe ++*p : %5i\n",*p);//51

    //*++p
    *++p;//eval as *(++p)
    printf("the *++p : %5i\n",*p);//60

    //*p++
    *p++;//eval as *(p++)  , almost same as *++p ,diff is it is postfix++
    printf("the *p++ : %5i\n",*p);//70

    printf("\n%*chello",5,' '); //used to padd output

    //sizeof

    int int5 = sizeof(printf("helloihii"));//printf not executed only return type is considered and get its size
    printf("\nThe size of printf is : %d", int5);

    //strlen()
    char str[]="hello this is a string";
    printf("\nlen is : %d \nsize is : %d ",strlen(str) , sizeof str);

    //# and ## operator (in pre-processor)

    printf("\nhello %s",name_to_str(world));
    printf("\njoin is : %d", join_num(1,2));


    return 0;
}