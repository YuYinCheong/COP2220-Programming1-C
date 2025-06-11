//Yu Yin Cheong COP2220
//Math.h:Total Robot Distance

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int unit1, unit2, unit3, unit4, unit5;

    printf("Please enter exactly 5 whole numbers.\n");
    scanf("%d %d %d %d %d", &unit1, &unit2, &unit3, &unit4, &unit5);

    int endingDistance = unit1 + unit2 + unit3 + unit4 + unit5;
    unit1 = abs(unit1);
    unit2 = abs(unit2);
    unit3 = abs(unit3);
    unit4 = abs(unit4);
    unit5 = abs(unit5);
    int travelDistance = unit1 + unit2 + unit3 + unit4 + unit5;

    printf("The robot walked %d total units, and ended %d units from the start.", travelDistance, endingDistance);
    return 0;
}
