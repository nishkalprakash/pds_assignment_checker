//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<string.h>

char str[10][20];
int n;
void create(char str[][20])
{
  printf("How many words?\n");
  scanf("%d",&n);
  for(int i=0;i<n;i++)
    {
      printf("Enter the %dth word\n",i+1);
      scanf("%s",str[i]);
    }
  for(int i=0;i<n;i++)
    {
      printf("The %dth word is %s\n",i+1,str[i]);
    }
}
void lenghtstat(char str[][20])
{
  int count=0,count1=0,count2=0;
  for(int i=0;i<n;i++)
    {
      if(strlen(str[i])<3)
	{
	  count++;
	}
      else if( strlen(str[i])>2 && strlen(str[i])<6)
	{
	  count1++;
	}
      else 
	{
	  count2++;
	}
    }
  printf("The number of words with 1-2 characters are %d\n",count);
  printf("The number of words with 3-5 characters are %d\n",count1);
  printf("The number of words with more than 5 characters are %d\n",count2);
}
void letterstat(char str[][20])
{
  int count=0;
  int x;
  for(int i=0;i<n;i++)
    {
      x=strlen(str[i]);
      for(int j=0;j<x;j++)
	{
	  if(str[i][j] == 'a' || str[i][j] == 'e' || str[i][j] == 'i' || str[i][j] == 'o' || str[i][j] == 'u')
	    {
	      count++;
	    }
	}
    }
  printf("The total occurence of vowels are %d\n",count);
}
void search(char str[][20])
{
  char s[20];
  printf("Enter a word to search for:\n");
  scanf("%s",s);
  for(int i=0;i<n;i++)
    {
      if(strcmp(str[i],s)==0)
	{
	  printf("The word is present at position %d\n",i+1);
	}
    }
}
void removeduplicate(char str[][20])
{
  int count=n;
  for(int i=0;i<n-1;i++)
    {
      for(int j=i+1;j<n;j++)
	{
	  if(strcmp(str[i],str[j])==0)
	    {
	      for(int k=j;k<n;k++)
		{
		  strcpy(str[k],str[k+1]);
		}
	      count --;
	    }
	}
    }
  printf("The updated list is:\n");
  for(int p=0;p<count;p++)
    {
      printf("%s\n",str[p]);
    }
}
int main()
{
  int n=1;
  while(n!=0)
    {
      printf("The menu options are:\n Create:1\n lengthstat:2\n letterstat:3\n search:4\n removeduplicate:5\n searchduplicate:6\n arrange:7\n");
      printf("Enter an integer number in the range 1 to 7:\n");
      scanf("%d",&n);
      if(n==1)
	{
	  create(str);
	}
      else if(n==2)
	{
	  lenghtstat(str);
	}
       else if(n==3)
	 {
	 letterstat(str);
	 }
     
         else if(n==4)
	 {
	 search(str);
	 }
       else if(n==5){
	 removeduplicate(str);
	 }
     
    }
}
