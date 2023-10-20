#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int j;
void create(char ***a)
{
  int n;
  
  printf("how many words to enter \n");
  scanf("%d",&n);
  j=n;
 *a=(char**)malloc(n*sizeof(char*));
  for(int i=0;i<n;i++){
    char word[20];
    scanf("%s",word);
    (*a)[i]=(char*)malloc(strlen(word)*sizeof(char));
    strcpy((*a)[i],word);
}
  for(int i=0;i<n;i++){
    printf("%s",(*a)[i]);
    printf("\n");
  }
}

void lengthstat(char***a){
  for(int i=0;i<j;i++){
    if((strlen((*a)[i])<=2)&&(strlen((*a)[i])>=1)){
      printf("strlength is 1--2 \n");
	printf("%s \n",(*a)[i]);
    }
    else if((strlen((*a)[i])<=5)&&(strlen((*a)[i])>=3)){
      printf("strlength is 3--5 \n");
      printf("%s \n",(*a)[i]);
    }
    else {
      printf("strlength is >5");
      printf("%s \n",(*a)[i]);
    }
  }

}

void letterstat(char***a)
{
  int count =0;
  for(int i=0;i<j;i++){
    for(int k=0;k<strlen((*a)[i]);k++){
      if(((((*a)[i])[k])=='a')||((((*a)[i])[k])=='e')||((((*a)[i])[k])=='i')||((((*a)[i])[k])=='o')||((((*a)[i])[k])=='u'))count++;
      }
  }
  printf("no. of vowels is %d \n",count);
}

void search(char***a){
  char word[20];
  int count=0;
  scanf("%s",word);
  for(int i=0;i<j;i++){
    count =0;
    for(int k=0;k<strlen((*a)[i]);k++){
      if((((*a)[i])[k])==word[k])count++;
    }
    if(count==strlen((*a)[i]))printf("the letter found at %d and letter is  %s \n",i,(*a)[i]);
  }
}

void removeduplicate(char***a){
  

}

void searchreplace(char***a){
  char word[20];
  char word2[20];
  int count=0;
  scanf("%s",word);
  for(int i=0;i<j;i++){
    count =0;
    for(int k=0;k<strlen((*a)[i]);k++){
      if((((*a)[i])[k])==word[k])count++;
    }
    if(count==strlen((*a)[i])){
      printf("the letter found at %d and letter is  %s \n",i,(*a)[i]);
      scanf("%s",word2);
      free(((*a)[i]));
      (*a)[i]=(char*)malloc(strlen(word)*sizeof(char));
      for(int x=0;x<strlen(word2);x++){
        ((*a)[i])[x]==word2[x];
      }
    }
    printf("%s \n",(*a)[i]);
  }
}

void arrange()
{

}

int main()
{
  int a;
  char **sptr;
  while(1){
    printf("1-create()\n2-lengthstat()\n3-letterstat()\n4-search()\n5-removeduplicate()\n6-seachreplace()\n7-arrange()\n");
    scanf("%d",&a);
    if(a==1)create(&sptr);
    else if(a==2)lengthstat(&sptr);
    else if(a==3)letterstat(&sptr);
    else if(a==4)search(&sptr);
    else if(a==5)removeduplicate(&sptr);
    else if(a==6)searchreplace(&sptr);
    else if(a==7)arrange();
    else if(a==0)break;
    else printf("number not existant \n");
  }
  return 0;
}
