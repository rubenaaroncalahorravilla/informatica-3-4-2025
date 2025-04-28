#include <stdio.h>

int main() {
    char snack1[] = "Doritos";
    float price1 = 15.96;
    int stock1 = 13;

    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("1. %s - $%.2f - %d Available\n", snack1, price1, stock1);

    return 0;
}