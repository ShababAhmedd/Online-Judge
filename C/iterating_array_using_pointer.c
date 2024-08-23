#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

    int arr[5]={1, 2, 3, 4, 5};
    int *ip = arr;

    for(int i=0; i<5; i++){
        printf("The address of arr[%d]:%x\n", i, ip);
        printf("The value of arr[%d]:%d\n", i, *ip);
        ip++;
        printf("\n");
    }
    return 0;
}
