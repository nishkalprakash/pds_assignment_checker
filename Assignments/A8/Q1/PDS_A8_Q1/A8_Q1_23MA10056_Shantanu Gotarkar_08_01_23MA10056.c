//Roll No.: 23MA10056
//Name: Shantanu

#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void create(char*sptr[100],int n)

{
  int i,k;
  scanf("%d",&n);

  while(n<0 && n>100)
    printf("The number of words should be less than 100");
  
  char temp[100];
 

  for(i=0;i<n;i++)

    {    scanf("%s",temp);
         k= strlen(temp);
      sptr[i]=(char*)malloc(k*sizeof(char));
      strcpy(sptr[i],temp);
    }


for(i=0;i<n;i++)
  {
    printf("%s\n",sptr[i]);
  }

}

void lengthStat(char*sptr[100],int n)
{
  int i,k,l;
  
 
  
  for(i=0;i<n;i++)
    {  l=strlen(sptr[i]);
         
    if(l >=1 && l<=2)
      {
	printf("The number having length between 1 and 2 is" );
	printf("%s\n",sptr[i]);
      }
  
  if(l>=3 && l <=5)
      {
	printf("The number having length between 3 and 5 is" );
	printf("%s\n",sptr[i]);
      }
  

     if(l>=5)
       {
	 printf("The number having length greater than 5 is" );
          	printf("%s\n",sptr[i]);
       }
    }
}

void letterstat(char*sptr[100],int n)
{
  int i,j,k,count;
  char vowel[6]="aeiou";
  int m;
  
  for(i=0;i<n;i++)
    {  
	m=strlen(sptr[i]);
      for(j=0;j<m;j++)
	{
	  for(k=0;k<6;k++)
	    {
	      if(sptr[i][j]==vowel[k])
	      count++;
	    }
	}
	    }

      printf("The number of occurences of the vowel are %d\n",count);

    }


int main()
{
  int n,j;
  char*sptr[100];
  create(sptr,n);
  while(1)

    
    {   printf("The list of function availanle are:
          1. create()
          2.lengthStat()
          3.letterStat()"
	       );



      scanf("%d",&j);

      if(j==0)
	break;

      if(j==1)
	{	create(sptr,n);
	  break;}
      if(j==2)
	{	lengthStat(sptr,n);
	  break;}
      if(j==3)
	{	letterStat(sptr,n);
      break;
	}

  return 0;
}
