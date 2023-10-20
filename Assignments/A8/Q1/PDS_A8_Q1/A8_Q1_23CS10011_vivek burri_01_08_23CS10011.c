// name vivek
// roll no 23CS10011
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
void create(char***);
void lengthstat(char**);
void letterstat(char**);
void search(char**);


int main(){
  char **sptr;
  
  int i;
 A:{
    printf("\nenter number please\n");
    scanf("%d",&i);
    if(i==0) return 0;
    while(i<1||i>7) scanf("%d",&i);
    if(i==1){ create(&sptr);goto A;}
    if(i==2){ lengthstat(sptr);goto A;}
    if(i==3){letterstat(sptr);goto A;}
    if (i==4){search(sptr);goto A;}
    if(i==0) return 0;
  }
}

void create(char*** sptr){
  char k[100];
   int j;
  printf("no of words u want to enter\n");
  scanf("%d",&n);
 *sptr=(char**)malloc(n*sizeof(char*));
  for(int i=0;i<n;i++){
    scanf("%s",k);
    j=strlen(k);
    (*sptr)[i]=(char*)malloc((j+1)*sizeof(char));
    strcpy((*sptr)[i],k);
  }
  for(int i =0;i<n;i++)
    printf("%s",(*sptr)[i]);
    
  return ;
}
void lengthstat(char** sptr){
  int i,j;
  printf("words which are in 1--2 letters\n");
  for(i=0;i<n;i++){
    j=strlen(sptr[i]);
    if (j==1||j==2) printf("%s\n",sptr[i]);
  }
  printf("\nwords which are in 3--5 letters\n");
   for(i=0;i<n;i++){
     j=strlen(sptr[i]);
     if (j==3||j==4||j==5) printf("%s\n",sptr[i]);
  }
   printf("words which are greater than 5 letters\n");
   for(i=0;i<n;i++){
    j=strlen(sptr[i]);
    if (j>5)printf("%s\n",sptr[i]);
  }
   return ;
}
void letterstat(char** sptr){
  int  b[5]={0},j;
  char i;
  i='a';
  for(int i=0;i<n;i++){
    j=strlen(sptr[i]);
    for(int k=0;k<j;k++){
      if(sptr[i][k]=='a') b[0]++;
      if(sptr[i][k]=='e')b[1]++;
      if(sptr[i][k]=='i') b[2]++;
      if(sptr[i][k]=='0')b[3]++;
      if(sptr[i][k]=='u') b[4]++;
    }
  }
  printf("a repeated %d times\n",b[0]);
  printf("e repeated %d times\n",b[1]);
  printf("i repeated %d times\n",b[2]);
  printf("o repeated %d times\n",b[3]);
  printf("u repeated %d times\n",b[4]);
  
    return;
    
}
void search(char** sptr){
  char k[20],*p;
  int j,a;
  p=k;
  printf("enter word\n");
  scanf("%s",k);
  for(int i=0;i<n;i++){
    j=strcmp(k,sptr[i]);
    if (j==0) printf("word matched %s in sptr[%d]",k,i);
  }
  
}


      


    
      
   	 
      
