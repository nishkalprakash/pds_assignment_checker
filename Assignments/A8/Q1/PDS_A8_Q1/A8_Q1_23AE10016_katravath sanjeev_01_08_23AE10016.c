#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char MAX_WORDS= 100
int MAX_WORDS_LENGTH= 100
char* sptr[MAX_WORDS];
int n=0;
 void creat();
void lengthStat();
void letterStat();
void search();
void removeDuplicate();
void searchReplace();
void arrange();

int main(){
  int choice;
  while (1){
    printf("menu:\n");
    printf("1. creat\n");
    printf("2. lengthStat\n");
    printf("3. letterStat\n");
    printf("4. search\n");
    printf("5. removeDuplicate\n");
    printf("6. searchReplace\n");
    printf("7. arrange\n");
    printf("0. terminate\n");
    scanf("%d",&choice);
  switch(choice){
  case 1:
    creat();
    break;
  case 2:
    lengthStat();
    break;
  case 3:
    letterStat();
      break;
  case 4:
    search();
    break;
  case 5:
    removeDuplicate();
    break;
  case 6:
    searchReplace();
    break;
  case 7:
    arrange();
    break;
  case 0:
    return 0;
  default:
  printf("invalid chioce. please try again.\n");
    }
  }
  return 0;
}
void creat(){
  if(n==MAX_WORDS){
    printf("Max words limit reached.\n");
    return;
  }
  printf("enter the number of words to enter (up to 100):");
  scanf("%d",&n);
  for(int i=0;i<n;i++);
  {
    char word[int MAX_WORD_LENGTH];
    printf("enter word %d:",i+1);
    scanf("%s",word);
    strstr[i]=(char*)malloc(strlen(word)+1);
    strcpy(strstr[i],word);
  }
  printf("word enterd:\n");
  for(int i=0;i<n;i++){
  printf("%s\n",strstr[i]);
  }
}
void lengthStat(){}
void letterStat(){}
void search(){}
void removeDuplicate(){}
void searchReplace(){}
void arrange(){}
