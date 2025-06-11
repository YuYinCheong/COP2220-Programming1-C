#include <stdio.h>

int main(void){
    char userFile[50];
    FILE* fp;
    printf("Enter in the name of the file:\n");
    scanf("%s", userFile);
    fp = fopen(userFile, "r");
    int count = 0;
    fscanf(fp, "%d", &count);
    int sum = 0;
    int num = 0;
    for(int i = 0; i < count; i++) {
        fscanf(fp, "%d", &num);
        sum += num;
    }
    double average = (double)sum / count;
    printf("The average athlete height is: %.2lf\n", average);
    fclose(fp);
    return 0;
}