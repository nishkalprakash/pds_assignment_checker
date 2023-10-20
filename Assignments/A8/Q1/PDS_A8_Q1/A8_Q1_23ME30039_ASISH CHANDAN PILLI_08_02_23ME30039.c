//name: pilli asish chadan ; r.no: 23ME30039
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void create(char***sptr){
  int wordcount;
  
  printf("enter wordcount");
  scanf("%d",&wordcount);
  if(wordcount>0 && wordcount<100){
    char**words=(char**)malloc(wordcount*sizeof(char*));
    if(words==NULL)
      {
      printf("memory allocation failed");
      return;
      }
    for(int i=0;i<wordcount;i++){
      char word[100];
      printf("enter word %d",i+1);
      scanf("%s",word);
      words[i]=(char*)malloc(strlen(word)+1);
      if (words[i]!=NULL){
	strcpy(words[i],word);
      }
    }
    *sptr=words;
    
    for(int i=0;i<wordcount;i++){
      printf("%s\n",words[i]);}}
    else
      printf("invalid value enter value between 1-100");
  return;
  
  }

    
  
  
      
      
    
    
      
    
    
  
int main(){
  
  char**sptr=NULL;
  while(1) {
    int n;
    printf("enter n between 1-7 or 0 to exit");
    scanf("%d",&n);
    if(n==1)
      create(&sptr);
      
      
      
    
    if(n==0)
      break;
  }
}

