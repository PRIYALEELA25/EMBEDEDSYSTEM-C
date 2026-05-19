#include <stdio.h>

void convert(int num, int base) {
    int rem[50], i = 0;

    while(num > 0) {
        rem[i] = num % base;
        num = num / base;
        i++;
    }

    printf("Result: ");
    for(int j = i - 1; j >= 0; j--) {
        if(rem[j] < 10)
            printf("%d", rem[j]);
        else
            printf("%c", rem[j] + 55); // 10->A
    }
}

int main() {
    int num, base;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter base (2-16): ");
    scanf("%d", &base);

    convert(num, base);

    return 0;
}