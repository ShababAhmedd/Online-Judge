#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

       float f = 10.003501;
       float *fp = &f;

       printf("Address of f:%x\n", &f);
       printf("Address stored in fp:%x\n", fp);

       // Dereferencing
       printf("Data inside Pointer:%f", *fp);

}


/* %X --> ?
Addresses are represented with unsigned hexadecimal value.
So to get an accurate value representation, we use %x
which is the format specifier of the unsigned hexadecimal value.
*/
