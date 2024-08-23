#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    FILE *fp;   // calling file pointer
    char r[2000]; //2000 bytes
    fp = fopen("/home/studio/Desktop/C/a1.txt", "r"); // fopen(path,operation)



    //file_reading
    fscanf(fp, "%s\n", r); //fscanf() reads till it finds a empty space.
    //fscanf(file_pointer, format_specifier, storage_dest.)
    printf("Line 1: %s\n", r);

    fgets(r, sizeof(r), (FILE *)fp); // fgets() keeps on reading a until it gets a escape char (\n)
    //fgets(storage_dest., bytes_want_to_read, casting_to_file_pointer)
    printf("Line 2: %s\n", r);

    fclose(fp); // this function closes the file which otherwise the resources would be allocated even if the
             // program terminats and the file pointer is not closed.
}
 /*
 Operations that can be done on a file:
   1. Read(r)
   2. Write(w)
   3. Open(o)

   r+ => r+w
   w+ => w+r
   a+ => a+r
 */
