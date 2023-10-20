//23MT10053
//Shusmit Sarkar
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void create(char*** sptr){
    int n,j;
    printf("Enter number of words");
    scanf("%d",&n);
    char arr[100];
    if(n<0 || n>100) return;
    *sptr = (char**)malloc( n *sizeof(char*));
    for(int i=0; i<n; i++){
            scanf("%s",arr);
        int m = strlen(arr);
            (*sptr)[i] = (char*)realloc( (*sptr)[i], (m+1) * sizeof(char));
        for(j=0; j<m; j++){
            (*sptr)[i][j] = arr[j];
        }
        (*sptr)[i][j] = '\0';
    }
    for(int i=0; i<n; i++){
       printf("%s\n", (*sptr)[i]);
    }
    return;
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

    printf("Words 1-2 letters: %d\n", len[0]);
    printf("Words 3-5 letters: %d\n", len[1]);
    printf("Words larger than 5 letters: %d\n", len[2]);
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
        printf("Word '%s' not found.\n", searchWord);
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

    printf("Duplicates removed. Updated list \n");
    for (int i = 0; i < *n; i++) {
        printf("%d. %s\n", i + 1, sptr[i]);
    }
}

void searchReplace(char* sptr[], int n) {
    char searchWord[50], replaceWord[50];
    int found = 0;

    printf("Enter the word to search for: ");
    scanf("%s", searchWord);
    printf("Enter the replacement word: ");
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
        printf("Word '%s' replaced with '%s'. Updated list \n", searchWord, replaceWord);
        for (int i = 0; i < n; i++) {
            printf("%d. %s\n", i + 1, sptr[i]);
        }
    } else {
        printf("Word '%s' found.\n", searchWord);
    }
}

void arrange(char* sptr[], int n) {
    printf("Original list:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, sptr[i]);
    }

}


int main(){
    int n;
    int x=0;
    char** sptr;
    while(1){
    printf("Enter choice between 1 to 7");
    scanf("%d",&n);
    if(n>7 || n<0) return 0;
    if(n=0) break;
    if(n=1) create(&sptr);
    if(n=2) lengthStat(sptr,x);
    if(n=3) letterStat (sptr,x);
    if(n=4) search(sptr,x);
    if(n=5) removeDuplicate(sptr,x);
    if(n=6) searchReplace(sptr,x);
    if(n=7) arrange(sptr,x);
    }
    return 0;
}
