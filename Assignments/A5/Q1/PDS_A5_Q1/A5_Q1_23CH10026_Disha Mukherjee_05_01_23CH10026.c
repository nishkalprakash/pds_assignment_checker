//Roll no:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,ar[50],c=0,t=0;
  printf("enter size of array less than 50\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      ar[i]=rand()%90+10;
      printf("\n%d",ar[i]);
    }
  for(i=0;i<n-2;i+=2)
    {
      if(ar[i]>ar[i+2])
	{
	  t=ar[i];
	  ar[i]=ar[i+2];
	  ar[i+2]=t;
	  c++;
	}
    }
  printf("\nmodified array");
  for(i=0;i<n;i++)
    printf("\n%d",ar[i]);
  printf("\nNo of interchanges = %d",c);
  return 0;
}

      
  
