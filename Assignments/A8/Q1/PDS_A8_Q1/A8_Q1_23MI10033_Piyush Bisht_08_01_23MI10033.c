//Roll No.:23MI10033
//Name:Piyush Bisht

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create(char **p);
void lengthStat(char **p);
void letterStat(char **p);
void search(char **p);
void removeduplicate(char **p);
void searchReplace(char **p);

int n;


int main(){
  char **sptr;
  int c;
  while (1){
    printf("\n1-->Create\n2-->lengthstat\n3-->letterstat\n4-->search\n5-->removeduplicate\n6--searchreplace\n");
    printf("\nEnter a number in range 1 to 7: ");
    scanf("%d",&c);
    while ((c<0)||(c>6)){
      printf("\nEnter again: ");
      scanf("%d",&c);
    }
    if (c==0){
       printf("\n\n**Program Terminated**");
       return 0;
    }
    else if (c==1)create(sptr);
    else if (c==2)lengthStat(sptr);
    else if (c==3)letterStat(sptr);
    else if (c==4)search(sptr);
    else if (c==5)removeduplicate(sptr);
    else if (c==6)searchReplace(sptr);
  }
  return 0;
}


void create(char **p){
  printf("\nEnter the number of words: ");
  scanf("%d",&n);
  while (n>99){
    printf("\nEnter again: ");
    scanf("%d",&n);
  }
  *p=(char *) malloc(n * sizeof(char*));
  printf("\nEnter your words:\n");
  for (int i=0;i<n;i++){
    char st[30];
    scanf("%s",st);
    p[i]=(char *)malloc(strlen(st)+1);
    for (int j=0;j<strlen(st)+1;j++){
      p[i][j]=st[j];
    }
  }
  printf("\nWords stored:\n");
  for (int i=0;i<n;i++){
    printf("%s ",p[i]);
  }
  return;
}
void lengthStat(char **p){
  int c1=0,c2=0,c3=0;
  for (int i=0;i<n;i++){
    if ((strlen(p[i])==1)||(strlen(p[i])==2))c1++;
    else if ((strlen(p[i])>2)&&(strlen(p[i])<6))c2++;
    else c3++;
  }
  printf("\n\nThe number of words of length 1--2: %d\nThe number of words of length 3--5: %d\nThe number of words of length greater than 5: %d",c1,c2,c3);
  return;
}
void letterStat(char **p){
  int ac=0,ec=0,ic=0,oc=0,uc=0;
  for (int i=0;i<n;i++){
    for (int j=0;j<n;j++){
      if (p[i][j]=='a')ac++;
      else if (p[i][j]=='e')ec++;
      else if (p[i][j]=='i')ic++;
      else if (p[i][j]=='o')oc++;
      else if (p[i][j]=='u')uc++;
    }
  }
  printf("\nVowel count:\na: %d\ne: %d\ni: %d\no: %d\nu: %d\n",ac,ec,ic,oc,uc);
  return;
}
void search(char **p){
  char st[30], t1[30];
  printf("\nEnter the word to be searched: ");
  scanf("%s",st);
  for (int i=0;i<n;i++){
    for (int j=0;j<strlen(p[i])+1;j++)t1[j]=p[i][j];
    if (strcmp(st, t1)==0){
      printf("\n%s\tFound at sequence no.:%d",t1,i+1);
    }
  }
  return;
}
void removeduplicate(char **p){
  for (int i=0;i<n;i++){
    char t1[30];
    for (int j=0;j<strlen(p[i])+1;j++)t1[j]=p[i][j];
    for (int k=i+1;k<n;k++){
      char t2[30];
      for (int l=0;l<strlen(p[k])+1;l++)t2[l]=p[k][l];
      if (strcmp(t1,t2)==0){
	printf("\nDuplicate found: %s at seq %d",p[i],k+1);
	for (int i=k;i<n-1;i++){
	  char *temp;
	  temp=p[i];
	  p[i]=p[i+1];
	  p[i+1]=temp;
	  n--;
	  i--;
	}
      }
    }
  }
  printf("\n\nUpdated list:\n");
  for (int i=0;i<n;i++){
    printf("%s ",p[i]);
  }
  return;
}
void searchReplace(char **p){
  char st[30], t1[30];
  printf("\nEnter the word to be replaced: ");
  scanf("%s",st);
  for (int i=0;i<n;i++){
    for (int j=0;j<strlen(p[i])+1;j++)t1[j]=p[i][j];
    if (strcmp(st, t1)==0){
      printf("\n%s\tFound at sequence no.:%d",t1,i+1);
      printf("\nEnter new word: ");
      char st1[30];
      scanf("%s",st1);
      p[i]=(char *)realloc(p[i],strlen(st1)+1);
      for (int j=0;j<strlen(st1)+1;j++){
	p[i][j]=st1[j];
	printf("\nNew list:\n");
	for (int i=0;i<n;i++){
	  printf("%s ",p[i]);
	  return;
	}
      }
    }
  }

  return;
}

  

      
	  
	
	
  

      
  
    
    
    
    
    
    
  
