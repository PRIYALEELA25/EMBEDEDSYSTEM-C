#include <stdio.h>

int main() {
    int row = 5;
for(int i=1;i<=row;i++){
    for(int j=i;j<row;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
        printf(" *");
    }
    printf(" \n");
}
return 0;
}