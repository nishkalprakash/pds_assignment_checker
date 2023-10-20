#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char create(char*sptr[],int x){
  char*result=(char*)malloc(sptr*sizeof(char));
  printf("%st",sptr);
  return result;
}
int length_stat(char*sptr[]){
  int z=strlen(sptr);
  printf("%d",z);
  return length_stat;
}
int letter_stat(char*sptr[]){
  int z=0;
  for(int i=0;i<99;i++){
    for(int j=1;j<100;j++){
      if(sptr[i]==sptr[j]){
	z+=1;
      }
    }
    printf("The number of times %c occurs is %d",sptr,z);
  }
  return letter_stat;
}
char search (char*sptr[]){
  char letter;
  printf("Enter the letter u want to search :");
  scanf("%c",&letter);
  for(int i=0;i<100;i++){
    if(letter==sptr[i]){
      printf("The letter %c is present in stpr at %d position of stpr ",letter,i);
    }
  }
  return search;
}
char remove_duplicate(char*sptr[]){
  for(int i=0;i<99;i++){
    for(int j=1;j<100;j++){
      if(sptr[i]==sptr[j]){
	dealloc(sptr,i);
      }
    }
    printf("Updated String :\n");
    printf("%c",sptr[i]);
  }
  return remove_duplicate;
}
char arrange(char*sptr){
  printf("ur string is %st",sptr);
  printf("%d",strlen(sptr));
  int start=0;
  int end=99;
  while(start<end){
    int temp= sptr[start];
    sptr[start]=sptr[end];
    sptr[end]=temp;
    start++;
    end--;
  }
  printf("Rearranged string is %st",sptr);
  return arrange;
}


int main (){
  int n,x;
  char sptr[100];
  printf("Enter your choice : ");
  scanf("%d",&n);
  if (n==1){
    printf("Enter the length of string u want to write :");
    scanf("%d",&x);
    printf("Enter ur string :");
    scanf("%st",&sptr);
    char create(sptr,x);
  }
  else if (n==2){
    printf("Enter your string :");
    scanf("%st",&sptr);
    int length_stat(sptr);
  }
  else if(n==3){
    int letter_stat(sptr);
  }
  else if(n==4){
    char search(sptr);
  }
  else if(n==5){
    char remove_duplicate(sptr);
  }
  else if (n==6){
    char arrange(char*sptr);
  }
}
