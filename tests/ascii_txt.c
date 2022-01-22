#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define font_size 9
#define print_character "##"
#define seperator "  "


struct reg {
    char * id;
    unsigned int line_no ;
};

unsigned int line_no;

void nxt_char(char * );


//char patterns
void print_A(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j <= ceil((double) font_size/2) && chr_reg->line_no == (2*(ceil((double) font_size/2)- (j-1)))-1;
        int con2 = j >= ceil((double) font_size/2) && chr_reg->line_no == (2*(j - ceil((double) font_size/2)))+1;
        int con3 = chr_reg->line_no == ceil((double) font_size/2) && (chr_reg->line_no > (2*(ceil((double) font_size/2)- (j-1)))-1 
                    && chr_reg->line_no > (2*(j - ceil((double) font_size/2)))+1);

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_B(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j== 1 ;
        int con2 = ( chr_reg->line_no == 1  && j !=font_size ) || ( chr_reg->line_no == font_size  && j !=font_size ) || ( chr_reg->line_no == ceil((double) font_size/2)  && j !=font_size );
        int con3 = j == font_size && ( chr_reg->line_no != 1 && chr_reg->line_no != font_size && chr_reg->line_no != ceil((double) font_size/2))  ;

        if (con1 || con2 || con3 ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_C(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 =( chr_reg->line_no == 1  && j !=1 ) || (chr_reg->line_no == font_size  && j !=1 ) ;
        int con2 = (chr_reg->line_no !=1 && chr_reg->line_no != font_size) && j == 1 ;
    
        if (con1 || con2) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_D(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j == 1 || (j == font_size && chr_reg->line_no != 1 && chr_reg->line_no != font_size ) ;
        int con2 = (chr_reg->line_no == 1 && j != font_size) || (chr_reg->line_no == font_size && j != font_size);

        if ( con1 || con2 ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_E(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j==1 ;
        int con2 = chr_reg->line_no ==1  || chr_reg->line_no == font_size;
        int con3 = chr_reg->line_no == ceil((double) font_size/2);
    
        if (con1 || con2 || con3 ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_F(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j== 1 || chr_reg->line_no == ceil((double) font_size/2) || chr_reg->line_no==1 ;
    
        if (con1 ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_G(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1 || j == 1 || chr_reg->line_no == font_size;
        int con2 = ( j == font_size && chr_reg->line_no >= ceil((double)font_size/2));
        int con3 = (chr_reg->line_no == ceil((double) font_size/2 ) && j >= ceil((double) font_size/2));

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_H(struct reg* chr_reg){

    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        if ((chr_reg->line_no == (int) ceil((double) font_size/2))||(j == 1 || j == font_size) ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_I(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ;  j <= font_size ; j++){
        if ((chr_reg->line_no == 1 || chr_reg->line_no == font_size) || j == ceil((double) font_size/2) ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id);
}
}

void print_J(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1;
        int con2 = j == ceil ((double) font_size / 2) && chr_reg->line_no != font_size;
        int con3 = chr_reg->line_no == font_size && j < ceil((double) font_size/2) && j !=1;
        int con4 = j == 1 && chr_reg->line_no > ceil((double) font_size/2) && chr_reg->line_no != font_size;
        if (con1 || con2 || con3 || con4) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );

}
}

void print_K(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j== 1;
        int con2 = chr_reg->line_no <= ceil((double) font_size/2) && j == (2*(ceil((double )font_size/2) - chr_reg->line_no) );
        int con3 = chr_reg->line_no >= ceil((double) font_size/2) && j == (2*(chr_reg->line_no - ceil((double) font_size/2) ));

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_L(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j== 1 || chr_reg->line_no == font_size;

        if (con1 ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_M(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j== 1 || j == font_size;
        int con2 = chr_reg->line_no < ceil((double) font_size/2) && chr_reg->line_no - j == 0;
        int con3 = chr_reg->line_no < ceil((double) font_size/2) && j + chr_reg->line_no == font_size+1;

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_N(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j == 1 || j == font_size;
        int con2 = chr_reg->line_no - j == 0;

        if (con1 || con2 ) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_O(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1 && j != font_size && j != 1;
        int con2 = chr_reg->line_no == font_size && j != font_size && j != 1;
        int con3 = j == 1 && chr_reg->line_no != font_size && chr_reg->line_no != 1;
        int con4 = j == font_size && chr_reg->line_no != font_size && chr_reg->line_no != 1;

        if (con1 || con2 || con3 || con4) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_P(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1 && j != font_size && j != 1;
        int con2 = j == 1 && chr_reg->line_no != 1;
        int con3 = j == font_size && chr_reg->line_no < ceil((double )font_size/2) && chr_reg->line_no != 1;
        int con4 = chr_reg->line_no == ceil((double) font_size/2) && j != font_size ;

        if (con1 || con2 || con3 || con4) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_Q(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1 && j != font_size && j != 1;
        int con2 = chr_reg->line_no == (font_size - ceil((double) font_size/6)) && j != font_size && j != 1;
        int con3 = j == 1 && chr_reg->line_no < (font_size - ceil((double) font_size/6)) && chr_reg->line_no != 1;
        int con4 = j == font_size && chr_reg->line_no < (font_size - ceil((double) font_size/6)) && chr_reg->line_no != 1;
        int con5 = chr_reg->line_no >= ceil((double) font_size/2) && j - chr_reg->line_no == 0;

        if (con1 || con2 || con3 || con4 || con5) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_R(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1 && j != font_size && j != 1;
        int con2 = j == 1 && chr_reg->line_no != 1;
        int con3 = j == font_size && chr_reg->line_no < ceil((double )font_size/2) && chr_reg->line_no != 1;
        int con4 = chr_reg->line_no == ceil((double) font_size/2) && j != font_size ;
        int con5 = chr_reg->line_no >= ceil((double) font_size/2) && j == (2*(chr_reg->line_no - ceil((double) font_size/2) ));

        if (con1 || con2 || con3 || con4 || con5) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_S(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1;
        int con2 = chr_reg->line_no <= ceil((double)font_size/2) && j ==1;
        int con3 = chr_reg->line_no == ceil((double) font_size/2);
        int con4 = chr_reg->line_no >= ceil((double)font_size/2) && j == font_size;
        int con5 = chr_reg->line_no == font_size;

        if (con1 || con2 || con3 || con4 || con5) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_T(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1;
        int con2 = j == ceil((double) font_size/2);

        if (con1 || con2) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_U(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == font_size && j != font_size && j != 1;
        int con2 = j == 1 && chr_reg->line_no != font_size;
        int con3 = j == font_size && chr_reg->line_no != font_size;

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_V(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j <= ceil((double) font_size/2) && chr_reg->line_no == ((2*j)-1);
        int con2 = j >= ceil((double) font_size/2) && chr_reg->line_no == (2*(font_size-j))+1;

        if (con1 || con2) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_W(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j == 1 || j == font_size;
        int con2 = chr_reg->line_no >= ceil((double) font_size/2) && j+(chr_reg->line_no - ceil((double) font_size/2)) == ceil((double) font_size/2);
        int con3 = chr_reg->line_no >= ceil((double) font_size/2) && j-(chr_reg->line_no - ceil((double) font_size/2)) == ceil((double) font_size/2);

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_X(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = j == chr_reg->line_no;
        int con2 = j + chr_reg->line_no == font_size+1;

        if (con1 || con2) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_Y(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no >= ceil((double) font_size/2) && j == ceil((double) font_size/2);
        int con2 = chr_reg->line_no < ceil((double) font_size/2) && chr_reg->line_no - j == 0;
        int con3 = chr_reg->line_no < ceil((double) font_size/2) && j + chr_reg->line_no == font_size+1;

        if (con1 || con2 || con3) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_Z(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
        int con1 = chr_reg->line_no == 1 || chr_reg->line_no == font_size;
        int con2 = chr_reg->line_no + j == font_size+1;
        
        if (con1 || con2) printf(print_character);
        else printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}

void print_Space(struct reg* chr_reg){
    if (chr_reg->line_no == line_no){
    for (int j = 1 ; j <= font_size ; j++){
       printf(seperator);
    }
    printf("  ");

    chr_reg->line_no++;
    nxt_char(chr_reg->id );
}
}
// char patterns end

void nxt_char(char* substr ){
    char nxt_char;
    if (substr[0] >= 97)  nxt_char = substr[0] - 32 ;
    else  nxt_char =  substr[0];

    switch (nxt_char){
        case 32 :
            substr += 1; 
            struct reg new_charSpace = {  substr , line_no  };
            print_Space(&new_charSpace ) ;
            break;
        case 65 :
            substr += 1; 
            struct reg new_charA = {  substr , line_no  };
            print_A(&new_charA ) ;
            break;
        case 66 :
            substr += 1; 
            struct reg new_charB = {  substr , line_no  };
            print_B(&new_charB ) ;
            break;
        case 67 :
            substr += 1; 
            struct reg new_charC = {  substr , line_no  };
            print_C(&new_charC ) ;
            break;
        case 68 :
            substr += 1; 
            struct reg new_charD = {  substr , line_no  };
            print_D(&new_charD ) ;
            break;
        case 69 :
            substr += 1; 
            struct reg new_charE = {  substr , line_no  };
            print_E(&new_charE ) ;
            break;
        case 70 :
            substr += 1; 
            struct reg new_charF = {  substr , line_no  };
            print_F(&new_charF ) ;
            break;
        case 71 :
            substr += 1; 
            struct reg new_charG = {  substr , line_no  };
            print_G(&new_charG ) ;
            break;
        case 72 :
            substr += 1; 
            struct reg new_charH = {  substr , line_no  };
            print_H(&new_charH ) ;
            break;
        case 73 :
            substr += 1; 
            struct reg new_charI = {  substr , line_no  };
            print_I(&new_charI );
            break;
        case 74 :
            substr += 1; 
            struct reg new_charJ = {  substr , line_no  };
            print_J(&new_charJ );
            break;
        case 75 :
            substr += 1; 
            struct reg new_charK = {  substr , line_no  };
            print_K(&new_charK );
            break;
        case 76 :
            substr += 1; 
            struct reg new_charL = {  substr , line_no  };
            print_L(&new_charL );
            break;
        case 77 :
            substr += 1; 
            struct reg new_charM = {  substr , line_no  };
            print_M(&new_charM );
            break;
        case 78 :
            substr += 1; 
            struct reg new_charN = {  substr , line_no  };
            print_N(&new_charN );
            break;
        case 79 :
            substr += 1; 
            struct reg new_charO = {  substr , line_no  };
            print_O(&new_charO );
            break;
        case 80 :
            substr += 1; 
            struct reg new_charP = {  substr , line_no  };
            print_P(&new_charP );
            break;
        case 81 :
            substr += 1; 
            struct reg new_charQ = {  substr , line_no  };
            print_Q(&new_charQ );
            break;
        case 82 :
            substr += 1; 
            struct reg new_charR = {  substr , line_no  };
            print_R(&new_charR );
            break;
        case 83 :
            substr += 1; 
            struct reg new_charS = {  substr , line_no  };
            print_S(&new_charS );
            break;
        case 84 :
            substr += 1; 
            struct reg new_charT = {  substr , line_no  };
            print_T(&new_charT );
            break;
        case 85 :
            substr += 1; 
            struct reg new_charU = {  substr , line_no  };
            print_U(&new_charU );
            break;
        case 86 :
            substr += 1; 
            struct reg new_charV = {  substr , line_no  };
            print_V(&new_charV );
            break;
        case 87 :
            substr += 1; 
            struct reg new_charW = {  substr , line_no  };
            print_W(&new_charW );
            break;
        case 88 :
            substr += 1; 
            struct reg new_charX = {  substr , line_no  };
            print_X(&new_charX );
            break;
        case 89 :
            substr += 1; 
            struct reg new_charY = {  substr , line_no  };
            print_Y(&new_charY );
            break;
        case 90 :
            substr += 1; 
            struct reg new_charZ = {  substr , line_no  };
            print_Z(&new_charZ );
            break;
        default :
            break;
    }
}

void txt2ascii(char name[50] , unsigned short lines ){
    // printf("%s\n" , name);
    for (int  i = 1 ; i <= lines ;i++){
        line_no = i;
        nxt_char(name );
        printf("\n");
    }
}

int main(){
    
    char *name;

    name = (char *) malloc( sizeof(char) * 50);

    printf("Enter your name : ");
    scanf("%[A-z ]" , name );
    txt2ascii(name ,font_size);
    getch();

    return 0;
}