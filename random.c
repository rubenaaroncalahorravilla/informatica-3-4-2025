#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int diceRoll = (rand() % 6) + 1;
    printf("You rolled a: %d\n", diceRoll);
    return 0;
}