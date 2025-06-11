//Yu Yin, Cheong COP2220
//HW: Simple Math: How Many Laps?

#include <stdio.h>
#define LAPS_PER_HOUR 3

int main() {

    int numHours;
    int totalLaps;

    printf("How many hours will Ash run?\n");
    scanf("%d", &numHours);
    //TODO: calculate how many total laps Ash will run, and store it in "totalLaps"
    totalLaps = numHours * LAPS_PER_HOUR;
    //TODO: print out the totalLaps variable!
    printf("Ash will run %d laps", totalLaps);

    return 0;
}