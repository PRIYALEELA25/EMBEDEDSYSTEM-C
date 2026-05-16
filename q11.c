
#include <stdio.h>

int main() {
    int num, digit;
    char str[100], rev[100];
    int i = 0, j, sign = 0;

    printf("ENTER A NUMBER: ");
    scanf("%d", &num);

   
    if (num < 0) {
        sign = 1;
        num = -num;
    }

 
    if (num == 0) {
        str[i++] = '0';
    }

   
    while (num > 0) {
        digit = num % 10;
        str[i++] = digit + '0';
        num = num / 10;
    }

    if (sign == 1) {
        str[i++] = '-';
    }

    str[i] = '\0';

    int length = i;

    for (j = 0; j < length; j++) {
        rev[j] = str[length - j - 1];
    }

    rev[j] = '\0';

    printf("String = %s\n", rev);

    return 0;
}