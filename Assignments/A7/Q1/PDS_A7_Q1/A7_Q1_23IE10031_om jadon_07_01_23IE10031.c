// Roll - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>
#include <stdlib.h>

int matrix[20][20];

int findMax(int r, int c);
int findMin(int r, int c);
int findMinMax(int r, int c);
int findMaxMin(int r, int c);

int main()
{
  
  int m,n;
  printf("Type m and n:");
  scanf("%d %d", &m,&n);

  for (int i=0; i<m; i++)
  {
    for (int k=0; k<n; k++)
      {
	matrix[i][k] = rand()%11;
      }
  }
  
  for (int i=0; i<m; i++)
  {
    for (int k=0; k<n; k++)
      {
	printf("%d", matrix[i][k]);
	for (int l=0; l<((matrix[i][k])/10==0 ? 2 : 1); l++)
	  {
	    printf(" ");
	  }
      }
    printf("\n");
  }
  printf("\n");

  findMax(m,n);
  printf("\n");

  findMin(m,n);
  printf("\n");

  findMinMax(m,n);
  printf("\n");

  findMaxMin(m,n);
  printf("\n");
  
}

int findMax(int r, int c)
{
    int start[] = {0,0};
    int max_start[] = {0,0};

    int max_sum = 0;

    while (start[0]<(r-2) && start[1]<(c-2))
    {
      int sum = 0;
      for (int i=start[0]; i<start[0]+3; i++)
	{
	  for (int k=start[1]; k<start[1]+3; k++)
	    {
	      sum += matrix[i][k];
	    }
	}
      if (sum>max_sum)
	{
	  max_sum = sum;
	  max_start[0] = start[0];
	  max_start[1] = start[1];
	}
      start[1]++;
      if (start[1] == c-2)
	{
	  start[1] == 0;
	  start[0]++;
	}
    }

    printf("Max submatrix: \n");
    for (int i=max_start[0]; i<max_start[0]+3; i++)
      {
        for (int k=max_start[1]; k<max_start[1]+3; k++)
          {
            printf("%d", matrix[i][k]);
	    for (int l=0; l<((matrix[i][k])/10==0 ? 2 : 1); l++)
	      {
		printf(" ");
	      }
          }
	printf("\n");
      }
    printf("Sum = %d", max_sum);
    printf("\n");

}


int findMin(int r, int c)
{
    int start[] = {0,0};
    int min_start[] = {0,0};

    int min_sum = 1000000;

    while (start[0]<(r-2) && start[1]<(c-2))
    {
      int sum = 0;
      for (int i=start[0]; i<start[0]+3; i++)
	{
	  for (int k=start[1]; k<start[1]+3; k++)
	    {
	      sum += matrix[i][k];
	    }
	}
      if (sum<min_sum)
	{
	  min_sum = sum;
	  min_start[0] = start[0];
	  min_start[1] = start[1];
	}
      start[1]++;
      if (start[1] == c-2)
	{
	  start[1] == 0;
	  start[0]++;
	}
    }

    printf("Min submatrix: \n");
    for (int i=min_start[0]; i<min_start[0]+3; i++)
      {
        for (int k=min_start[1]; k<min_start[1]+3; k++)
          {
            printf("%d", matrix[i][k]);
	    for (int l=0; l<((matrix[i][k])/10==0 ? 2 : 1); l++)
	      {
		printf(" ");
	      }
          }
	printf("\n");
      }
    printf("Sum = %d", min_sum);
    printf("\n");
}

int findMinMax(int r, int c)
{
  int minMax = 25;
  int maxr[r];
  int r_c[] =  {0,0};
  
  for (int i=0; i<r; i++)
    {
      int rmax = 0;
      int current_c;
      for (int j = 0; j<c; j++)
	{
	  if (matrix[i][j] > rmax)
	    {
	      rmax = matrix[i][j];
	      current_c = j;
	    }
	}
      
      if (rmax<minMax)
	{
	  minMax = rmax;
	  r_c[0] = i;
	  r_c[1] = current_c;
	}
    }
  printf("minMax = %d, present in row %d, column %d",minMax,r_c[0]+1,r_c[1]+1);
}

int findMaxMin(int r, int c)
{
  int maxMin = -1;
  int minr[r];
  int r_c[] =  {0,0};
  
  for (int i=0; i<r; i++)
    {
      int rmin = 25;
      int current_c;
      for (int j = 0; j<c; j++)
	{
	  if (matrix[i][j] < rmin)
	    {
	      rmin = matrix[i][j];
	      current_c = j;
	    }
	}
      
      if (rmin>maxMin)
	{
	  maxMin = rmin;
	  r_c[0] = i;
	  r_c[1] = current_c;
	}
    }
  printf("maxMin = %d, present in row %d, column %d",maxMin,r_c[0]+1,r_c[1]+1);
}
