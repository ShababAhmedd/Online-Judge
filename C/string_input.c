#include<stdio.h>

int main(){
    char name[6];   // size + 1(for \0)
    scanf("%s", name);

    printf("The name is %s", name);

    return 0;
}
