#include <stdio.h>
#include <string.h>
void ChangeCases(char word[], char word1[]);
void Backwards(char word1[], char word2[]);
int Result(char word1[], char word2[]);

int main(void) {
    printf("Please enter a word.\n");
    char word[100] = {};
    scanf("%s", &word);

    char word1[100] = {};
    ChangeCases(word, word1);

    char word2[100] = {};
    Backwards(word1, word2);

    int compare = Result(word1, word2);
    if (compare == 0)
        printf("%s is a palindrome!\n", word);
    else
        printf("%s is not a palindrome!\n", word);
    return 0;
}

void ChangeCases(char word[], char word1[]) {
    for (int i = 0; i < strlen(word); i++) {
        word1[i] = word[i];
        if (word1[i] >= 'A' && word1[i] <= 'Z')
            word1[i] += 32;
    }
}

void Backwards(char word1[], char word2[]) {
    for (int i = 0; i < strlen(word1); i++) {
        word2[i] = word1[strlen(word1) - 1-  i];
    }
}

int Result(char word1[], char word2[]) {
    int compare = strcmp(word1, word2);
    return compare;
}