#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int create(char **sptr)
{return 0;}

void lengthStat(char **sptr)
{}

void letterStat(char **sptr)
{}

void Search(char **sptr)
{}

void removeDuplicate(char **sptr)
{}

void searchReplace(char **sptr)
{}

void arrange(char **sptr)
{}

int main ()
{
  char **sptr;
  printf(" Menu:\n 1:Create\n 2:lengthStat\n 3:letterStat\n 4:Search\n 5:removeDuplicate\n 6:searchReplace\n 7:arrange\n");
  printf("Enter a number in the range [1,7]\n");
  for(;;)
    {
      int n;
      scanf("%d",&n);
      
      if(n==1){create(&sptr);}
      else if(n==2){lengthStat(sptr);}
      else if(n==3){letterStat(sptr);}
      else if(n==4){Search(sptr);}
      else if(n==5){removeDuplicate(sptr);}
      else if(n==6){searchReplace(sptr);}
      else if(n==7){arrange(sptr);}
      else (n==0);{break;}
    }
  return 0;
}

  int create(char **sptr);
  {
    int n ,i;
    printf("Number of words to enter:\n");
    scanf ("%d",&n);
    for (i=0;i<n;i++)
      {int size;
	char str1[100];
	scanf("%s",&str1);
	size=strlen(str1);
	(* sptr)[i]=(char*)malloc(size*sizeof(char));
	strcpy(sptr[i],str1);
	for(int i=0;i<n;i++)
	  {
	    printf("%s\n", (*sptr)[i]);
	  }
      }
    return 0;
  }

  void lengthStat(char **sptr,int count)
  {
    for (int i=0;i<count;i++)
      {
	int x,size1,size2,size3;
	x=strlen(sptr[i]);
	printf("%d\t",x);
	if (s==1 || s==2)
        {size1 ++ ;}
	else if ( s>=3 && s<=5)
        {size2 ++ ;}
	else (s>5)
        {size3 ++ ;}
      }
    printf (" Words with letter 1-2:%d\n Words with letter 3-5:%d\n Words with letters greater than 5:%d\n",size1,size2,size3);
  }

void letterStat(char **sptr)
{
  int a=0,e=0,i=0,o=0,u=0 ;
  for (int x=0;x<count:x++)
    {for (int j=0;sprt[x][j]"\0";j++)
      {
	if ( sprt[x][j])==a {a++ ;}
	else  if (sprt[x][j])==e {e++ ;}  
	else  if (sprt[x][j])==i {i++ ;}
	else if (sprt[x][j])==o {o++ ;} 
	else (sprt[x][j])==u {u++ ;}
      }	 
    }
      printf(" Number of a=%d\n Number of e=%d\n Number of i=%d\n Number of o=%d\n Number of u=%d\n",a,e,i,o,u);
      
    }
