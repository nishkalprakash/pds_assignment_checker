//Ritwik Suresh
//23EE10056
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int create(char***);
void lengthstat(char**,int);
void letterstat(char**,int);
void search(char**,int);
void removeduplicate(char***,int*);
void searchreplace(char**);
void arrange(char**);

int main(){
  int c,i,n;
  char **sptr;
  while(1){
  printf("\nEnter a choice within the range(1-7):\n");
 
  scanf("%d",&c); //taking input of the case
  switch(c){                                       
  case 1:{
  n= create(&sptr);
  break;
  }
  case 2:{
    lengthstat(sptr,n);
    break;
  }
  case 3:{
    letterstat(sptr,n);
    break;
  }
  case 4:{
    search(sptr,n);
    break;
  }
  case 5:{
    removeduplicate(&sptr,&n);
    break;
  }
 
  default:
    return 0;
  
  }
  }
  return 0;
  
}
int create(char ***sptr){
  int n,i,j;
  char str[50];
  printf("Enter the number of words:\n");
  scanf("%d",&n);
  (*sptr) = (char**)malloc(n*sizeof(char*));
  for(i=0;i<n;i++)
    {
      printf("Enter the %dth word\n",i+1);
      scanf("%s",str);
      (*sptr)[i] = (char*)malloc((strlen(str)+1)*sizeof(char));
      strcpy((*sptr)[i],str);
    }
  printf("The string entered by the user:\n");
  for(i=0;i<n;i++)
    {
      printf("%s ",(*sptr)[i]);
    }
  return n ;
}
void lengthstat(char **sptr,int n){
  int len,i,count1=0,count2=0,count3=0;     //count1 = no. of 1-2 letter words, count2 = no. of 3-5 letter words and count3 = no. of >5 letter words
  for(i=0;i<n;i++)                          
    {
      len = strlen(sptr[i]);                //len is the length of current word
      if(len<3&&len>0)
	count1++;
      else if(len>=3&&len<6)
	count2++;
      else
	count3++;
    }
  printf("The no. of words of length 1-2:%d\n",count1);
   printf("The no. of words of length 3-5:%d\n",count2);
    printf("The no. of words of length >5:%d\n",count3);
    return ;
}
 void letterstat(char **sptr,int n){
   int vowel_count=0,i,j;
   for(i=0;i<n;i++)
     {
       for(j=0;sptr[i][j]!='\0';j++)
	 {
	   if(sptr[i][j]=='a'||sptr[i][j]=='e'||sptr[i][j]=='i'||sptr[i][j]=='o'||sptr[i][j]=='u')
	     vowel_count++;
	 }
     }
   printf("The number of vowels in the string: %d\n",vowel_count);
   return;
 }
 void search(char **sptr,int n){
   int i,j,flag;
   char str[50];
   printf("Enter a word:\n");
   scanf("%s",str);
   for(i=0;i<n;i++){
     flag=1;
     for(j=0;sptr[i][j]!='\0';j++){
       if(str[j]==sptr[i][j]){
	 continue;
       }
       else{
	 flag=0;
	 break;
       }
     }
     if(flag){
       printf("The entered word is the %dth word in the string\n",i+1);
     }
   }
   return ;
 }
void removeduplicate(char ***sptr,int *n){
  int i,j,k,flag,l;
  for(i=0;i<(*n);i++){
    for(k=i+1;k<(*n);k++){
      flag=1;
      for(j=0;(*sptr)[i][j]!='\0';j++){
	if((*sptr)[i][j]!=(*sptr)[k][j]){
	  flag=0;
	  break;
	}
      }
      if(flag){
	for(l=k;l<(*n);l++){
	  (*sptr)[l]=(*sptr)[l+1];
	}
	k--;(*n)--; //to re-adjust the indices
      }
    }
  }
  printf("The string after the update:\n");
  for(i=0;i<(*n);i++){
    printf("%s ",(*sptr)[i]);
  }
  printf("\n");
  return ;
}
	
	
	
  
     
