//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>

int findMax(int a[20][20], int m, int n)
{ int sum=0, i, j, k, l, max=0, maxk, maxl;
  for(k=0;k<m-2;k++)
    {for(l=0;l<n-2;l++)
	{ sum=0;
	  for(i=k;i<=k+2;i++)
	    {for(j=l;j<=l+2;j++)
		{sum=sum+a[i][j];
		}
	    }
	   if(sum>max){max=sum;
		    maxk=k;
		    maxl=l;}
	    
	}
    }

  printf("Max submatrix is\n");
  for(i=maxk;i<=maxk+2;i++)
    {for(j=maxl;j<=maxl+2;j++)
	printf("%d ", a[i][j]);
      printf("\n");}
  return max;  
}

int findMin(int a[20][20], int m, int n)
{int sum=0, i, j, k, l, min=1000, mink, minl;
  for(k=0;k<m-2;k++)
    {for(l=0;l<n-2;l++)
	{ sum=0;
	  for(i=k;i<=k+2;i++)
	    {for(j=l;j<=l+2;j++)
		{sum=sum+a[i][j];
		}
	    }
	   if(sum<min){min=sum;
		    mink=k;
		    minl=l;}
	    
	}
    }

  printf("Min submatrix is\n");
  for(i=mink;i<=mink+2;i++)
    {for(j=minl;j<=minl+2;j++)
	printf("%d ", a[i][j]);
      printf("\n");}
  return min;  
}

int main()
{   int data[20][20];
  int m, n, i, j;
    scanf("%d %d", &m, &n);
    for(i=0;i<m;i++)
      {for(j=0;j<n;j++)
	  { data[i][j]=rand() % 11;
	      printf("%d ", data[i][j]);
	    
	  }
	printf("\n");
      }
    printf("Sum=%d\n", findMax(data,m,n));
    printf("Sum=%d\n", findMin(data,m,n));
}
