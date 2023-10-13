//roll no. :23GG10041
//name: Samriddhi Ahuja
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[50], i, j,k,  m, sum=0;
  printf("enter the number of entries for the array=\n");
  scanf("%d", &m);
  for(i=0;i<m;i++)
    {a[i]=rand()%41 + 10;
      printf("%d,",a[i]);
      
    }
  printf("\n");
  for (i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
      {for(k=0;k<m;k++)
	  { if ( a[i]+a[j]+a[k]==60&&i!=j!=k&&a[i]>a[j]&&a[j]>a[k])
	      printf("%d,%d,%d is the required triplet at location %d,%d,%d\n",a[i],a[j],a[k],i,j,k);
	    
	  }
      }
    }
  return 0;
	    
}
