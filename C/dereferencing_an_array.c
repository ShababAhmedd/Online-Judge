#include<stdio.h>


int main() {
    int arr[5]={10, 20, 30, 40, 50};
    int arr_size=sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<=arr_size-1; i++){
        printf("%d\n", *(arr+i));
    }

    return 0;
}
