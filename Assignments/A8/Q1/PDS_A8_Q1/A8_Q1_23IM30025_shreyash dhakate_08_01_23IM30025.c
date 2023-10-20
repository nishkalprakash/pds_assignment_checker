//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>

#include<string.h>
#include<stdlib.h>
//defining funtions
char *sptr[100];
void create(char ***sptr);
void lengthSta(char **sptr);
void letterStat();
void search();
void removeDuplicate();
void searchReplace();
void arrange();
//the main funtion
int a;
int main(){
  while(1==1){
    int n;
    printf("1-create \n");
    printf("2-lengthStat \n");
    printf("3-letterStat\n");
    printf("4-search \n");
    printf("5-removeDuplicate \n");
    printf("6-searchReplace \n");
    printf("7-arrange \n");
    printf("0-Exit \n");
    printf("Enter your choice: ");
    scanf("%d",&n);
    if(n==1) create(sptr);
    if(n==2) lengthSta(sptr);
    /*if(n==3) letterStat();
    if(n==4) search();
    if(n==5) removeDuplicate();
    if(n==6) searchReplace();
    if(n==7) arrange();
    */
    
    if(n==0) break;
    
  }
  free(sptr);
}
void create(char *sptr){
  
  char s[100];
  printf("How many words to enter: ");
  scanf("%d",&a);
  
  for(int i=0;i<a;i++){
    
    printf("Enter the word %d:",i+1);
    
    scanf("%s",s);
    //printf("%s \n",(*s)+i);
    char new[strlen(s)];//wors same as malloc
    strcpy(new,s);
    sptr[i]=(char **)malloc(strlen(s)*sizeof(char *));
    sptr[i]=new;
  
    }
    
  
  printf("The words are\n");
  for(int i=0;i<a;i++){
    printf("%s\n",sptr[i]);
  }
  
}
//this funtions are made for dyanamically alloted sptr please review this funtion independently as my craete funtion is not working properly
void lengthSta(char **sptr){
  int count=0,count1=0,count2=0,s;
  
  for(int i=0;i<a;i++){
    s=sizeof(*(sptr+i));
    printf("%s\n",*(sptr+i));
    if(s<3 && s>1) count++;
    if(s<6 && s>2) count1++;
    if(s>5) count2++;
    
  }
  printf("There are %d words of lenght 1--2 \n",count);
  printf("There are %d words of lenght 3--5 \n",count1);
  printf("There are %d words of lenght larger than 5 \n",count2);
  
}
void letterStat(char **sptr){
  int a=0,e=0,i=0,o=0,u=0;
  for(int i=0;i<a;i++){
    for(int j=0;j<strlen(*(sptr+i));j++){
	if(sptr[i][j]==a) a++;
	if(sptr[i][j]==e) e++;
	if(sptr[i][j]==i) i++;
	if(sptr[i][j]==o) o++;
	if(sptr[i][j]==u) u++;
}
    
  }
  printf("There are %d charactor of a\n",a);
  printf("There are %d charactor of e\n",e);
  printf("There are %d charactor of i\n",i);
  printf("There are %d charactor of o\n",o);
  printf("There are %d charactor of u\n",u);
  
}
//this funtion made for sptr wich is globally defined
void search(char sptr){
  for (int i;i<a;i++){
if(str[i]==k) printf("index is: %d\n",i);
}
  
}


