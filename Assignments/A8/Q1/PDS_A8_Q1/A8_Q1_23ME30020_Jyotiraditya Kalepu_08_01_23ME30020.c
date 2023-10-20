//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char**sptr;

int create();
void lenghtStat();
void letterStat();
void search();
void removeDup();

int main()
{
  char** sptr;
  int choice;
  while(1)
    {
     
      printf("Enter\n1 -> create\n2 -> lengthStat\n3 -> letterStat\n4 -> search\n5 -> removeDuplicates\n6 -> searchReplace\n7 -> arrange\n0 -> exit\n");
      scanf("%d",&choice);
      switch(choice)
	{
	case 1:{int n = create();break;}
       	case 2:{lenghtStat();break;}
	case 3:{letterStat();break;}
	case 4:{search(sptr);break;}
	case 5:{removeDup(sptr);break;}
	  /*case 6:{searchReplace(sptr);break;}
	case 7:{arrange(sptr);break;}*/
	case 0:{printf("Program endded\n"); break;}
	default:printf("Enter valid input\n");
	}

      if(choice == 0) break;
    }
  return 0;
}

int create()
{
  char temp[100];int n;
  sptr = (char**)malloc(100*sizeof(char*));
  printf("Enter number of strings : ");
  scanf("%d",&n);
  for(int i = 0; i<n; i++)
    {
      printf("Enter a string : ");
      scanf("%s", temp);
      int len = strlen(temp);
      sptr[i] = (char*)malloc((len+1)*sizeof(char));
      strcpy(sptr[i], temp);
    }
  return n;
}

void lenghtStat()
{
  int n = create();
  int a=0,b=0,c=0;
  for(int i=0; i<n; i++)
    {
      int len = strlen(sptr[i]);
      if( len>=1 && len<=2)a++;
      if( len>=3 && len<=5)b++;
      if( len>5)c++;
    }
  printf("Number of words between\n1-2 letters : %d\n3-5 letters : %d\nlarger than 5 letters : %d\n",a,b,c);
}

void letterStat()
{
  int n = create();
  int vowel = 0;
  for(int i=0; i<n; i++)
    {
      int len = strlen(sptr[i]);
      for(int j=0; j<len+1; j++)
	{
	  char c = sptr[i][j];
	  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') vowel++;
	}
    }
  printf("Enter the total number of vowels : %d\n", vowel);
}

void search()
{
  int n = create();
  int flag = 0, cnt = 0;
  char word[100];
  printf("Enter the search word : ");
  scanf("%s",word);
  for(int i=0; i<n; i++)
    {
      if(strcmp(sptr[i],word))
	{
	  printf("Word found\nSepuence Number : %p\n",sptr[i]);
	  cnt++;
	  flag = 1;
	}
    }
  if(flag == 1)printf("Total number of appearences : %d\n",cnt);
  else printf("Word not found\n");
}

void removeDup()
{
  int n = create();
  int j = 0;
  char**temp;
  temp = (char**)malloc(n*sizeof(char*));
  for(int i=0; i<n; i++)
    {
      for(int k=i+1; k<n; k++)
	{
	  if(strcmp( sptr[i],sptr[k])==0)
	    {
	      int len = strlen(sptr[i]);
	      temp[j] = (char*)malloc((len+1)*sizeof(char));
	      strcpy(temp[j], sptr[i]);
	      j++;
	    }   
	}
    }
  for(int i =0; i<=j; i++)
    {
      printf("%s\n",temp[i]);
    }
}
	 
   
 
	  
  
     
      
      
  
  
  
