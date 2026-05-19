#include <stdio.h>


void countfrequency(int num) {
    int freq[10] = {0};  
    int digit;

    
    if (num < 0) {
        num = -num;
    }
    if (num == 0) {
        freq[0]++;
        }
            
    while (num != 0) {
        digit = num % 10;   
        freq[digit]++;      
        num = num / 10;     
    }

    
    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d occurs %d times\n", i, freq[i]);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    countfrequency(num); 

    return 0;
}

