#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

       int arr[5] = {1,2,3,4,5};
       int len = sizeof(arr)/sizeof(arr[0]);
       for(int i=0; i<len; i++){
           printf("arr[%d]:%d\n", i, arr[i]);
       }

	return 0;
}

/*
size of each element in an array is 4.
Here are 5 elements in the array. So, 5*4 = 20.
If we divide the size of the array with the size of anyone of the element we will get the length of the array.
len = (size of each element * no. of elements)/size of anyone element
*/
