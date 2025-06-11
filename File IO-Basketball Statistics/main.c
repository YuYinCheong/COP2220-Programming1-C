#include <stdio.h>
#include <stdlib.h>

int main(void){
    char userFile[50];
    FILE* fp;
    printf("Enter in the name of the file:\n");
    scanf("%s", userFile);
    fp = fopen(userFile, "r");

    int sumG = 0; int sumC = 0; int sumF = 0;
    int countG = 0; int countF = 0; int countC = 0;
    int num = 0;
    char position;

    while (fscanf(fp, "%d %c", &num, &position) != EOF){
        if(position == 'G') {
            sumG = sumG + num;
            countG++;
        } else if(position == 'C') {
            sumC = sumC + num;
            countC++;
        } else if(position == 'F') {
            sumF = sumF + num;
            countF++;
        }
    }
    double averageCenterPoint = (double)sumC / countC;
    double averageGuardPoint = (double)sumG / countG;
    double averageForwardPoint = (double)sumF / countF;
    printf("Average Center Points: %.2lf\n", averageCenterPoint);
    printf("Average Guard Points: %.2lf\n", averageGuardPoint);
    printf("Average Forward Points: %.2lf\n", averageForwardPoint);
    fclose(fp);
    return 0;
}
