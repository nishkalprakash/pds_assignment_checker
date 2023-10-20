//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// displays the array of strings
void display(char **sptr) {
  // runs till we hit null pointer
  for (int i = 0; sptr[i]; i++)
      printf("\"%s\" ", sptr[i]);
  printf("\n");
}

//-------------------------------------------------


void create(char ***psptr) {
  // take in the number of strings in n and check if the input is valid
  int n;
  printf("Enter the number of words : ");
  scanf("%d", &n);
  if (!(0 <= n && n < 100)) {
    printf("Invalid Input\n");
    return;
  }

  // allocates space of n+1 char* so last is NULL 
  *psptr = (char **) malloc((n+1) * sizeof(char *));
  (*psptr)[n] = NULL;
  // we are taking in input a ptr to the sptr in main because we want to change that sptr during allocation but after allocation we can make a copy of the address that is sptr
  char **sptr = *psptr;

  printf("Enter %d words (length < 30): \n", n);
  for (int i = 0; i < n; i++) {
    // temporary string assuming max size 100 and takes input
    sptr[i] = (char *) malloc(30 * sizeof(char));
    scanf(" %s", sptr[i]);

    int len = strlen(sptr[i]);

    // reallocate size including '\0'
    sptr[i] = realloc(sptr[i], len+1); 
  }

  // Output strings taken in input
  printf("Input Strings : ");
  display(sptr);
}

//---------------------------------------------------

void lengthStat(char **sptr) {
  /* loops till sptr[i] is NULL prints the string separately for 3 cases */
  
  printf("Strings between length 1-2 : ");
  for (int i = 0; sptr[i]; i++) {
    int len = strlen(sptr[i]);
    if (1 <= len && len <= 2) printf("\"%s\"", sptr[i]);
  }
  printf("\n");
  
  printf("Strings between length 3-5 : ");
  for (int i = 0; sptr[i]; i++) {
    int len = strlen(sptr[i]);
    if (3 <= len && len <= 5) printf("\"%s\"", sptr[i]);
  }
  printf("\n");

  printf("Strings between length larger than 5 : ");
  for (int i = 0; sptr[i]; i++) {
    int len = strlen(sptr[i]);
    if (len > 5) printf("\"%s\"", sptr[i]);
  }
  printf("\n");
}

//---------------------------------------------------

void letterStat(char **sptr) {
  char vowel[5] = {'a', 'e', 'i', 'o', 'u'};

  /* If any character in our thing is a vowel cnt++. The == vowel[k] thing will be true for every character only once and only if its a vowel*/
  int cnt = 0;
  for (int i = 0; sptr[i]; i++) 
    for (int j = 0; j < sptr[i][j]; j++) 
      for (int k = 0; k < 5; k++)
	if (sptr[i][j] == vowel[k]) cnt++;

  printf("Total number of vowels = %d\n", cnt);
}

//-------------------------------------------------

void search(char **sptr) {
  // storing the word in string word
  printf("Enter the word to be searched (length < 30) : ");
  char *word;
  word = (char *) malloc(30 * sizeof(char));
  scanf("%s", word);

  printf("Indices where the word is found : ");
  for (int i = 0; sptr[i]; i++) 
    if (strcmp(word, sptr[i]) == 0) printf("%d ", i);

  printf("\n");
  // freeing the char ptr
  free(word);
}

//-----------------------------------------------------------

void removeDuplicate(char **sptr) {
  // n is the current number of words
  int n = 0;
  for (int i = 0; sptr[i]; i++) n++;
  
  for (int i = 0; sptr[i]; i++) {
    for (int j = i+1; sptr[j]; j++) {

      // find all the duplicates
      if (strcmp(sptr[i], sptr[j]) == 0) {
	// pushes all element to the ones before them moves them to left kind of
	for (int k = j+1; k <= n; k++) {
	  // swap
	  char *tmp = sptr[k];
	  sptr[k] = sptr[k-1];
	  sptr[k-1] = tmp;
	}

	// frees the last element which is the duplicate. now the n-1th element is null and size is also n-1 so we update n
	free(sptr[n--]);
      }
    }
  }
  
  display(sptr);
}

//---------------------------------------------------------

void searchReplace(char **sptr) {
  // same as search
  printf("Enter the word to be replaced (length < 30) : ");
  char *word = (char *) malloc(30 * sizeof(char));
  scanf("%s", word);

  for (int i = 0; sptr[i]; i++) {
    if (strcmp(word, sptr[i]) == 0) {
      char* newWord = (char *) malloc(30 * sizeof(char));
      printf("Enter the new word : ");
      scanf("%s", newWord);

      // freeing sptr[i] so that previous strings memory is freed and make it pt to new string
      free(sptr[i]);
      sptr[i] = newWord;
      printf("\n");
      break;
    }
  }

  display(sptr);
  
  printf("\n");
  free(word);
}

//--------------------------------------------------------

void arrange(char **sptr) {
  printf("Original Array :\n");
  for (int i = 0; sptr[i]; i++)
    printf("\"%s\" - %ld\n", sptr[i], strlen(sptr[i]));
  printf("\n");
  
  // Taking min size element from i to end and taking that to i
  for (int i = 0; sptr[i]; i++) {
    int jm = i;
    for (int j = i; sptr[j]; j++) 
      if (strlen(sptr[i]) > strlen(sptr[j]))
	  jm = j;

    // swap
    char *tmp = sptr[i];
    sptr[i] = sptr[jm];
    sptr[jm] = tmp;
  }

   printf("Updated Array :\n");
  for (int i = 0; sptr[i]; i++)
    printf("\"%s\" - %ld\n", sptr[i], strlen(sptr[i]));
  printf("\n");
}

int main() {
  char **sptr;
  
  /* Infinite loop which takes in user input in x and does the task accordingly */
  while (1) {
    printf("1->create()\n");
    printf("2->lengthStat()\n");
    printf("3->letterStat()\n");
    printf("4->search()\n");
    printf("5->removeDuplicate()\n");
    printf("6->searchReplace()\n");
    printf("7->arrange()\n");
    printf("0->terminate()\n");
    
    int x;
    printf("Enter user input : ");
    scanf("%d", &x);
    printf("\n");

    if (x == 0) break;
    if (x == 1) create(&sptr);
    if (x == 2) lengthStat(sptr);
    if (x == 3) letterStat(sptr);
    if (x == 4) search(sptr);
    if (x == 5) removeDuplicate(sptr);
    if (x == 6) searchReplace(sptr);
    if (x == 7) arrange(sptr);

    printf("\n");
  }

  for (int i = 0; sptr[i]; i++) free(sptr[i]);
  free(sptr);
}
