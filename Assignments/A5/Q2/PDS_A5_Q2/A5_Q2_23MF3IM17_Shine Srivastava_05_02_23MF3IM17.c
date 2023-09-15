//Roll no. = 23MF3IM17
//Name = Shine Srivastava

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int a[50],n;
   printf("Enter number of terms:\n");
   scanf("%d",&n);
   for(int i=0;i<n;i++)
    {
      a[i]=rand()%40 + 10;
      }
  for(int i=0;i<n;i++)
    {
      printf("a[%d] = %d\n",i,a[i]);
    }
  for(int i=0;i<n;i++)
    {
      for(int k=0;k<i;k++)
	{
	  for(int l=0;l<k;l++)
	    {
	      if((a[i]+a[k]+a[l])==60)
		{
		  printf("The triplets are : a[%d],a[%d],a[%d] i.e. %d + %d + %d = 60\n",i,k,l,a[i],a[k],a[l]);
		}
	    }
	}
    }
  return 0;
}

  
