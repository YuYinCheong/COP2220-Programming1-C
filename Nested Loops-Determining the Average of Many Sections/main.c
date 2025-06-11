#include <stdio.h>

int main(void)
{
    int classSection, bestSection;
    double bestAverage = 0;
    int i = 0;
    int numStudents = 0;
    int quizScore = 0;
    double quizAverage;

    printf("How many class sections are there?\n");
    scanf("%d", &classSection);
    for (i = 0; i < classSection; i++) {
        printf("How many students are there in section %d?\n", i);
        scanf("%d", &numStudents);
        printf("Enter %d quiz scores now.\n", numStudents);

        int totalScore = 0;
        for (int j = 0; j < numStudents; ++j) {
            scanf("%d", &quizScore);
            totalScore += quizScore;
        }

        quizAverage = (double)totalScore / numStudents;
        printf("Class section %d had a quiz average of %.1lf\n", i, quizAverage);

        if (quizAverage > bestAverage) {
            bestAverage = quizAverage;
            bestSection = i;
        }
    }

    if (bestSection != -1)
        printf("The best class was Section %d with an average of %.2lf!", bestSection, bestAverage);

    return 0;
}