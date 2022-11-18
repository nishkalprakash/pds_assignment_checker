/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Assignment 3(b)
*/
#include <stdio.h>

int simScore(char gene1[], char gene2[], int len) {
    int simScore = 0;
    for (int i = 0; i < len; i++) {
        if(gene2[i] == '-') simScore += 2;
        else if (gene1[i] != gene2[i]) simScore++;
    }
    return simScore;
}

int trial(char gene1[], char gene2[], int len1, int len2) {
    int minIndex[] = {0,0}, minScore = len1+4;
    char tempgene2[len1];
    if (len1 - len2 == 2) {
        for (int i = 0; i < len2-1; i++) {
            for (int j = i+1; j < len2; j++) {
                for (int k = 0, l = 0; k < len1; k++) {
                    if (k == i || k == j) tempgene2[k] = '-';
                    else tempgene2[k] = gene2[l++];
                }
                if (minScore > simScore(gene1, tempgene2, len1)) {
                    minIndex[0] = i;
                    minIndex[1] = j;
                    minScore = simScore(gene1, tempgene2, len1);
                }
            }
        }
        for (int k = 0, l = 0; k < len1; k++) {
            if (k == minIndex[0] || k == minIndex[1]) tempgene2[k] = '-';
            else tempgene2[k] = gene2[l++];
        }
        for (int k = 0; k < len1; k++) gene2[k] = tempgene2[k];
        return minScore;
    }
    else if (len1 - len2 == 1) {
        for (int i = 0; i < len2; i++) {
            for (int k = 0, l = 0; k < len1; k++) {
                if (k == i) tempgene2[k] = '-';
                else tempgene2[k] = gene2[l++];
            }
            if (minScore > simScore(gene1, tempgene2, len1)) {
                minScore = simScore(gene1, tempgene2, len1);
                minIndex[0] = i;
            }
        }
        for (int k = 0, l = 0; k < len1; k++) {
            if (k == minIndex[0]) tempgene2[k] = '-';
            else tempgene2[k] = gene2[l++];
        }
        for (int k = 0; k < len1; k++) gene2[k] = tempgene2[k];
        return minScore;
    }
    else {
        return simScore(gene1, gene2, len1);
    }
}


int main() {
    char GENE1[1000], GENE2[1000];
    scanf("%s", GENE1);
    scanf("%s", GENE2);
    int len1 = 0, len2 = 0;
    while (GENE1[len1] != '\0') len1++;
    while (GENE2[len2] != '\0') len2++;
    int score = 0;
    if (len1 > len2) score = trial(GENE1, GENE2, len1, len2);
    else score = trial(GENE2, GENE1, len2, len1);
    printf("Sequence1\t");
    for (int i = 0; i < len1; i++) printf("%c", GENE1[i]);
    printf("\nSequence2\t");
    for (int i = 0; i < len1; i++) printf("%c", GENE2[i]);
    printf("\nSimlarity Score\t%d", score);
    printf("\n");
    return 0;
}