// NAME - SWARUP JAYARAM DHANAVADE
// R.NO- 23MI10052

#include<stdio.h>
#include<stdlib.h>

void create(char*** sptr);   // Function 1 decleration.

int main()
{ char **sptr;
  int m;
  do{
    printf(" 1-create\n 2-lengthStat\n 3-letterStat\n 4-search\n 5-removeDuplicate\n 6-searchReplace\n 7-arrange\n");
   
    printf("Enter Function choice[1-7] :");
    scanf("%d",&m);
    if(m==0) break;
    if(m==1) create(&sptr); 
     
  }
  while(m>0);
  return 0;

}




void create(char*** sptr)
{                                                                 //function 1 defination
  int n;
  printf("Enter the Number of words to be display:");
  scanf("%d",&n);
  (*sptr)=(char**)malloc(n*sizeof(char*));
  printf(" write your n words: ");
  for(int i=0;i < n;i++){
    char word[20];
    printf("word no.%d :",i+1);
    scanf("%s",word);
    int c = strlen(word);
    (*sptr)[i]=(char*)malloc(c*sizeof(char));
    
    strcpy(sptr,word);
  }
  for (int i=0;i<n;i++){
    printf("%s",(*sptr)[i]);
  }
  

}
