#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    char s1[]="and";
    char s2[100];
    char s3[] = " soWhat";

    strcpy(s2, s1);
    printf("%s\n", s2);

    strcat(s2, s3);
    printf("%s\n", s2);

    int x = strcmp(s2, s1);
    int y = strcmp(s1, s2);
    int z = strcmp(s1, s1);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);

    return 0;
}

/*
    strcpy(destination_string, source_string)
    This function copies the source string to the destination string.

    strcat(destination_string, source_string)
    This function concatenates the source string to the very end of the destination_string.

    strcmp(s1, s2)
    This function compares both the string.
    if s1>s2, this function returns a +ve value.
    if s1<s2, return -ve value.
    if s1==s2, returns 0.
    Compares by dictionary not by size or length.
    e.g. aaa<aab, a<b, k>a, aba>aab
*/
