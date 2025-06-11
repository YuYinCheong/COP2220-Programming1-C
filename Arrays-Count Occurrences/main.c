#include <stdio.h>

int main(void) {
    int num[10];
    int numFrequency;
    int frequency = 0;
    printf("Enter in 10 numbers between 1 and 5 (inclusive).\n");
    for (int i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    printf("Which number do you want to check for frequency?\n");
    scanf("%d", &numFrequency);
    for (int i=0; i<10; i++) {
        if (numFrequency == num[i])
            frequency += 1;
    }
   printf("The number %d appears %d times.", numFrequency, frequency);
    return 0;
}