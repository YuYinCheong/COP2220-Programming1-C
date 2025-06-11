// Yu Yin Cheong COP 2220
// Selection: Custom Calculator
#include <stdio.h>
#include <stdlib.h>

double PerformAddition(int a, int b);
double PerformSubtraction(int a, int b);
double PerformMultiplication(int a, int b);
double PerformDivision(int a, int b);
void DisplayMenu();

int main(void)
{
    int a, b, operation;
    double result;

    printf("Please enter in 2 integers.\n");
    scanf("%d %d", &a, &b);

    DisplayMenu();
    scanf("%d", &operation);

//TODO: use Selection to choose the function that corresponds with the operation the user wanted.
//Make sure to Call the function and pass in the two variables as appropriate.
    if (operation == 1) {
        result = PerformAddition(a,b);
    }
    if (operation == 2) {
        result = PerformSubtraction(a, b);
    }
    if (operation == 3) {
        result = PerformMultiplication(a, b);
    }
    if (operation == 4) {
        result = PerformDivision(a, b);
    }

    printf("The result is: %.2lf", result);
}

void DisplayMenu()
{
    printf("1 = Addition\n");
    printf("2 = Subtraction\n");
    printf("3 = Multiplication\n");
    printf("4 = Division\n");
    printf("\n");
}

double PerformAddition(int a, int b)
{
    //TODO: fill in this function
    return a + b;
}

double PerformSubtraction(int a, int b)
{
    //TODO: fill in this function
    return b - a;
}

double PerformMultiplication(int a, int b)
{
    //TODO: fill in this function
    return a * b;
}

double PerformDivision(int a, int b)
{
    //TODO: fill in this function
    return a / (double)b;
}