#include <stdio.h>
void menu();

int main(void) {
    int i = 0;
    int totalCalories =0;
    printf("What food(s) do you want to eat?\n");
    menu();
    printf("Please enter -1 to exit\n");

    while (i>=-1) {
        scanf("%d", &i);
        if (i == -1)
            break;
        if (i == 1)
            totalCalories = totalCalories + 350 ;
        if (i == 2)
            totalCalories = totalCalories + 365;
        if (i == 3)
            totalCalories = totalCalories + 250;
        if (i == 4)
            totalCalories = totalCalories + 1;
        if (i == 5)
            totalCalories = totalCalories + 280;
    }
    printf("Total calories: %d\n", totalCalories);

    return 0;
}

void menu() {
    printf("1 = Burger (350 calories)\n");
    printf("2 = Fries (365 calories)\n");
    printf("3 = Soda (250 calories)\n");
    printf("4 = Coffee (1 calorie)\n");
    printf("5 = Slice of Pizza (280 calories)\n");
}