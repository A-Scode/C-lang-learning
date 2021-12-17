#include <stdio.h>

struct file_struct {
    char name[50] ;
    int age ;
    float percentage;
};

int main(){
 //opening a file 
    FILE *file_name = fopen("file_handling/samplefile2.txt", "a+");

    //file_modes
        // w , r ,a ,r+ , a+ , w+
        //rb , wb , ab , rb+ , wb+ , ab+
    
    int (*fdptr) = (int*) malloc(sizeof(int)*500);

    fread(fdptr ,sizeof(int), 50 ,file_name);

    rewind(file_name); //get pointer to start of file
    printf("\nfile pointer at : %d\n", ftell(file_name));
    printf("\nfile data : %s\n",fdptr);

                    //L for long data type
    fseek(file_name , 0L , SEEK_SET);//same as rewind(file_name)
            // fp   , offset , offset_oringin (SEEK_SET , SEEK_CUR , SEEK_END)
                                            // start    from cursor   from end

    //ways to write data into file
    fprintf(file_name  , "this is new data in the file %s\n", "by shouryaraj");
    fputs( "this is again a data\n",file_name );
    //fputc('S',file_name);

    //ways to read
    char str1[500] ;
    fgets(str1 , 500  , file_name);
    printf("\nget data by fgets : %s\n", str1);

    fseek(file_name , 0L, SEEK_SET);

    char str2[500];
    fscanf(file_name , "%*s",str2 );
    printf("data get in file : %s\n", str2);

    fseek(file_name , 0L , SEEK_END);

    printf("\nfeof return 0 if file is end : %d\n", feof(file_name));
    //if not eof then returns non-zero value

    fclose(file_name);
    
    FILE * file3 = fopen("file_handling/samplefile2.txt","a");
    printf("file3 in a mode : %d\n",ftell(file3));
    fclose(file3);

    FILE * file2 = fopen("file_handling/samplefile2.txt", "w");
    printf("file2 in w mode : %d\n", ftell(file2)); //0
    fprintf(file2, "I'am writing something into the file and\nI'am going to take it seriouly\
    \n this is some nuinsence going on there");
    fclose(file2);

    FILE * file4 = fopen("file_handling/samplebinaryfile.bin", "w+b");

    struct file_struct female = {"anjali" , 16 , 92.54};
    //writing binary data to file 
    fwrite(&female ,sizeof(struct file_struct),1 , file4 );

    fflush(file4); //to save data whatever is written into it

    fpos_t pos ;
    //geting pos in variable
    fgetpos(file4, &pos);

    //reading binary data from file
    struct file_struct read_female ;
    fread(&read_female , sizeof(struct file_struct) , 1, file4 );

    //set position using fsetpos
    fsetpos(file4 , &pos);

    printf("\npos is : %llu\n", pos);

    printf("\nthe data in the file : \n\t%s\t%d\t%f\n",read_female.name , read_female.age, read_female.percentage);
    fclose(file4);

    int rname = rename("file_handling/samplebinaryfile.bin" , "file_handling/samplebinfile.bin");

    printf("file opreation : %d\n" , rname );
    if (rname != 0) remove("file_handling/samplebinfile.bin");

    //tmpfile 
    //creates temporary file which is deleted automatically on temination of program
    
    FILE  * tmp = tmpfile(); 

    printf("tmpfile has been created : %d\n" , ftell(tmp));

    return 0;
}