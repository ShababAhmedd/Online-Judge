#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    FILE *fp;   // calling file pointer
    fp = fopen("/home/studio/Desktop/C/a1.txt", "w+"); // fopen(path,operation)

    fprintf(fp, "the_text_we_want_to_include\n");
    fputs("text_we_want_to_write\n", fp);
    //both these functions does exactly the same thing.

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
