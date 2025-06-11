#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char** AllocateShoppingList(int numFoods);
char* AllocateItem();
int DetermineNumberOfCandy(char** list, int numFoods);

int main(void) {
    int numFoods;
    printf("How many foods are on the shopping list?\n");
    scanf("%d", &numFoods);
    char** list = AllocateShoppingList(numFoods);
    for (int i = 0; i < numFoods; i++) {
        list[i] = AllocateItem();
    }
    int result = DetermineNumberOfCandy(list, numFoods);
    printf("Candy appeared this many times: %d\n", result);
    for (int i = 0; i < numFoods; i++) {
        free(list[i]);
    }
    free(list);
}
int DetermineNumberOfCandy(char** list, int numFoods) {
    int count = 0;
    for (int i = 0; i < numFoods; i++) {
        int result = strcmp(list[i], "candy");
        if (result == 0)
            count++;
    }
    return count;
}
char** AllocateShoppingList(int numFoods) {
    char **matrix = malloc(numFoods * sizeof(char *));
    return matrix;
}
char* AllocateItem() {
    char items[100] = {};
    printf("Enter the words now.\n");
    scanf("%s", &items);
    int length = strlen(items);
    char* item = calloc(length + 1, sizeof(char));
    strcpy(item, items);
    return item;
}