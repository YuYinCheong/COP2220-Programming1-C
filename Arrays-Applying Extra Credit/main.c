#include <stdio.h>

int ApplyExtraCredit(int scores[], int classSize);
void PrintLetterDistribution(int scores[], int classSize);
int fullMarks, numAs, numBs, numCs, numDs, numFs;
int scores[10];
int classSize = 10;

int main(void) {
    printf("Enter in 10 homework scores.\n");
    for (int i=0; i<10; i++) {
        scanf("%d", &scores[i]);
    }
    classSize = sizeof(scores) / sizeof(scores[0]);
    ApplyExtraCredit(scores, classSize);
    PrintLetterDistribution(scores, classSize);
    return 0;
}

void PrintLetterDistribution(int scores[], int classSize) {
    for (int i=0; i < classSize; i++) {
        if (scores[i] >=90)
            numAs = numAs + 1;
        else if (scores[i] >= 80)
            numBs = numBs + 1;
        else if (scores[i] >= 70)
            numCs = numCs + 1;
        else if (scores[i] >= 60)
            numDs = numDs + 1;
        else
            numFs = numFs + 1;
    }
        printf("This many scores reached 100: %d\n", fullMarks);
        printf("Num As: %d \n", numAs);
        printf("Num Bs: %d \n", numBs);
        printf("Num Cs: %d \n", numCs);
        printf("Num Ds: %d \n", numDs);
        printf("Num Fs: %d \n", numFs);
}

int ApplyExtraCredit(int scores[], int classSize) {
    for (int i=0; i < classSize; i++) {
        scores[i] += 5;
        if (scores[i] >100) {
            scores[i] = 100;
            fullMarks = fullMarks + 1;
        }
    }
}