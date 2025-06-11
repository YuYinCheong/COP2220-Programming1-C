// Yu Yin, Cheong N01576808
// COP 2220
// HW: Formatting Input and Output

#include <stdio.h>
int main(void)
{
    int favNum;
    char favChar;
    double favFraction;

    scanf("%d %c %lf", &favNum, &favChar, &favFraction);

    printf("Favorite Number: %d\n", favNum); //Print an integer
    printf("Favorite Character: %c\n", favChar); //print a character
    printf("Favorite Fraction: %.2lf\n", favFraction); //print a double with exactly 2 decimal places

    return 0;
}