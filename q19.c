#include <stdio.h>

int main()
{
    int num1, num2;
    int pos, n ,result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter starting position: ");
    scanf("%d", &pos);

    printf("Enter number of bits: ");
    scanf("%d", &n);

    int mask = (1 << n) - 1;

    int bits = num2 & mask;

    bits = bits << pos;

    num1 = num1 & ~(mask << pos);

     result = num1 | bits;

    printf("Result = %d\n", result);

    return 0;
}