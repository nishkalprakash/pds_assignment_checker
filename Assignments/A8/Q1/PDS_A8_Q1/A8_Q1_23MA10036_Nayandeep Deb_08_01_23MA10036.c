//name: Nayandeep Deb
//roll no. 23MA10036

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Create (char ***sptr); //five functions I have made
int  wordlth (char *sptr);
void lengthStat (char **sptr, int n);
void letterStat (char **sptr, int n);
void search (char **sptr, int n);

int main() {
  char ***sptr;
  int ui, n;
  while (1) { //infinite loop with 0 as exit case
  printf("1 -> Create\n2 -> lengthStat\n3 -> letterStat\n4 -> search\n5 -> removeDuplicate\n6 -> searchReplace\n7 -> arrange\n0 -> Terminate\n");
  scanf("%d", &ui);
  if (ui == 0) return 0; //user input to perform function or exit
  if (ui == 1) n = Create(sptr);
  if (ui == 2) lengthStat (*sptr, n);
  if (ui == 3) letterStat (*sptr, n);
  if (ui == 4) search (*sptr, n);
  }
}

int Create (char ***sptr) {
  int n;
  printf("How many words would you like to input (< 100): ");
  scanf("%d", &n);
  *(sptr) = (char **) malloc (n); //the 2d pointer is assigned n bytes for the n words user will input
  for (int i = 0; i < n; i++) { //loop takes input from user for input and stores it in 1d pointer and alters size to fit the word
    printf("Enter word: ");
    (*(*sptr + i)) = (char *) malloc (100);
    scanf("%s", *(*sptr + i));
    *(*sptr + i) = (char *) realloc (*(*sptr + i), strlen(*(*sptr + i)));
  }
  printf("\nThe inputted words are as follows:\n"); //displayed
  for (int i = 0; i < n; i++) {
    printf("%s\n", *(*sptr + i));
  }
  return n;
}

int wordlth (char *sptr) { //a function to calculate wordlength
  int n = 0;
  while (*(sptr + n)){
    n++;
  }
  return n;
}

void lengthStat (char **sptr, int n) //checks each word for its size and prints it in according category
  printf("Between 1 - 2\n");
  for (int i = 0; i < n; i++) {
    int p = wordlth(*(sptr + i));
    if (p == 1 || p == 2) printf("%s\n", *(sptr + i));
  }
   printf("Between 3 - 5\n");
   for (int i = 0; i < n; i++) {
     int p = wordlth(*(sptr+i));
     if (p == 3 || p == 4 || p == 5) printf("%s\n", *(sptr + i));
   }
   printf("Greater than 5\n");
  for (int i = 0; i < n; i++) {
    int p = wordlth(*(sptr+i));
    if (p > 5) printf("%s\n", *(sptr + i));
  }
}

void letterStat (char **sptr, int n) { //an array holds number of different vowels and all are printed together at the end
  int cnt[5] = {0, 0, 0, 0, 0};
  for (int i = 0; i < n; i++) {
    int j = 0;
    while (*(*(sptr + i) + j)) {
      if ((*(*(sptr + i) + j)) == 'a') cnt[0]++;
      else if ((*(*(sptr + i) + j)) == 'e') cnt[1]++;
      else if ((*(*(sptr + i) + j)) == 'i') cnt[2]++;
      else if ((*(*(sptr + i) + j)) == 'o') cnt[3]++;
      else if ((*(*(sptr + i) + j)) == 'u') cnt[4]++;
      j++;
    }
  }
  printf("The number of 'a' are %d\n", cnt[0]);
  printf("The number of 'e' are %d\n", cnt[1]);
  printf("The number of 'i' are %d\n", cnt[2]);
  printf("The number of 'o' are %d\n", cnt[3]);
  printf("The number of 'u' are %d\n", cnt[4]);
}

void search (char **sptr, int n) { //searches each word for match and prints position and word
  char c[100];
  printf("Input search term: ");
  scanf("%s", c);
  for (int i = 0; i < n; i++) {
    if (strcmp((*(sptr + i)), c) == 0) printf("%s  Reference No. %d\n", *(sptr + i), i+1);
  }
}


