#include <stdio.h>

int main(){
    int a, b, sum, sub, mul;
    float div;
    scanf("%d %d", &a, &b);

    sum = a + b;
    printf("%d + %d = %d \n", a, b, sum);

    sub = a - b;
    printf("%d - %d = %d \n", a, b, sub);

    mul = a * b;
    printf("%d * %d = %d \n", a, b, mul);

    div = a*1.0 / b;
    printf("%d / %d = %0.2f \n", a, b, div);
	return 0;
}
