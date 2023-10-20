//ROLL No: 23ME10044
//NAME: LALIT KARTHIKEYAN.M.A

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int n;
void create(char ***sptr){
  int c;
  char temp[20];
  printf("Enter the number of words [1,100]\n");
  scanf("%d",&n);
  *sptr=(char**)malloc(n*sizeof(char*));
  for(int i=0;i<n;i++){
    scanf("%s",temp);
    c=strlen(temp);
    c++;
    (*sptr)[i]=(char*)malloc((c)*sizeof(char));
    for(int j=0;temp[j]!='\0';j++){
      (*sptr)[i][j]=temp[j];
    }
  }printf("All the words have been entered. \n\n");

  printf("The words are:\n");
  for(int i=0;i<n;i++){
    for(int j=0;(*sptr)[i][j]!='\0';j++){
      printf("%c",(*sptr)[i][j]);
    }printf("\n");
  }printf("\n\n");
}

void lengthstat(char **sptr){

  char a=0,b=0,d=0;
  int c=0;
  for(int i=0;i<n;i++){
    c=0;
    for(int j=0;(sptr)[i][j]!='\0';j++){
      c++;
    }
    if(c>=1 && c<=2){
      a++;
    }
    if(c>=3 && c<=5){
      b++;
    }
    if(c>5) d++;
  }

  printf("The number of words that are of lengths: between 1 and 2 is %d between 3 and 5 is %d greater than 5 is %d\n\n", a, b, d);
}

void letterstat(char **sptr){
  int a=0,e=0,i=0,o=0,u=0;
  char c;
  for(int k=0;k<n;k++){
    for(int j=0;sptr[k][j]!='\0';j++){
      c=sptr[k][j];
      if(c=='a')a++;
      if(c=='e')e++;
      if(c=='i')i++;
      if(c=='o')o++;
      if(c=='u')u++;
    }
  }
  printf("The frequency of vowels is a: %d e: %d i: %d o: %d u: %d\n\n",a,e,i,o,u);
}



int main(){

  int n;
  char **sptr;
  while(1){
    printf("Enter the operation that you need to perform: 1.Create, 2. lengthStat, 3. letterStat\n");
    scanf("%d",&n);
    if(n==0 || n==4|| n==5|| n==6|| n==7|| n==8|| n==9)break;
    if(n==1)create(&sptr);
    if(n==2)lengthstat(sptr);
    if(n==3)letterstat(sptr);
  }
  return 0;
}
