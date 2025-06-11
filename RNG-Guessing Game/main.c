#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int num = 0;
    srand(time(0));
    int randNum = (rand()%100)+1;
    printf("Guess the number!\n");
    scanf("%d",&num);
    for(int i = 0; i >= 0; i++) {
        if ((num <= 100 || num > 0) && num!=randNum) {
            if(num<randNum) {
                printf("That number is too low!  Guess again!\n");
                scanf("%d",&num);
            } else {
                printf("That number is too high!  Guess again!\n");
                scanf("%d",&num);
            }
            continue;
        }
        printf("Correct!! It took you %d tries to guess!\n", i+1);
        break;
    }
    return 0;
}