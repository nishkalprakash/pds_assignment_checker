//roll no: 23EC10046
//name: mummidi sri sai karthik pranav
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int n;
char create(char **sptr){
  printf("no of words:");
  int b;
  char a[100];
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    printf("enter a word:");
    scanf("%s", a);
    
    b=strlen(a);
   
    sptr[i]=(char *)malloc(b * sizeof(char));
    for(int j=0;j<b;j++){
      sptr[i][j]=a[j];
      }
    printf("\n");}
  for(int i=0;i<n;i++){
    b=strlen(sptr[i]);
    for(int j=0;j<b;j++){
      printf("%c",sptr[i][j]);}
    printf("\n");}
  }
int lengthstat(char **sptr){
  int b;
  int count1=0,count2=0,count3=0;
  for(int i=0;i<n;i++){
    b=strlen(sptr[i]);
    if(1<=b&&b<=2) count1++;
    if(3<=b&&b<=5) count2++;
    if(5<b) count3++;}
  printf("no of words with 1-2 letters=%d\n",count1);
  printf("no of words with 3-5 letters=%d\n",count2);
  printf("no of words with >5 letters=%d\n",count3);}
int letterstat(char **sptr){
  int count=0,b;
  for(int i=0;i<n;i++){
    b=strlen(sptr[i]);
    for(int j=0;j<b;j++){
      if(sptr[i][j]=='a')count++;
      if(sptr[i][j]=='e')count++;
      if(sptr[i][j]=='i')count++;
      if(sptr[i][j]=='o')count++;
      if(sptr[i][j]=='u')count++;
    }}
  printf("total no of vowels=%d\n",count);}
int search(char **sptr){
  int rep=0,b;
  char a[100];
  scanf("%s", a);
  b=strlen(a);
  for(int i=0;i<n;i++){
    int count=0;
    for(int j=0;j<b;j++){
      if(sptr[i][j]==a[j]) count++;}
    if(count==b){
      rep++;
      printf("present from (%d,0) to (%d,%d)",i,i,b);}}
  printf("it occured %d times",rep);}
char arrange(char **sptr){
  int b;
  for(int i=0;i<n;i++){
    b=strlen(sptr[i]);
    for(int j=0;j<b;j++){
      printf("%c",sptr[i][j]);}
    printf("length=%d",b);
    printf("\n");}}
char searchreplace(char **sptr){
  char a[100],b[100];
  printf("enter a word to be searched\n");
  scanf("%s", a);
  int c,d,e,f;
  c=strlen(a);
  printf("enter a word to replace it\n");
  scanf("%s", b);
  d=strlen(b);
  for(int i=0;i<n;i++){
    int count=0;
    e=strlen(sptr[i]);
    for(int j=0;j<e;j++){
      if(sptr[i][j]==a[j]) count++;}
    if(count==e){
      printf("word found\n");
      sptr[i]=(char *)realloc(sptr[i],d * sizeof(char));
      for(int k=0;k<d;k++){
	sptr[i][k]=b[k];
      }
      break;}}
   for(int i=0;i<n;i++){
    f=strlen(sptr[i]);
    for(int j=0;j<f;j++){
      printf("%c",sptr[i][j]);}
    printf("\n");}}
  
	


int main(){
  char **sptr;
  int c;
  while(c){
    printf("enter a number from 1 to 7:");
    scanf("%d",&c);
    if(c==0) break;
    if(c==1) create(&sptr);
    if(c==2) lengthstat(&sptr);
    if(c==3) letterstat(&sptr);
    if(c==4) search(&sptr);
    // if(c==5) removeduplicate();
    if(c==6) searchreplace(&sptr);
    if(c==7) arrange(&sptr);
  }
  return 0;
}
