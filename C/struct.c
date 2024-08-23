#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct std{
    char id[9];
    int marks;
};

int main(){
    struct std s1;
    struct std s2;

    strcpy(s1.id, "20241037");
    s1.marks=50;

    strcpy(s2.id, "20241009");
    s2.marks=70;

    printf("s1 ID: %s\n", s1.id);
    printf("s1 marks: %d\n", s1.marks);
    printf("\n");
    printf("s2 ID: %s\n", s2.id);
    printf("s2 marks: %d\n", s2.marks);

    return 0;
}
