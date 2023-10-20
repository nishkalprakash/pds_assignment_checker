#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int create(char* sptr[], int* n);
int lengthStat(char* sptr[], int n);
int  letterStat(char* sptr[], int n);
int search(char* sptr[], int n);
int removeDuplicate(char* sptr[], int* n);
int searchReplace(char* sptr[], int n);
int arrange(char* sptr[], int n);

int main() {
    char* sptr[100];
    int x, n = 0;
    //Using infinte while loop and switch statements for the user to enter a number
    while (1) {
	printf("Enter 1 for create function\n");
	printf("Enter 2 for lengthstat function\n");
	printf("Enter 3 for letterstat function\n");
	printf("Enter 4 for search function\n");
	printf("Enter 5 for removeduplicate function\n");
	printf("Enter 6 for searchreplace function\n");
	printf("Enter 7 for arrange function\n");
	printf("Enter 0 to terminate the function\n");
        scanf("%d", &x);

        switch (x) {
	             case 0:
                return 0;
            
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
            case 7:
                arrange(sptr, n);
                break;
		            default:
                printf("Choose numbers from 0 to 7 only\n");
        }
    }
}

int create(char* sptr[], int* n) {
    if (*n >= 100) {
        printf("The value should be less than 100\n");
        return;
    }

    int count;
    printf("Enter the number of words : ");
    scanf("%d", &count);

    if (count <= 0) {
        printf("Numbers are positive\n");
        return;
    }

    int i;
    for (i = 0; i < count; i++) {
        sptr[*n] = (char *)malloc(50); // Allocating memory for the string
        printf("Enter word : ");
        scanf("%s", sptr[*n]);
        (*n)++;//promting and storing the stings in an array
    }

    printf("Words entered are\n");
    for (i = 0; i < *n; i++) {
        printf("%s\n", sptr[i]);
    }
}

int lengthStat(char* sptr[], int n) {
  int i, len[3] = {0};//allocating first element as 0

    for (i = 0; i < n; i++) {
        int lent = strlen(sptr[i]);
        if (lent >= 1 && lent <= 2) {
            len[0]++;
        } else if (lent >= 3 && lent <= 5) {
            len[1]++;
        } else {
            len[2]++;
        }//Analysing the summary of length of words
    }

    printf("Words with length 1-2 letters: %d\n", len[0]);
    printf("Words with length 3-5 letters: %d\n", len[1]);
    printf("Words with lengths larger than 5 letters: %d\n", len[2]);
}

int search(char* sptr[], int n) {
    char s[50];
    int found = 0;

    printf("Enter the word to search for: ");//Taking the required word
    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        if (strcmp(sptr[i], s) == 0) {
            printf("Word '%s' found at position %d\n", s, i + 1);
            found = 1;//using found variable to count
        }
    }

    if (!found) {
        printf("Word '%s' not found.\n", s);
    }
}
int letterStat(char* sptr[], int n) {
    int vowels[21] = {0};

    for (int i = 0; i < n; i++) {
        char* w = sptr[i];
        int wl = strlen(w);//length of words are taken

        for (int j = 0; j < wl; j++) {
            char c = w[j];

            if (c >= 'a' && c <= 'u') {
                vowels[c - 'a']++;
            }
        }
    }

    printf("Vowels are:\n");
    for (int i = 0; i < 21; i++) {
        printf("%c: %d\n", 'a' + i, vowels[i]);
    }
}



int removeDuplicate(char* sptr[], int* n) {
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
int  arrange(char* sptr[], int n) {
    printf("Original list of words:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, sptr[i]);
    }

}




int searchReplace(char* sptr[], int n) {
    char s[50], r[50];
    int found = 0;

    printf("Enter the word to search for: ");
    scanf("%s", s);
    printf("Enter the replacement word: ");
    scanf("%s", r);

    for (int i = 0; i < n; i++) {
      if (strcmp(sptr[i], s == 0)) {
            free(sptr[i]);
            sptr[i] = (char *)malloc(strlen(r) + 1);
            strcpy(sptr[i], r);
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Word '%s' replaced with '%s'. Updated list of words:\n", s, r);
        for (int i = 0; i < n; i++) {
            printf("%d. %s\n", i + 1, sptr[i]);
        }
    } else {
      printf("Word '%s' is not present\n", s);
    }
}

 


 



 


 

