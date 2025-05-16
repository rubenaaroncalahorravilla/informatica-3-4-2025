#include <stdio.h>

int main() {
    printf("Enter the height of the triangle (number of rows): ");
    int height;
    scanf(" %d", &height);
    printf("Enter a character: ");
    char symbol;
    scanf(" %c", &symbol);


    int i;
    int j;
    int k;
    for (i = 1; i <= height; i++) {
        for (k = height; k > i; k--){
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

}