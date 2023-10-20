
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void create(char* sptr[], int* n);
void lengthStat(char* sptr[], int n);
void letterStat(char* sptr[], int n);
void search(char* sptr[], int n);
void removeDuplicate(char* sptr[], int* n);
void searchReplace(char* sptr[], int n);


int main() {
    char* sptr[MAX];
    int choice, n = 0;

    while (1) {
        printf("Menu:\n");
        printf("1. Create\n2. Length Statistics\n3. Letter Statistics\n4. Search\n");
        printf("5. Remove Duplicate\n6. Search and Replace\n. Exit\n");
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                create(sptr, &n);
                break;
            case 2:
                lengthStat(sptr, n);
                break;
        case 3:
                letterStat(sptr, n);
                break;
            case 4:
                search(sptr, n);
                break;
       case 5:
                removeDuplicate(sptr, &n);
                break;
        case 6:
                searchReplace(sptr, n);
             break;

                break;
            case 0:
                return 0;
            default:
                printf("Wrong Input. Should be between 1 and 6.\n");
        }
    }
}

void create(char* sptr[], int* n) {
    if (*n >= MAX) {
        printf("Maximum word limit.\n");
        return;
    }

    int count;
    printf("How many word ? (up to %d): ", MAX - *n);
    scanf("%d", &count);

    if (count <= 0 || count>100) {
        printf("Wrong input not between 1 and 100.\n");
        return;
    }

    int i;
    for (i = 0; i < count; i++) {
        sptr[*n] = (char *)malloc(50);
        printf("Enter word %d: ", *n + 1);
        scanf("%s", sptr[*n]);
        (*n)++;
    }

    printf("Words provided are:\n");
    for (i = 0; i < *n; i++) {
        printf("%d. %s\n", i + 1, sptr[i]);
    }
}

void lengthStat(char* sptr[], int n) {
    int i, len[3] = {0};

    for (i = 0; i < n; i++) {
        int word_len = strlen(sptr[i]);
        if (word_len >= 1 && word_len <= 2) {
            len[0]++;
        } else if (word_len >= 3 && word_len <= 5) {
            len[1]++;
        } else {
            len[2]++;
        }
    }

    printf("Words of length between 1-2 letters: %d\n", len[0]);
    printf("Words of length between 3-5 letters: %d\n", len[1]);
    printf("Words of length greater than 5 letters: %d\n", len[2]);
}

void letterStat(char* sptr[], int n) {
    int vowels[21] = {0};

    for (int i = 0; i < n; i++) {
        char* word = sptr[i];
        int word_len = strlen(word);

        for (int j = 0; j < word_len; j++) {
            char c = word[j];

            if (c >= 'a' && c <= 'u') {
                vowels[c - 'a']++;
            }
        }
    }

    printf("Vowel statistics:\n");
    for (int i = 0; i < 21; i++) {
        printf("%c: %d\n", 'a' + i, vowels[i]);
    }
}

void search(char* sptr[], int n) {
    char searchWord[50];
    int found = 0;

    printf("Enter the word to search for: ");
    scanf("%s", searchWord);

    for (int i = 0; i < n; i++) {
        if (strcmp(sptr[i], searchWord) == 0) {
            printf("Word '%s' found at position %d\n", searchWord, i + 1);
            found = 1;
        }
    }

    if (!found) {
        printf("'%s' not found.\n", searchWord);
    }
}

void removeDuplicate(char* sptr[], int* n) {
    for (int i = 0; i < *n; i++) {
        for (int j = i + 1; j < *n;) {
            if (strcmp(sptr[i], sptr[j]) == 0) {
                free(sptr[j]);
                for (int k = j; k < *n - 1; k++) {
                    sptr[k] = sptr[k + 1];
                }
                (*n)--;
            } else {
                j++;
            }
        }
    }

    printf("Duplicates removed. Updated list of words:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d. %s\n", i + 1, sptr[i]);
    }
}

void searchReplace(char* sptr[], int n) {
    char searchWord[50], replaceWord[50];
    int found = 0;

    printf("word to search for: ");
    scanf("%s", searchWord);
    printf("replacement word: ");
    scanf("%s", replaceWord);

    for (int i = 0; i < n; i++) {
        if (strcmp(sptr[i], searchWord) == 0) {
            free(sptr[i]);
            sptr[i] = (char *)malloc(strlen(replaceWord) + 1);
            strcpy(sptr[i], replaceWord);
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Word '%s' replaced with '%s'. Updated words:\n", searchWord, replaceWord);
        for (int i = 0; i < n; i++) {
            printf("%d. %s\n", i + 1, sptr[i]);
        }
    } else {
        printf("Word '%s' not found.\n", searchWord);
    }
}




