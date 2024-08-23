#include<stdio.h>

void fun(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }
}

int main() {
    int arr[5]={10, 20, 30, 40, 50};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    fun(arr, arr_size);

    return 0;
}
