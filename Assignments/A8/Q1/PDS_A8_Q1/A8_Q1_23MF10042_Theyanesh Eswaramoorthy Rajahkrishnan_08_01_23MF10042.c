//Roll no:23MF10042
//Name: Theyanesh Eswaramoorthy Rajahkrishnan
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
int create(char ***sptr)
{
  char samp[20];
  printf("enter the number of words\n");
  scanf("%d",&n);
  if(n>=100){
    printf("too long");
    exit(1);}
  else{
    *sptr=(char **)malloc(n*sizeof(char*));
    for(int i=0;i<n;i++){
      scanf("%s",samp);
      (*sptr)[i]=(char*)malloc((strlen(samp)+1)*sizeof(char));
      for(int j=0;samp[j]!='\0';j++){
	(*sptr)[i][j]=samp[j];}
    }
    printf("printing the words\n");
    for(int i=0;i<n;i++)
      printf("%s\n",(*sptr)[i]);
  }}
int lengthstat(char **sptr)
{
  int l12=0,l35=0,l5=0,l=0;
  for(int i=0;i<n;i++){
    for(int j=0;sptr[i][j]!='\0';j++)
      l++;
    if(l<3)
      l12++;
    else if(l<6)
      l35++;
    else if(l>5)
      l5++;
    l=0;
  }
  printf("length 1--2=%d, 3--5=%d, >5=%d",l12,l35,l5);
    
}
int letterstat(char **sptr)
{
  int v=0;
  char b[5]={'a','e','i','o','u'};
  for(int i=0;i<n;i++){
    for(int j=0;sptr[i][j]!='\0';j++){
      for(int k=0;k<5;k++){
	if(sptr[i][j]==b[k])
	  v++;}}}
  printf("no of vowels=%d",v);}

int search(char **sptr)
{
  int o=0,flag;
  char gh[20];
  printf("enter the word\n");
  scanf("%s",gh);
  for(int i=0;i<n;i++){
    flag=1;
    for(int j=0;sptr[i][j]!='\0';j++){
      if(sptr[i][j]!=gh[j]){
	flag=0;
	break;}}
	
    
  if(flag==1)
    o++;}
  printf("no of occurence=%d",o);}

int removeduplicate(char **sptr)
{
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      for(int k=0;sptr[i][k]!='\0';k++)
	for(int l=0;sptr[j][l]!='\0';l++)
      if(sptr[i][k]==sptr[j][l])
	sptr[j][l]=NULL;}}
  printf("printing the words\n");
    for(int i=0;i<n;i++)
      printf("%s\n",sptr[i]);}
int searchreplace(char **sptr)
{
  int o=0,flag;
  char gh[20];
  printf("enter the word\n");
  scanf("%s",gh);
  for(int i=0;i<n;i++){
    flag=1;
    for(int j=0;sptr[i][j]!='\0';j++){
      if(sptr[i][j]!=gh[j]){
	flag=0;
	break;}}
    if(flag==1){
      printf("enter the word to replace");
      scanf("%s",sptr[i]);}}
  for(int i=0;i<n;i++)
      printf("%s\n",sptr[i]);}
    
    
  
int main()
{
  char **spt;
  int df,r=1;
  while(r==1){
     printf("enter your choice");
     scanf("%d",&df);
    if(df==0){
      r=0;
      break;}
    else if(df==1){
      create(&spt);
     }
    else if(df==2){
      lengthstat(spt);
      }
    else if(df==3){
      letterstat(spt);
      }
    else if(df==4){
      search(spt);
      }
    else if(df==5){
      removeduplicate(spt);
      }
    else if(df==6){
      searchreplace(spt);
      }


  
      
    
  }}
    
    
  
