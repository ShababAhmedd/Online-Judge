#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void swap(a, b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    int a, b;
    a = 1;
    b = 2;

    printf("Before swap:\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);

    swap(a, b); printf("\n");

    printf("After swap:\n");
    printf("a:%d\n", a);
    printf("b:%d\n", b);
    return 0;
}
