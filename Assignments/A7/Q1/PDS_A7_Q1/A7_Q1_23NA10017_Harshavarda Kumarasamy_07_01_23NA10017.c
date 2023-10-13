//Name:<Harshavarda Kumarasamy>
//Roll No:<23NA10017>

#include <stdio.h>
#include <stdlib.h>

void findMax(int data[][20], int m, int n)
{int max=0,sum, i, j, x, y;
  for(i=0;i<(m-2);i++)
    {for(j=0;j<(n-2);j++)
	{sum= data[i][j]+data[i][j+1]+data[i][j+2]+data[i+1][j]+data[i+1][j+1]+data[i+1][j+2]+data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
	  if (sum>max)
	    { max=sum;
	      x=i;
	      y=j;
	    }
	}
    }
printf("The Max matrix:\n");
printf("%d,%d,%d\n%d,%d,%d\n%d,%d,%d\n", data[x][y], data[x][y+1], data[x][y+2], data[x+1][y], data[x+1][y+1], data[x+1][y+2], data[x+2][y], data[x+2][y+1], data[x+2][y+2]);
printf("sum=%d\n", sum);
return ;
}

void findMin(int data[][20], int m, int n)
{int min=999,sum, i, j, x, y;
  for(i=0;i<(m-2);i++)
    {for(j=0;j<(n-2);j++)
	{sum= data[i][j]+data[i][j+1]+data[i][j+2]+data[i+1][j]+data[i+1][j+1]+data[i+1][j+2]+data[i+2][j]+data[i+2][j+1]+data[i+2][j+2];
	  if (min>sum)
	    { min=sum;
	      x=i;
	      y=j;
	    }
	}
    }
  printf("The Min  matrix:\n");
printf("%d,%d,%d\n%d,%d,%d\n%d,%d,%d\n", data[x][y], data[x][y+1], data[x][y+2], data[x+1][y], data[x+1][y+1], data[x+1][y+2], data[x+2][y], data[x+2][y+1], data[x+2][y+2]);
printf("sum=%d\n", sum);
  return;
  }

void findMinMax(int data[][20], int m, int n)
{int max=0, min=999, i, j;
  for(i=0;i<m;i++)
    {max=0;
      for(j=0;j<n;j++)
	{ if(max<data[i][j])
	      {min=data[i][j];
		    }
	      if(max<min)
		{max=min;}
	}
    }
  printf("The required matrix\n");
  for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
	{ printf("%d ", data[i][j]);
	}
      printf("\n");
	}
      
      printf("min=%d\n", min);
  return;
}

void findMaxMin(int data[][20], int m, int n)
{int max=0, min=999, i, j;
  for(i=0;i<m;i++)
    {min=999;
      for(j=0;j<n;j++)
	{ if(min>data[i][j])
	      {min=data[i][j];
		    }
	      if(max<min)
		{max=min;}
	    }
    }
  printf("The required matrix\n");
  for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
	{ printf("%d ", data[i][j]);
	}
      printf("\n");
	}
      
      printf("max=%d\n", max);
  return;
}
 
int main()
{int data[20][20], i, j, a, m, n;
  printf("Give required no of rows:\n");
  scanf("%d", &m);
  printf("Give required no of columns:\n");
  scanf("%d", &n);
  printf("Sub-matrx:\n");
  for(i=0;i<m;i++)
    {for(j=0;j<n;j++)
	{a=rand()%9+1;
	  data[i][j]=a;
	  printf("%d ", data[i][j]);
	}
      printf("\n");
	}
  findMax(data,m,n);
  findMin(data, m,n);
  
  findMinMax(data, m,n);
  findMaxMin(data, m,n);
  return 0;
}
