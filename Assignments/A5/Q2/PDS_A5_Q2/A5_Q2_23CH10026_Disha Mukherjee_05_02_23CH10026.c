//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,n,ar[50],j,k;
  printf("Enter size of array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      ar[i]=rand()*40+10;
      printf("\n%d,",ar[i]);
    }
  for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
	{
	  for(k=j+1;k<n;k++)
	    {
	      if(ar[i]+ar[j]+ar[k]==60)
		{
		  printf("\n%d,%d,%d",i,j,k);
		  printf("\n%d,%d,%d",ar[i],ar[j],ar[k]);
		}
	    }
	}
    }
  return 0;
}
   
  
  
  
