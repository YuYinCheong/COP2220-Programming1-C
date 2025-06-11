#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct player{
    char lastName[50];
    int jerseyNumber;
    int gamesPlayed;
    int goalsScored;
} Player;

Player GetMostGames(Player players[], int numPlayers);
Player GetBestAverage(Player players[], int numPlayers);

int main(void){
    char file[50];
    FILE *fp;
    printf("Please provide the file name.\n");
    scanf("%s", file);

    fp = fopen(file, "r");
    int numPlayers;
    fscanf(fp, "%d", &numPlayers);
    Player *players = malloc(numPlayers * sizeof(Player));
    for(int i = 0; i < numPlayers; i++) {
        fscanf(fp, "%s %d %d %d", players[i].lastName, &players[i].jerseyNumber, &players[i].gamesPlayed, &players[i].goalsScored);
    }
    fclose(fp);

    Player mostGames = GetMostGames(players, numPlayers);
    Player bestAverage = GetBestAverage(players, numPlayers);
    printf("%s (jersey %d) played the most games (%d).\n", mostGames.lastName, mostGames.jerseyNumber, mostGames.gamesPlayed);
    printf("%s (jersey %d) had the best goal average (%.2f).\n", bestAverage.lastName, bestAverage.jerseyNumber, (float)bestAverage.goalsScored/bestAverage.gamesPlayed);
    free(players);
    return 0;
}

Player GetMostGames(Player players[], int numPlayers) {
    Player mostGames = players[0];
    for(int i = 1; i < numPlayers; i++) {
        if (players[i].gamesPlayed > mostGames.gamesPlayed)
            mostGames = players[i];
    }
    return mostGames;
}

Player GetBestAverage(Player players[], int numPlayers) {
    Player bestAverage = players[0];
    float bestScored = (float)bestAverage.goalsScored / bestAverage.gamesPlayed;
    float currentScored = 0;
    for(int i = 1; i < numPlayers; i++) {
        if (players[i].gamesPlayed != 0) {
            currentScored = (float)players[i].goalsScored / players[i].gamesPlayed;
            if (currentScored > bestScored) {
                bestAverage = players[i];
                bestScored = currentScored;
            }
        }
    }
    return bestAverage;
}