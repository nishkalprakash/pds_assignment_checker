//ESLAVATH NAVEEN
//ROLL NO.:23MI31012

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
char sptr[100];

void create(char *sptr[]){
  int x;
  char word[100];
  printf("No. of words you want to enter");
  scanf("%d",&x);
 
  if(x>=1 && x<100){
  printf("enter the words:\n ");
  scanf("%s",word);
  printf("%s",word[]);
  sptr[]=(char *)malloc(x * sizeof(char));
  sptr[]=&word[100];
  *sptr[]=word[100];
  printf("%s",*sptr);
  }
  else {
      printf("Sorry! memmory doesn't allocate\n");
    }
}
void lengthStat(char *sptr[]){
  int i,len=0;
  char word[100];
  printf("enter the words:\n ");
  scanf("%s",word);
  printf("%s",word[]);
  for(i=0;(*sptr)[i]!='\0';i++){
    len++;
    if(len>0 && len<=2){
      printf("words between 1--2 letters: %s\n",*sptr[]);
    }
    else if(len>2 && len<=5){
      printf("words between 3--5 letters: %s\n",*sptr[]);
    }
    else printf("words of letters greater than 5: %s\n",*sptr[]);
  }
}

void letterStat(char *sptr[]){
  char word[100];
  char vowel[]={'a','e','i','o','u','\0'};
  printf("enter the words:\n ");
  scanf("%s",word);
  printf("%s",word[]);
  
}

void search(char *sptr[]){
  char _word[100];
  printf("Enter your word : ");
  scanf("%s",_word);
  if(sptr[]==_word[]){
    printf("%s",_word[]);
  }
}
void removeDuplicate(char *sptr[]){
  char _word[100];
  printf("Enter your word : ");
  scanf("%s",_word);
  printf("%s",_word[]);
  
}
void searchReplace(char *sptr[]){
  char _word[100];
  printf("Enter your word : ");
  scanf("%s",_word);
  printf("%s",_word[]);
}
void arrange(char *sptr[]){
   char _word[100];
  printf("Enter your word : ");
  scanf("%s",_word);
  printf("%s",word);
  if (sptr[]=_word[]){
    printf("%s",_word[]);
  }
  
  
int main(){
  int y;
  printf("Enter 1)create, 2)lengthStat, 3)letterStat, 4)Search, 5)removeDuplicate, 6)searchReplace, 7)arrenge.");
  scanf("%d\n",&y);
  if(y==0){
    exit(1);
  }
  else if(y==1){
    void create();
  }
  else if(y==2){
    void lengthState();
  }
  else if(y==3){
    void letterStat();
  }
  else if(y==4){
    void Search();
  }
  else if(y==5){
    void removeDuplicate();
  }
  else if(y==6){
    void searchReplace();
  }
  else if(y==7){
    voide arrange();
  }
  else printf("sorry! You entered a inapropriate value\n");
  
  return 0;
}
 
