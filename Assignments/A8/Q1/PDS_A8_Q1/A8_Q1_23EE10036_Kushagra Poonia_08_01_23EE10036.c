//Roll: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printString(char **, int n);
void create(char ***, int *ptr);
void lengthStat(char **, int n);
void letterStat(char **, int n);
void search(char **, int n);
void removeDuplicate(char ***, int *n);
//void searchReplace(char **, int n);
//void arrange(char ***, int n);

int main(){
  char **sptr; int n;
  
  while(1){
    int choice;
    printf("Menu:\n");
    printf("1 -> create\n");
    printf("2 -> lengthStat\n");
    printf("3 -> letterStat\n");
    printf("4 -> search\n");
    printf("5 -> removeDuplicate\n");
    printf("6 -> searchReplace\n");
    printf("7 -> arrange\n");
    printf("0 -> Exit\n");
    scanf("%d", &choice);

    switch(choice){
    case 0:
      return 0;
    case 1:
      create(&sptr, &n);
      printString(sptr, n);
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
      removeDuplicate(&sptr, &n);
      break;
    case 6:
      //searchReplace(sptr, n);
      break;
    case 7:
      //arrange(&sptr, n);
      break;
    default:
      break;
    }
  }
  free(sptr);
}

void create(char ***sptr, int *ptr){
  char c; int k;

  
  printf("Enter the number of words:");
      scanf("%d", ptr);
      *sptr = (char **)malloc(*ptr*sizeof(char *));
  
  for(int i = 0; i < *ptr; i++){
    c = '\0';
    k = 0;
    printf("Enter word %d\n", i+1);
    scanf("%c", &c);
    if(c != '\n'){//The enter after &n was causing issues for word change
      k++;
      (*sptr)[i] = realloc((*sptr)[i], k+1);
      (*sptr)[i][k-1] = c;
    }
    while(1){//Modifying the array length as i get a new input if I don't get any input I add '\0'at the end
      scanf("%c", &c);
      if(c == '\n'){
	(*sptr)[i] = realloc((*sptr)[i], k+1);
	(*sptr)[i][k+1] = '\0';
	break;
      }
      k++;
      (*sptr)[i] = realloc((*sptr)[i], k);
      (*sptr)[i][k-1] = c;
    }
  }
}

void lengthStat(char **sptr, int n){
  int words[3] ={0};
  for(int i = 0; i < n; i++){
    if(strlen(sptr[i]) <= 2 && strlen(sptr[i]) >= 1){
      words[0]++;
    }
    if(strlen(sptr[i]) <= 5 && strlen(sptr[i]) >= 3){
      words[1]++;
    }
    if(strlen(sptr[i]) > 5){
      words[2]++;
    }
  }
  printf("\nWords of length 1-2: %d\n", words[0]);
  printf("Words of length 3-5: %d\n", words[1]);
  printf("Words of length greater than 5: %d\n", words[2]);
}

void letterStat(char **sptr, int n){
  int vowels = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; sptr[i][j] != '\0'; j++){
      if(sptr[i][j] == 'a' || sptr[i][j] == 'e' || sptr[i][j] == 'i' || sptr[i][j] == 'o' || sptr[i][j] == 'u'){
	vowels++;
      }
    }
  }
  printf("The total number of vowels = %d\n", vowels);
}

void search(char **sptr, int n){
  char *word;
  int flag = 0;
  word = (char *)malloc(100*sizeof(char)); //Assuming the largest word size to be 100
  printf("Enter the word to be scanned:");
  scanf("%s", word);
  word = realloc(word, strlen(word)*sizeof(char));//Reallocating the memory according to input
  printString(sptr, n);
  for(int i = 0; i < n; i++){
    if(strlen(word) == strlen(sptr[i])){
      flag = 0;
      for(int j = 0; j < strlen(word); j++){
	if(word[j] != sptr[i][j]){
	  break;
	}
      }
      printf("sptr[%d] = %s\n", i, sptr[i]);
      flag = 1;
    }
  }
  if(flag == 0){
    printf("The Word is absent\n");
  }
}

void removeDuplicate(char ***sptr, int *n){
  int flag = 1;
  for(int i = 0; i < *n; i++){
    for(int j = i+1; j < *n; j++){
      flag = 1;
      if(strlen((*sptr)[j]) == strlen((*sptr)[i])){
	for(int k = 0; k < strlen((*sptr)[i]); k++){
	  if((*sptr)[i][k] != (*sptr)[j][k]){
	    flag = 0;
	    break;
	  }
	}
	if(flag == 1){
	  for(int sh = j; sh < (*n)-1; sh++){
	    (*sptr)[sh]=(*sptr)[sh+1];
	  }
	  *n = *n - 1;
	  (*sptr) = (char **)realloc((*sptr), *n);
	}
      }
    }
  }
  printString(*sptr, *n);
}

void printString(char **sptr, int n){//Printing the 2D array
  printf("\n");
  for(int i = 0; i < n; i++){
    printf("%s ", sptr[i]);
  }
  printf("\n");
}
