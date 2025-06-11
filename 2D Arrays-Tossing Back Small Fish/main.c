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

