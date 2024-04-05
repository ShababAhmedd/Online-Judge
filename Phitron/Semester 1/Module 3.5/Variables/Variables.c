#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int A;
    long long int B;
    float C;
    char D;
    
    scanf("%d", &A);
    printf("%d \n", A);
    
    scanf("%lld", &B);
    printf("%lld \n", B);
    
    scanf("%f", &C);
    printf("%0.2f \n", C);
    
    scanf(" %c", &D);
    printf("%c \n", D);
    return 0;
}
