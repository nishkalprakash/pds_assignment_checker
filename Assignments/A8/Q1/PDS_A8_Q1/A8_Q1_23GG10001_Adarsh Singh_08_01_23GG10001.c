#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n1;
void create(char *X,int *N){
  int n,i=0,flag=0;
  char* S=(char*)malloc(100*sizeof(char));
  printf("How many words to enter:\n");
  scanf("%d",&n);
  *N=n;
  X=(char*)malloc((n*100)*sizeof(char));
  printf("Enter the words:\n");
  for(i=0;i<n;i++){
    scanf("%s",S);
    strcat(X,S);
  }
  printf("The words entered are:\n");
  for(i=0;i<n*100;i++){
    if(X[i]=='\0'){
      printf("\n");
      flag++;
    }
    printf("%c",X[i]);
    if(flag==n){
      break;
    }
  }
  return;
}

int lengthStat(char*X){
  int count=0,count1=0,flag=0,i;
  for(i=0;i<n1*100;i++){
    if(X[i]!='\0'){
      count++;
    }
    if(X[i]=='\0'){
      flag++;
    }
    if(X[i]=='\0'&&((count>=1&&count<=2)||(count>=3&&count<=5)||count>5)){
      count1=count1+count;
    }
    count=0;
    X=X+i;
    if(flag=n1){
      break;
    }
  }
  return count1;
}

int letterStat(char* X){
  int count=0,count1=0,i;
  for(i=0;i<n1*100;i++){
    if(X[i]!='\0'&&(X[i]=='a'||X[i]=='e'||X[i]=='i'||X[i]=='o'||X[i]=='u')){
      count++;
    }
    if(X[i]=='\0'){
      count1++;
    }
    if(count1==n1){
      break;
    }
  }
  return count ;
}

void searchReplace(char* X){
  char k[100];
  int flag=0,count=0,count1=0,i;
  printf("Enter the word to be searched and replaced:\n");
  scanf("%s",k);
  for(i=0;i<n1*100&&X[i]!='\0';i++){
    if(k[i]=X[i]){
      flag++;
    }
    if(flag==i){
      count++;
    }
    if(X[i]=='\0'){
      count1++;
    }
    if(count1==n1){
      break;
    }
  }
  printf("%d",count);
}

void search(char* X){
}

void removeDuplicate(char* X){
}

void arrange(char* X){
}

int main(){
  char *sptr;
  int n;
  printf("Enter the choice of operation you wanna perform:\n");
  printf("1-->create()\n");
  printf("2-->lengthStat()\n");
  printf("3-->letterStat()\n");
  printf("4-->Search()\n");
  printf("5-->removeDuplicate()\n");
  printf("6-->searchReplace()\n");
  printf("7-->arrange()\n");
  while(1){
    scanf("%d",&n);
    if(n==1){
      create(sptr,&n1);
    }
    if(n==2){
      lengthStat(sptr);
    }
    if(n==3){
      letterStat(sptr);
    }
    if(n==4){
      search(sptr);
    }
    if(n==5){
      removeDuplicate(sptr);
    }
    if(n==6){
      searchReplace(sptr);
    }
    if(n==7){
      arrange(sptr);
    }
    if(n==0){
      break;
    }  
  }
  return 0;
}  
