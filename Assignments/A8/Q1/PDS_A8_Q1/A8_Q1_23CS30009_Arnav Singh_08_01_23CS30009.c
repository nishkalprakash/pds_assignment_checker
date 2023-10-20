//Role No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int create(char ***a);
void lengthStat(char **a, int n);
void letterStat(char **a, int n);
void search(char **a, int n);
int removeDuplicate(char ***a, int n);
void searchReplace(char **a);
void arrange(char **a);

int main(){
  char **sptr;
  int n;
  while(1){
    int ch;
    printf("1 : create \n2 : lengthStat\n3 : letterStat\n4 : search\n5 : removeDuplicate\n6 : searchReplace\n7 : arrange\n");
    printf("Enter your choice (1 to 7): ");
    scanf("%d", &ch);
    switch (ch){
    case 1: n=create(&sptr);
      break;
    case 2: lengthStat(sptr,n);
      break;
    case 3: letterStat(sptr,n);
      break;
    case 4: search(sptr, n);
      break;
    case 5: n= removeDuplicate(&sptr, n);
      break;
    case 6: searchReplace(sptr);
      break;
    case 7: arrange(sptr);
      break;
    case 0: return 0;
    default: printf("Wrong input. Enter again.");
    }
  }
  for (int i=0; i<n; i++){
    free(sptr[i]);
  }
  free(sptr);
  return 0;
}

int create(char ***sptr){
  int n;
  printf("Enter number of words (<100): ");
  scanf("%d", &n);
  *sptr=(char **)malloc(n*sizeof(char *));
  for (int i=0; i<n; i++){
    char str[100];
    printf("Enter word number %d: ", i+1);
    scanf("%s", str);
    (*sptr)[i]=(char *)malloc(strlen(str)*sizeof(char));
    strcpy((*sptr)[i],str);
  }
  for (int i=0; i<n; i++){ //Displaying words
    printf("%s\t", (*sptr)[i]);
  }
  printf("\n");
  return n;
}

void lengthStat(char **sptr, int n){
  int no12=0, no35=0, no6=0;
  for (int i=0; i<n; i++){
    int leng=strlen(sptr[i]);
    if (leng==1 || leng==2) no12++;
    else if (leng>=1 && leng<=5) no35++;
    else no6++;
  }
  printf("No. of words of length 1--2 letters: %d\n", no12);
  printf("No. of words of length 3--5 letters: %d\n", no35);
  printf("No. of words of length >5 letters: %d\n", no6);
  return;
}

void letterStat(char **sptr, int n){
  int a=0, e=0, i=0, o=0, u=0;
  for (int b=0; b<n; b++){
    for (int c=0; sptr[b][c]!='\0'; c++){
      if (sptr[b][c]=='a') a++;
      else if (sptr[b][c]=='e') e++;
      else if (sptr[b][c]=='i') i++;
      else if (sptr[b][c]=='o') o++;
      else if (sptr[b][c]=='u') u++;
    }
  }
  printf("Number of a's: %d\n", a);
  printf("Number of e's: %d\n", e);
  printf("Number of i's: %d\n", i);
  printf("Number of o's: %d\n", o);
  printf("Number of u's: %d\n", u);
  return;
}


void search(char **sptr, int n){
  char iword[100];
  int occ[n];  //To store the sequence numbers
  int count=0;   //To store the humber of occurances
  printf("Enter the word to be searched: ");
  scanf("%s", iword);
  for (int i=0; i<n; i++){
    if (strcmp(iword, sptr[i])==0){
      occ[count]=i;
      count++;
    }
  }
  if (count==0){
    printf("Word not found.\n");
  }
  else if (count==1){
    printf("Word found at sequence number %d/\n", occ[0]);
  }
  else{
    printf("Word found at sequence numbers: \n");
    for (int i=0; i<count; i++){
      printf("%d\t", occ[i]);
    }
    printf("\n");
  }
  return;
}


int removeDuplicate(char ***sptr, int n){
  for (int i=0; i<n-1; i++){
    char word[100];
    strcpy(word,(*sptr)[i]);
    for (int j=i+1; j<n; j++){
      if (strcmp(word, (*sptr)[j])==0){
	free((*sptr)[j]);  //Freeing the dupicate word
	for (int k=j; k<n-1; k++){  //Shifting the elements to left to fill the empty space
	  (*sptr)[k]=(*sptr)[k+1];
	}
        //if (j!=n-1) free((*sptr)[n-1]);  //Freeing the last space if not already done
	n--;  //Reducing the number of words by 1
	j--;  //Now the jth word needs to be checked again as it has been updated
      }
    }
  }
  (*sptr)=(char **)realloc(*sptr, n*sizeof(char *));  //To reduce the size to new n
  for (int i=0; i<n; i++){ //Displaying words
    printf("%s\t", (*sptr)[i]);
  }
  printf("\n");
  return n;
}


void searchReplace(char **sptr){
  
  return;
}


void arrange(char **sptr){
  
  return;
}

