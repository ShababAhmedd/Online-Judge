#include<stdio.h>

int main(){
    char name[100];
    scanf("%s", name);

    int count;
    int i = 0;
    while (name[i] != '\0'){
        count++;
        i++;
    }

    printf("The length of the string is %d.", count);

    return 0;
}
