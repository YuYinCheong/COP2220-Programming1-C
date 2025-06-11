#include <stdio.h>
#include <stdlib.h>

double GetAverage(int* houseArray, int numHouses);
void FillArray(int* array, int numHouses);
int* AllocateMemory(int numberOfHouses);

int main(void) {
    ///////////////////////////////////////////////////////////
    //Do not touch the Main function! Everything is fine here!
    int numberOfHouses;
    printf("How many houses are there?\n");
    scanf("%d", &numberOfHouses);
    int* houseArray = AllocateMemory(numberOfHouses);
    FillArray(houseArray, numberOfHouses);
    double avgCarCount = GetAverage(houseArray, numberOfHouses);
    printf("The average car count is: %.2lf", avgCarCount);
    ///////////////////////////////////////////////////////////
}

double GetAverage(int* houseArray, int numHouses) {
    double average = 0;
    int sum = 0;
    for (int i = 0; i < numHouses; i++) {
        sum += houseArray[i];
    }
    average = (double)sum / numHouses;
    return average;
}

void FillArray(int* array, int numHouses) {
    for (int i = 0; i < numHouses; i++) {
        printf("How many cars are at house %d? \n", i + 1);
        scanf("%d", &array[i]);
    }
}

int* AllocateMemory(int numberOfHouses) {
    int* ptr = malloc(numberOfHouses * sizeof(int));
    return ptr;
}