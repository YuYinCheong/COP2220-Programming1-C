//Yu Yin Cheong COP2220
//HW: Simple Math:Sum of Coin

#include <stdio.h>

int main(void) {
    int numQuarters, numDimes, numNickels, numPennies;
    double quarters = 0.25;
    double dimes = 0.10;
    double nickels = 0.05;
    double pennies = 0.01;

    printf("How many coins do you have (quarters, dimes, nickels, pennies)?\n");
    scanf("%d %d %d %d", &numQuarters, &numDimes, &numNickels, &numPennies);

    double sum = (numQuarters * quarters) + (numDimes * dimes) + (numNickels * nickels)+ (numPennies * pennies);
    printf("You have this many dollars: %.2lf",sum );
    return 0;
}
