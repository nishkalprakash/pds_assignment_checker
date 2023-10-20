//Shravani Khot
//Roll no - 23ME30058

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char p[100];
char *sptr[100];
int j;
int n ;
 
void create() {
  printf("Enter the no. of words \n");
  
  scanf("%d",&n);

  for (int i=0; i<n; i++){

    scanf("%s",p);
    sptr[i]=(char*)malloc((strlen(p)+1)*sizeof(char));

    for(j=0;p[j]!='\0';j++){
      sptr[i][j]=p[j];
    }
    sptr[i][j]='\0';
  }
  for (int i=0; i<n; i++){
    printf("The word %d is %s \n",i+1,sptr[i]);
  }
  
   
} ;

void length() {
  int g[100];
  for (int i=0; i<n; i++){
    
    g[i]=strlen(sptr[i]);
    
    if ((g[i]==1)||(g[i]==2)||(g[i]==3)||(g[i]==3)||(g[i]==4)||(g[i]==5)||(g[i]>5))
      {printf("%s\n",sptr[i]);}
	       }
} 

  void letter_stat() {
    char  B[5] ={'a', 'e', 'i', 'o', 'u’};
    int i, j, len, C[5]= {0,0,0,0,0};

  for (len = 0; sptr[len] != '\0'; len++)
   printf ("Length = %d\n", len);
  for (i=0; i<len; i++){
  for (j=0; j<5; j++) {
  if(sptr[i] == B[j]) C[j]++;
  }
  }
for (j=0; j<5; j++)
printf ("Number of %c = %d \n", B[j], C[j]);

  } 

void search() {} ;

void remove_duplicate() {} ;

void search_replicate() {} ;

void arrange() {} ;

int main(){
  int a;
  
  while (1) {
    
  printf("Enter a choice from 1-7 \n 1-create \n 2-length stat \n 3-letter stat \n 4-search \n 5-remove duplicate \n 6-search replicate \n 7-arrange \n ");
  scanf("%d",&a);

  switch (a){
  case 1 : create();
    break ;
  case 2 : length();
    break ;
  case 3 : letter_stat();
    break ;
  case 4 : search();
    break ;
  case 5 : remove_duplicate();
    break ;
  case 6 : search_replicate();
    break ;
  case 7 : arrange();
    break ;
  }
  
	}

  return 0 ;
}
