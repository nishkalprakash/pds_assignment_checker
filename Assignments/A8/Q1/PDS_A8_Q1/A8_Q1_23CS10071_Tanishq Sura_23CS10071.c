//name Tanishq Sura
//roll no 23CS10071
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char **create(char **sptr1,int *n);
void lengthStat(char **sptr,int words);
void letterStat(char **sptr,int words);
void search(char **sptr,int words);
char **removeDuplicate(char **sptr,int *words);
/*void searchReplace(char **sptr);
void arrange(char **sptr);*/


int main(){
  char **sptr;
  sptr=(char **)malloc(100*sizeof(char *));
  int n;
  int words=0;
  while(1){
    printf("enter a number between 1-7 to choose a task(enter 0 to end):");
    scanf("%d",&n);
    if(n==1) sptr=create(sptr,&words);
    if(n==2) lengthStat(sptr,words);
    if(n==3) letterStat(sptr,words);
    if(n==4) search(sptr,words);
    if(n==5) sptr=removeDuplicate(sptr,&words);
    /*if(n==6) searchReplace(sptr);
    if(n==7) arrange(sptr);*/
    if(n==0) break;
  }
  for(int i=0;i<words;i++){
    free(sptr[i]);
  }
  free(sptr);
  return 0;
}

char **create(char **sptr1,int *n){
  printf("enter number of words:");
  scanf("%d",n);
  sptr1=(char **)realloc(sptr1,(*n)*sizeof(char *));
  printf("Enter the words one at a time (press enter after each):\n");
  for(int i=0;i<(*n);i++){
    char temparr[100]={0};
    int wordsize;
    scanf("%s",temparr);
    wordsize=strlen(temparr);
    sptr1[i]=(char *)malloc((wordsize+1)*sizeof(char));
    strcpy(sptr1[i],temparr);
  }
  printf("The words entered were:");
  for(int i=0;i<(*n);i++){
    printf("%s ",sptr1[i]);
  }
  printf("\n");
  return sptr1;
}

void lengthStat(char **sptr,int words){
  int len12=0,len35=0,len_5=0;
  for(int i=0;i<words;i++){
    int len=strlen(sptr[i]);
    if(len<3) len12++;
    else if(len<6) len35++;
    else if(len>5) len_5++;
  }
  printf("no. of 1-2 letter words = %d\nno. of 3-5 letter words = %d\nno. of >5 letter words = %d\n",len12,len35,len_5);
  return;
}

void letterStat(char **sptr,int words){
  int counta=0,counte=0,counti=0,counto=0,countu=0;
  for(int i=0;i<words;i++){
    for(int j=0;sptr[i][j]!='\0';j++){
      if(sptr[i][j]=='a') counta++;
      if(sptr[i][j]=='e') counte++;
      if(sptr[i][j]=='i') counti++;
      if(sptr[i][j]=='o') counto++;
      if(sptr[i][j]=='u') countu++;
    }
  }
  printf("the no. of occurences of \na : %d \ne : %d \ni : %d \no : %d \nu : %d\n",counta,counte,counti,counto,countu);
  return;
}

void search(char **sptr,int words){
  char check[100];
  printf("enter a word to check: ");
  scanf("%s",check);
  int flag=0;
  for(int i=0;i<words;i++){
    if(strcmp(check,sptr[i])==0){
      printf("the word occurs at %d position (starting from 0)\n",i);
    }
    flag=1;
  }
  if(flag==0){printf("not found\n");}
  return;
}

char **removeDuplicate(char **sptr,int *words){
  int wordscurrent=*words;
  for(int i=0;i<wordscurrent;i++){
    for(int j=i+1;j<wordscurrent;j++){
      if(strcmp(sptr[i],sptr[j])==0){
	free(sptr[j]);
	for(int k=j;k<wordscurrent;k++){
	  sptr[k]=sptr[k+1];
	}
	wordscurrent--;
      }
    }
  }
  *words=wordscurrent;
  sptr=(char **)realloc(sptr,wordscurrent*sizeof(char *));
  for(int i=0;i<*words;i++){
    printf("%s ",sptr[i]);
  }
  printf("\n");
  return sptr;
}
			


    
