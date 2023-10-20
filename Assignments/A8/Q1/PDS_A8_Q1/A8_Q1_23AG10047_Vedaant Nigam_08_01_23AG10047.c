#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int create(char***sptr);
void lengthstat(char**sptr,int );
void letterstat(char**sptr,int);
int main(){
  char **sptr ;
  int num;
  while(1){
    int n;
    scanf("%d",&n);
    if(n==1){  num= create(&sptr);}
    if(n==2){lengthstat(sptr,num);}
     if(n==3){letterstat(sptr,num);}
    if(n==0){break;}
  }
}
int create (char ***sptr ){
  int n;
  printf("enter numbers of words you want to enter\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    int size;
    char str1[100];
    scanf("%s",str1);
    size=strlen(str1);
    (*sptr)[i]=(char*)malloc(size*sizeof(char));
    strcpy((*sptr)[i],str1);
  }
  for(int i=0;i<n;i++){printf("%s\n",(*sptr)[i]);}
  return(n);
}
void lengthstat(char **sptr,int num){
  int size1=0,size2=0,size3=0;
  for(int i=0;i<num;i++){
    int s=0;
    s=strlen(sptr[i]);
    if(s>=1 && s<=2){size1++;}
    else if(s>=3 && s<=5){size2++;}
    else if(s>5){size3++;}
  }
  printf("\nwords with letters 1-2= %d \nwords with letters 3-5= %d \nwords with letters more than 5=%d\n",size1,size2,size3); 
}
void letterstat(char**sptr,int num){
  int a=0,e=0,i1=0,o=0,u=0;
  for(int i=0;i<num;i++){
    for(int j=0;sptr[i][j]!='\0';j++){
      if(sptr[i][j]=='a')a++;
      else if(sptr[i][j]=='e')e++;
      else if(sptr[i][j]=='i')i1++;
      else if(sptr[i][j]=='o')o++;
      else if(sptr[i][j]=='u')u++;	  
    }
  }
  printf("\nnumber of a= %d\nnumber of e= %d\nnumber of i= %d\nnumber of o= %d\nnumber of u= %d\n",a,e,i1,o,u);
}
