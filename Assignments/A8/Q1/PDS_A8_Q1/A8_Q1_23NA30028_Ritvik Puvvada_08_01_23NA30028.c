#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void create(char ***sptr){
  int n,i;
  printf("How many words do you want to enter (<100):");
  scanf("%d",&n);
  *sptr=(char**)malloc(n*sizeof(char*));
  if(n>=0 && n<100){
    for(i=0;i<n;i++){
      printf("Enter the word no.%d:",i+1);
      char new[200];
      scanf("%s",new);
      strcpy(new,(*sptr)[i]);
      //scanf("%s",(*sptr)[i]);
      //sptr=(char***)malloc((strlen(*sptr[i]))*sizeof(char));
      printf("%s\n",(*sptr)[i]);
      }
  }
     else printf("Invalid entry");
}
      
      

int main(){
  char **sptr;
  
  int n,c;
  while(1){
    printf("1:create\n");
    printf("2:lengthStat\n");
    printf("3:letterStat\n");
    printf("4:search:\n");
    printf("5:removeDuplicate:\n");
    printf("6:searchReplace:\n");
    printf("7:arrange:\n");
    printf("0:terminate:\n");
    printf("Enter a choice:");
    scanf("%d",&c);
    if(c==1){
      create(&sptr);
    }
    
    if(c==0) break;
  }
    
  
  
  return 0;
}
  
  
