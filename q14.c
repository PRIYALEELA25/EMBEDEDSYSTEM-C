
#include <stdio.h>

int main() {
    char str[200];
    int i;
    int alphabet[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if(ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        if(ch >= 'a' && ch <= 'z') {
            alphabet[ch - 'a'] = 1;
        }
    }

    for(i = 0; i < 26; i++) {
        if(alphabet[i] == 0) {
            printf("Not a Pangram");
            return 0;
        }
    }

    printf("Pangram");
    return 0;
}