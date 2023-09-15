#include <stdio.h>
#include <stdlib.h>
int main()
{
  int r[20],a[20],m[20],i;
  for(i=0;i<20;i++)
    {
      r[i]=rand()%1001+1000;
    }
  for(i=0;i<20;i++)
    {
      a[i]=rand()%16+10;
    }
  for(i=0;i<20;i++)
    {
      m[i]=rand()%100;
    }
  for(i=0;i<20;i++)
    {
      for(int j=i+1 ;j<20;j++)
	{
	  if(a[i]==a[j])
	    {
	      printf("Roll no : %d  Age: %d  Marks:  %d\n",r[i],a[i],m[i]);
	      printf("Roll no : %d  Age: %d  Marks:  %d\n",r[j],a[j],m[j]);
	    }
	}
    }
  printf("\n\n\n");
    for(i=0;i<20;i++)
    {
      for(int j=i+1 ;j<20;j++)
	{
	  if(m[i]==m[j])
	    {
	      printf("Roll no : %d  Age: %d  Marks:  %d\n",r[i],a[i],m[i]);
	      printf("Roll no : %d  Age: %d  Marks:  %d\n",r[j],a[j],m[j]);
	    }
	}
    }
    printf("\n\n\n");
    for(int i=0; i<20;i++)
      {
        printf("Roll no : %d  Age: %d  Marks:  %d\n",r[i],a[i],m[i]);
        printf("Roll no : %d  Age: %d  Marks:  %d\n",r[j],a[j],m[j]);
		

      }
  return 0;
}
  
