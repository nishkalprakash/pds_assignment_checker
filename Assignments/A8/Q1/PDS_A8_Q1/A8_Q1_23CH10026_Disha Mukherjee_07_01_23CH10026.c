//Roll no:23CH10026
//Name: Disha Mukherjee

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int create(char ***sptr)
{
  int n,i;
  char s[100];
  printf("\nenter no of words to be read (less than 100)");
  scanf("%d",&n);
  *sptr=(char **)malloc(n*sizeof(char *));
  for(i=0;i<n;i++)
    {
      printf("\nEnter a string");
      scanf("%s",s);
      int l=strlen(s);
      (*sptr)[i]=(char *)malloc((l+1)*sizeof(char));
      strcpy((*sptr)[i],s);
    }
  for(i=0;i<n;i++)
    printf("\n %s",(*sptr)[i]);
  return(n);
}

void lengthStat(char ***sptr,int n)
{
  int i,l,c1=0,c2=0,c3=0;
  for(i=0;i<n;i++)
    {
      l=strlen((*sptr)[i]);
      if(l>=1 && l<=2)
	c1++;
      if(l>=3 && l<=5)
	c2++;
      if(l>5)
	c3++;
    }
  printf("\nwords of length 1-2=%d",c1);
  printf("\nwords of length 3-5=%d",c2);
  printf("\nwords of length more than 5=%d",c3);    
 
}

void letterStat(char ***sptr,int n)
{
  int i,j=0,cn=0;
  char st[100];
  for(i=0;i<n;i++)
    {
      strcpy(st,(*sptr)[i]);
      j=0;
      while(st[j])
	{
	  char c=st[j];
	  if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
	    cn++;
	  
	  j++;
	}
    }
  printf("\nNo of vowels:%d",cn);
}
  
void search(char ***sptr,int n)
{
  int i;
  char st[100];
  printf("\nEnter word to be searched");
  scanf("%s",st);
  for(i=0;i<n;i++)
    {
      if(strcmp((*sptr)[i],st)==0)
	printf("\nfound at sequence number %d",(i+1));
    }
}

void removeDuplicate(char ***sptr,int n)
{
  int i,j;
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
	{
	  if(strcmp((*sptr)[i],(*sptr)[j])==0)
	    {
	      free((*sptr)[j]);
	    }
	}
    }
  for(i=0;i<n;i++)
    printf("\n%s",(*sptr)[i]);
}

      
void searchReplace(char ***sptr,int n)
{
  char st[100],st1[100];
  int i;
  printf("\nenter the word to be searched");
  scanf("%s",st);
  for(i=0;i<n;i++)
    {
      if(strcmp((*sptr)[i],st)==0)
	{
	  printf("\nEnter word to be replaced");
	  scanf("%s",st1);
	  int l=strlen(st1);
	  (*sptr)[i]=realloc((*sptr)[i],l);
	  strcpy((*sptr)[i],st1);
	  break;
	}
    }
  for(i=0;i<n;i++)
    printf("\n%s",(*sptr)[i]);
}



int main()
{
  char **sptr;
  int ch,m;
  while (1)
    {
      printf("enter your choice:1:create\n2:lengthStat()\n3:letterStat()\n4:search()\n5:removeDuplicate\n6:searchReplace\n7:arrange\npress 0 to exit");
      scanf("%d",&ch);
      if(ch==0)
	return 0;
      if(ch==1)
	m=create(&sptr);
      if(ch==2)
	lengthStat(&sptr,m);
      if(ch==3)
	letterStat(&sptr,m);
      if(ch==4)
	search(&sptr,m);
      if(ch==5)
	removeDuplicate(&sptr,m);
      if(ch==6)
	searchReplace(&sptr,m);
      else if(ch>7)
	printf("\nWrong choice!!");
    }
}
      
      
