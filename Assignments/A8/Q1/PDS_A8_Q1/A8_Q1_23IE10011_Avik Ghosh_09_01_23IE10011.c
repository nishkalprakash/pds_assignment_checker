//Roll no.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n;

void create(char **sptr){
  int i,j,k,len;
  char str[1000];
  printf("Enter number of words (but less than 100)\n");
  scanf("%d",&n);
  if(n >= 100) 
    {
    printf("Exceeded value of n is entered\n");
    }

  else
    {
  sptr = (char **)malloc(n*sizeof(char*));
  for(i=0;i<n;i++)
    { 
    scanf("%s",str);
    len=strlen(str);
    sptr[i] = (char *)malloc(len*sizeof(char));
  strcpy(sptr[i],str);
       len=0;
    }
  printf("Words entered by user\n");
  for(i=0;i<n;i++)
    {
    printf("%s\n",sptr[i]);
    }
    }
  return;
}
  
void lengthStat(char **sptr){
  int i,j;
  for(i=0;i<n;i++)
    {
      if(strlen(sptr[i]) >= 1 && strlen(sptr[i]) <= 2)
	{
	  printf("Display words of 1 -- 2 letters\n");
	  printf("%s\n",sptr[i]);
	}
      else if(strlen(sptr[i]) >= 3 && strlen(sptr[i]) <= 5)
	{
	    printf("Display words of 3--5 letters\n");
	printf("%s\n",sptr[i]);
	}
      else
	{
	    printf("Display words of larger than 5 letters\n");
	printf("%s\n",sptr[i]);
	}
    }
  return;
  }
void letterStat(char **sptr){
  int i,j,l;
  for(i=0; i<n; i++){
    l= strlen(sptr[i]);
    for(j=0;j < l; j++){
      if(sptr[i][j] == 'a' || sptr[i][j] == 'e' || sptr[i][j] == 'i'|| sptr[i][j] == 'o'|| sptr[i][j] == 'u'){
	printf("%s\n",sptr[i]);
      }
    }
  }
  return;      
}

void search(char **sptr){
  char word,k=1;
  int i;
  printf("Enter word\n");
  scanf("%s",word);
  for(i=0;i<n;i++)
    {
      if(strcmp(sptr[i],word) == 0)
	{
	  k=0;
	  printf("Word is found\n");
	}
    }
  if(k)
    printf("Word is not found\n");
  return;
}

void removeDuplicate(char **sptr){
  int i,j;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(strcmp(sptr[i],sptr[j]) == 1)
	sptr[j] = sptr[j+1];
    }
  }
  return;
}

void searchReplace(char **sptr){
  int i,j,k=1;
  char word[1000];
    printf("Enter word\n");
  scanf("%s",word);
  for(i=0;i<n;i++)
    {
      if(strcmp(sptr[i],word) == 0 && (k>=1 && k<=2))
	{
	  k++;
	  printf("Enter a word to be replaced\n");
	  scanf("%s",word);
	  strcpy(sptr[i],word);
	}
    }
  return;
}
  
  
int main() {
  char **sptr;
  int ch;
  while(1){
    //displaying menu
    printf("Enter\n 1 ->create()\n 2 ->lengthStat()\n 3 ->letterStat()\n 4 ->search()\n 5 ->removeDuplicate()\n 6 ->searchReplace()\n 7 ->arrange()\n");
  printf("Enter your choice\n");
  scanf("%d",&ch);
  switch(ch){
  case 1: create(&sptr);
    break;
  case 2: lengthStat(&sptr);
    break;
  case 3: letterStat(&sptr);
    break;
  case 4: search(&sptr);
    break;
  case 5: removeDuplicate(&sptr);
    break;
  case 6: searchReplace(&sptr);
    break;
    /* case 7: arrange(sptr);
       break;*/
  default: printf("Entered wrong choice\n");
  break;

  }

  }
  free(sptr);
  return 0;
}
