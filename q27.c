#include <stdio.h>

struct complex {
    float real;
    float image;
};


struct complex add(struct complex a, struct complex b) {
    struct complex result;
    result.real = a.real + b.real;
    result.image = a.image + b.image;
    return result;
}

int main() {
    struct complex num1, num2, sum;

    printf("ENTER FIRST COMPLEX NUMBER (real imag): ");
    scanf("%f %f", &num1.real, &num1.image);

    printf("ENTER SECOND COMPLEX NUMBER (real imag): ");
    scanf("%f %f", &num2.real, &num2.image);

    sum = add(num1, num2);

    printf("SUM = %.2f + %.2fi\n", sum.real, sum.image);

    return 0;
}