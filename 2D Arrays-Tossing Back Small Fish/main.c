/*
#include <stdio.h>
#define FLOUNDER 0
#define SNAPPER 1
#define TUNA 2
int ReleaseFish(int fishCount, int matrix[3][fishCount]);
double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]);

int main(void) {
    int matrix[3][5] ={};
    printf("Please enter the data for 5 fish: type, length, weight.\n");
    printf("0 = Flounder; 1 = Snapper; 2 = Tuna\n");
    for(int i=0;i<5;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }

    int numFishReleased = ReleaseFish(5, matrix);
    printf("This many fish were released: %d\n",numFishReleased);

    double totalWeight = CalculateAverageWeight(5, matrix);
    double averageWeight = totalWeight / (5 - numFishReleased);
    printf("The average fish weight is %.2lf\n",averageWeight);
    return 0;
}

int ReleaseFish(int fishCount, int matrix[3][fishCount]) {
    int releaseFish = 0;
    for(int i=0;i<3;i++) {
        for(int j=0;j<5;j++) {
            if ((matrix[j][0] == 0 && matrix[j][1] <14) || (matrix[j][0] == 1 && matrix[j][1] <20) || (matrix[j][0] == 2 && matrix[j][1] <27)) {
                releaseFish += 1;
                matrix[j][0] = -1;
                matrix[j][2] = -1;
            }
        }
    }
    return releaseFish;
}

double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]) {
    double totalWeight = 0.00;
    for(int j=0;j<5;j++) {
        if (matrix[j][2] != -1)
            totalWeight += matrix[j][2];
    }
    return totalWeight;
}
*/

#include <stdio.h>
#define FLOUNDER 0
#define SNAPPER 1
#define TUNA 2
int ReleaseFish(int fishCount, int matrix[3][fishCount]);
double CalculateAverageWeight(int fishCount, int matrix[3][fishCount]);
int main(void)
{
    int fish[5][3];// fish type; length; weight
    int weight;
    int length;
    int input1;
    int i = 0;
    int j = 0;
    int released;
    double avgWeight;

    printf("Please enter the data for 5 fish: type, length, weight.\n");
    printf("0 = Flounder; 1 = Snapper; 2 = Tuna\n");

    while (i < 5){
        j = 0;
        while (j < 3){
        scanf("%d", &input1);
        //if (input1  < 0){
        //    input1 *= -1;
        //}
        fish[i][j] = input1;
        j++;
        }
        i++;
    }
    printf("\n");
    released = ReleaseFish(3, fish);
    printf("Released fish %d\n", released);
    avgWeight = CalculateAverageWeight(3, fish);
    printf("average weight %.2lf", avgWeight);
}

int ReleaseFish(int fishCount, int array[5][fishCount]){
    int i = 0;
    int released = 0;
    while (i < 5){
           // printf("i: %d %d %d %d\n", i, array[i][0], array[i][1], array[i][2]);
        if (array[i][0] == FLOUNDER){ // flounder
            if (array[i][1] < 14){
                array[i][1] = -1;
                released++;
            }
        }
        else if(array[i][0] == SNAPPER){
            if (array[i][1] <  20){
                array[i][1] = -1;
                released++;
            }
        }
        else if(array[i][0] == TUNA){
            if (array[i][1] < 27){
                array[i][1] = -1;
                released++;
            }

        }
        i++;
    }
    return released;
}

double CalculateAverageWeight(int fishCount, int array[5][fishCount]){
    int i = 0;
    double avgWeight = 0;
    int numf = 0;
    while(i < 5){
    //printf("%d %d %d\n", array[i][0], array[i][1], array[i][2]);
        if(array[i][1] > -1){
            avgWeight += array[i][2];
            numf++;

        }
        i++;
        }
        return avgWeight = avgWeight / numf;
    }

