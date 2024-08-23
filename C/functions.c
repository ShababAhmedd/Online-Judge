#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void yay(){
    printf("Hi.. This is me, Void!\n");
}

// prototyping so that we don't get inplicit declaration function warning.
int add(c, d);
int sub (e, f);

int main(){

    int a = 10;
    int b = 20;

    yay();

    int y = add(a, b);
    printf("Add: %d\n", y);

    sub(a, b);
    return 0;
}

int add(c, d){
    int add = c+d;
    return add;
}

int sub(e, f){
    int sub = e-f;
    printf("sub: %d\n", sub);
}
