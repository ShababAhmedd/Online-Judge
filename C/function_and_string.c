#include<stdio.h>
#include<string.h>

void func(char arr[]) {
    printf("%lu\n", strlen(arr));

    int i = 0;
    while (arr[i] != '\0') {
        printf("%c", arr[i]);
        i++;
    }
}


int main() {
    char arr[] = "string";
    func(arr);
    return 0;
}
