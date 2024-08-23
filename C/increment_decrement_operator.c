#include <stdio.h>
int main(){
    int i, x, j, y;

    // pre-increment
    i = 10;
    x = ++i; // first i is incremented, then the value is assigned to x.
    printf("i=%d, x=%d \n", i, x);

    printf("\n");

    // post-increment
    j = 10;
    y = i++; // first the value of i is assignmed to x, then i is incremented.
    printf("i=%d, x=%d \n", j, y);

    // same concept for decrement.

    return 0;
}
