//Roll no. : 23MF3IM17
//Name : Shine Srivastava

#include <stdio.h>
#include<stdlib.h>
#include<string.h> 

char* sptr[100];
char word[100];
int n;
void create(char* sptr[])
{

  printf("Enter words to be added\n");
  scanf("%d",&n);

  while(n>100 || n<0)
    {
      printf("Enter words to be added\n");
      scanf("%d",&n);
    }

  

  for(int i=0;i<n;i++)
    {
      printf("Enter a string\n");
      scanf("%s",word);
      int l;
      l = strlen(word);
      sptr[i]=(char*)malloc((l+1)*sizeof(char));
      strcpy(sptr[i],word);
    }
  for(int i=0;i<n;i++)
    {
      printf("String %d = %s\n",i,sptr[i]);
    }

    return;
}

void lengthStat(char* sptr[])
{
  int len,count1=0,count3=0,count5=0;
  for(int i=0;i<n;i++)
    {
      len = strlen(sptr[i]);
      if(len>=1 && len<=2)
	{
	  count1++;
	}
     if(len>=3 && len<=5)
	{
	  count3++;
	}
      if(len>5)
	{
	  count5++;
	}
    }
      printf("number of words of length between 1 & 2 is %d\n",count1);
      printf("number of words of length between 3 & 5 is %d\n",count3);
      printf("number of words of length greater than 5 is %d\n",count5);

      return;
    
}

void letterStat(char* sptr[])
{
  char term[100];
  int count=0;
  for(int i=0;i<n;i++)
    {
      strcpy(term,sptr[i]);
      for(int j=0;term[j]!='\0';j++)
	{
	  if(term[j]=='a' ||term[j]=='e' ||term[j]=='i' ||term[j]=='o' ||term[j]=='u')
	    {
	      count++;
	    }
	}
    }
  printf("Total number of Vowels = %d\n",count);
  return;
}

void search(char* sptr[])
{
  char new_word[100];
  int p,flag=1;
  printf("Enter a string\n");
  scanf("%s",new_word);
  for(int i=0;i<n;i++)
    {
     
     p = strcmp(sptr[i],new_word);
     if(p==0)
       {
	 printf("The word is present in sptr in %d sequence\n",i);
	 flag=0;
       }
    }
   if(flag!=0)
       {
	 printf("No such word is present in sptr \n");
       }
  
  return;
}
		
void searchReplace(char* sptr[])
{
  char new_word[100],exword[100];
  int p,flag=1;
  printf("Enter a string\n");
  scanf("%s",new_word);
  for(int i=0;i<n;i++)
    {
    
     p = strcmp(sptr[i],new_word);
     if(p==0)
       {
	 printf("The word is present in sptr\n");
	 printf("Enter word to exchange\n");
	 scanf("%s",exword);
	 sptr[i]=exword;
	 flag=0;
	 break;
       }
    }
   if(flag!=0)
       {
	 printf("No such word is present in sptr \n");
       }

   printf("New sptr\n");

   for(int i=0;i<n;i++)
     {
       printf("sptr[%d] = %s\n",i,sptr[i]);
     }
   
  
  return;
}

void removeDuplicate(char* sptr[])
{
   char new_word[100];
   int p,flag=1,k[100],count=0;
   for(int i=0;i<n;i++)
     {
       for(int j=0;j<i;j++)
	 {
	   p = strcmp(sptr[i],sptr[i+j]);
	  if(p==0)
	    {
	      printf("The duplicate  words are present in sptr\n");
	      flag=0;
	      k[i]=i;
	      count++;
	    }
	}
    }
   if(flag!=0)
       {
	 printf("No such word is present in sptr \n");
       }
  
  return;
}

void arrange(char* sptr[])
{
  int l;
  for(int i=0;i<n;i++)
    {
      l = strlen(sptr[i]);
    }
  for(int i=0;i<n;i++)
    {
      printf("sptr[%d] = %s \t length = %d",i,sptr[i],l);
    }
  return;
}
  

  
    
int main()
{
  while(1){
    int m;
  printf("Enter Choice:\n");
  scanf("%d",&m);
  if(m==0)
    {
      break;
    }

  while(m<1 || m>7)
    {
      printf("Wrong input\n");
      printf("Enter Choice:\n");
      scanf("%d",&m);
    }
  switch(m){
  case 1:
     create(sptr);
    break;
  case 2:
    lengthStat(sptr);
    break;
  case 3:
    letterStat(sptr);
    break;
  case 4:
     search(sptr);
    break;
  case 5:
    removeDuplicate(sptr);
    break;
  case 6:
    searchReplace(sptr);
    break;
  case 7:
    arrange(sptr);
    break;
    
    
  default :
    return 0;
  }
  }
  
	
     
    
}
	  

    
