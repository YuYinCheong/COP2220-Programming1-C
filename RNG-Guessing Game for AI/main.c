#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int randNum, rating, i;
    int min = 1;
    int max = 100;
    srand(time(0));
    printf("Beep boop. I will guess your number!\nThink of a number between 1 and 100.\nReady?  Here I go, beep boop!\n");
    printf("\n");
    for(i = 0; i <= max; i++) {
        printf("Now guessing a number between %d and %d\n", min, max);
        randNum = (rand()%(max-min+1))+min;
        printf("My guess is %d\n", randNum);
        printf("How did I do?\n1 = Correct\n2 = Guess was too high\n3 = Guess was too low\n");
        scanf("%d", &rating);
        if (rating == 3) {
            printf("Too low?!  Beep boop, adjusting parameters...\n");
            min = randNum + 1;
        } else if (rating == 2) {
            printf("Too high?!  Beep boop, adjusting parameters...\n");
            max = randNum - 1;
        } else
            break;
    }
    printf("Beep boop, I am good at this game! I took %d tries to win!\n", i+1);
    return 0;
}