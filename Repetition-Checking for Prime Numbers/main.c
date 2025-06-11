#include <stdio.h>
#include<math.h>

int main(void) {
    int userNum;
    int prime;
    printf("Please enter a number: ");
    scanf("%d", &userNum);

    for (int i = 2; i <= sqrt(userNum); i++) {
        if (userNum / 1 == userNum && userNum / userNum == 1 && userNum % i == 0) {
            prime = 0;
            break;
        } else {
            prime = 1;
        }
    }

    if (userNum <2) {
        printf ("This number is not prime!\n");
    } else if (prime == 1) {
        printf("This number is prime!\n");
    } else {
        printf ("This number is not prime!\n");
    }
    return 0;
}