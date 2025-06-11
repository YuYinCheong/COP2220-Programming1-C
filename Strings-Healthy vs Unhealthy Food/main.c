#include <stdio.h>
#include <string.h>
void ChangeCases(char food[], char food1[]);
int Checking(char food1[], char healthy[][20]);

int main(void) {
    char healthy[][20] = {"banana", "apple", "orange", "lettuce", "tomato"};
    char unhealthy[][20] = {"candy", "soda", "chips", "icecream", "marshmallows"};

    int number;
    printf("How many foods are on your shopping list?\n");
    scanf("%d", &number);

    printf("Enter one word at a time now.\n");
    char food[100] ={};
    for (int i = 0; i < number; i++) {
        char food1[100] = {};
        scanf("%s", food);
        ChangeCases(food, food1);

        int result = Checking(food1, healthy);
        if (result == 0)
            printf("%s is healthy.\n", food);
        else
            printf("%s is unhealthy.\n", food);
    }
    return 0;
}

void ChangeCases(char food[], char food1[]) {
    for (int i = 0; i < strlen(food); i++) {
        food1[i] = food[i];
        if (food1[i] >= 'A' && food1[i] <= 'Z')
            food1[i] += 32;
    }
}

int Checking(char food1[], char healthy[][20]) {
    int result = 0;
    for (int i = 0; i < strlen(healthy) - 1; i++) {
        result = strcmp(food1, healthy[i]);
        if (result == 0)
            break;
    }
    return result;
}