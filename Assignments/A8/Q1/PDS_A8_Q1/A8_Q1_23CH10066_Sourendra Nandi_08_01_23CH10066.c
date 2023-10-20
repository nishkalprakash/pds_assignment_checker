#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int create(char*** sptr);
void lengthstat(char** sptr,int n);
void letterstat(char** sptr,int n);
void search(char** sptr,int n);
void removeDuplicate(char*** sptr,int n);
void searchReplace(char*** sptr,int n);
void arrange(char*** sptr , int n);
void display(char** sptr,int n);

//PART (A)

int main()
{
  char** sptr;
  int ch,sptr_len;
  while(1)
    {
      printf("Enter 1 for create()\n");
      printf("Enter 2 for lengthstat()\n");
      printf("Enter 3 for letterstat()\n");
      printf("Enter 4 for search()\n");
      printf("Enter 5 for removeDuplicate()\n");
      printf("Enter 6 for searchReplace()\n");
      printf("Enter 7 for arrange()\n");
      printf("Enter 8 for display()\n");
      printf("Enter Choice :");
      scanf("%d",&ch);
      if (ch==0) break;
      else if (ch==1) sptr_len=create(&sptr);
      else if(ch==2) lengthstat(sptr,sptr_len);
      else if(ch==3) letterstat(sptr,sptr_len);
      else if(ch==4) search(sptr,sptr_len);
      else if(ch==5) removeDuplicate(&sptr,sptr_len);
      else if(ch==6) searchReplace(&sptr,sptr_len);
      else if(ch==7) arrange(&sptr,sptr_len); 
      else if(ch==8) display(sptr,sptr_len);
    }
}
int create(char*** sptr)
{
  int n,i,j,len=0;
  char str[1000]; 
  printf("How many words to enter :");
  scanf("%d",&n);
  *sptr=(char **)malloc(n*sizeof(char));
  for(i=0;i<n;i++)
    {
      len=0;
      printf("Enter the String %d: ",i+1);
      scanf("%s",str);
      j=0;
      len=strlen(str);
      (*sptr)[i]=(char*)malloc((len+1)*sizeof(char));
      strcpy((*sptr)[i],str);
    }
  printf("\nDisplaying Words:\n");
  for(i=0;i<n;i++)
    {
      printf("Word %d:  %s:\n",i+1,(*sptr)[i]);
    }
  return n;
  
}

void display(char** sptr,int n)
{
  int i;
  for(i=0;i<n;i++)
    {
      printf("Word %s:\n",sptr[i]);
    }
}
  
//PART(B)

void lengthstat(char** sptr,int n)
{
  int count1=0,count2=0,count3=0,i,j,str_len;
  char str[100];
  for (i=0;i<n;i++)
    {
      j=0;
      
      str_len=strlen(sptr[i]);
      if (str_len>=1 && str_len<=2) count1++;
      else if(str_len>=3 && str_len<=5) count2++;
      else if(str_len>5) count3++;
    }
  printf("No. of words of length 1--2 letters : %d\n",count1);
  printf("No. of words of length 3--5 letters : %d\n",count2);
  printf("No. of words of length>5  : %d\n",count3);
}

void letterstat(char**sptr,int n)
{
  int i,j,str_len,vow_count=0;
  char str[100];
  for (i=0;i<n;i++)
    {
      j=0;
      str_len=strlen(sptr[i]);
      strcpy(str,sptr[i]);
      while(str[j])
	{
	  if (str[j]=='a'||str[j]=='e'||str[j]=='i'||str[j]=='o'||str[j]=='u')
	    {
	      vow_count++;         //counting vowels
	    }
	  j++;
	}
    }
  printf("No. of total vowels : %d\n",vow_count);
}

void search(char** sptr,int n)
{
  char str[100];
  int i,j,count=0,comp;
  printf("Enter word :");
  scanf("%s",str);
  for (i=0;i<n;i++)
    {
      comp=strcmp(str,sptr[i]);
      if (comp==0)
	{
	  count++;
	  printf("occurence found at Sequence number %d:\n",i);
	}
    }
  if (count==0) printf("No occurence Found\n");
  else printf("Total no. of occurences= %d",count);
}
void removeDuplicate(char*** sptr,int n)
{
  int i,j,comp;
  for (i=0;i<n;i++)
    {
      for (j=i+1;j<n;j++)
	{
	  comp=strcmp((*sptr)[i],(*sptr)[j]);
	  if (comp==0)
	    {
	      free((*sptr)[j]);
	    }
	}
    }
  printf("Displaying Updated List of Words:\n");
  for(i=0;i<n;i++)
    {
      printf("Word %d:  %s:\n",i+1,(*sptr)[i]);
    }
}
void searchReplace(char*** sptr,int n)
{
  char str[100],nstr[100];
  int i,j,count=0,comp,flag=0;
  printf("Enter word :");
  scanf("%s",str);
  for (i=0;i<n;i++)
    {
      comp=strcmp(str,(*sptr)[i]);
      if (comp==0)
	{
	  printf("Enter new word:");
	  scanf("%s",nstr);
	  int nlen=strlen(nstr);
	  free((*sptr)[i]);
	  (*sptr)[i]=(char*)malloc((nlen+1)*sizeof(char));
	  strcpy((*sptr)[i],nstr);
	  break;
	}
    }
  
   printf("Displaying Updated List of Words:\n");
   for(i=0;i<n;i++)
    {
      printf("Word %d:  %s:\n",i+1,(*sptr)[i]);
    }
}
void arrange(char*** sptr,int n)
{
  int i,j;
  printf("Original strings: \n");
  
  for(i=0;i<n;i++)
    {
      printf("Word %d:  %s:\n",i+1,(*sptr)[i]);
    }
   printf("Updated arranged list of strings: \n");
  
  for(i=0;i<n;i++)
    {
      printf("Word %d:  %s:\n",i+1,(*sptr)[i]);
    }
}
      
  
	  
