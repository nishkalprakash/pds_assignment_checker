// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>
#include <stdlib.h>

int findMax(int m, int n, int a[m][n])
{
  int sum, findMax = 0, imax = 0, jmax = 0;
  for (int i = 0; i < m - 2; i++)
    {
      for (int j = 0; j < n - 2; j++)
	{
	  sum = 0;
	  for (int k = i; k < i + 3; k++)
	    {
	      for (int l = j; l < j + 3; l++)
	        {
		  sum += a[k][l];
	        }
	    }
	  if (sum >= findMax)
	    {
	      findMax = sum;
	      imax = i;
	      jmax = j;
	    }
	}
    }
  printf("\nThe 3*3 matrix with sum of its elements maximum is: \n");
  for (int i = imax; i < imax + 3; i++)
    {
      for (int j = jmax; j < jmax + 3; j++)
        {
	  printf("%d  ", a[i][j]);
        }
      printf("\n");
    }
  printf("\n");
  
  return findMax;
}

int findMin(int m, int n, int a[m][n])
{
  int sum, findMin = 100 , imin = 0, jmin = 0;
  for (int i = 0; i < m - 2; i++)
    {
      for (int j = 0; j < n - 2; j++)
	{
	  sum = 0;
	  for (int k = i; k < i + 3; k++)
	    {
	      for (int l = j; l < j + 3; l++)
	        {
		  sum += a[k][l];
	        }
	    }
	  if (sum <= findMin)
	    {
	      findMin = sum;
	      imin = i;
	      jmin = j;
	    }
	}
    }
  printf("\nThe 3*3 matrix with sum of its elements minimum is: \n");
  for (int i = imin; i < imin + 3; i++)
    {
      for (int j = jmin; j < jmin + 3; j++)
        {
	  printf("%d  ", a[i][j]);
        }
      printf("\n");
    }
  printf("\n");
  
  return findMin;
}

int findMaxMin(int m, int n, int a[m][n])
{
  int findMaxMin = 0, imaxmin = 0, min = 100, jmaxmin = 0;
  printf("\nMinimum for the rows is: [");
  for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  min = 0;
	  if (a[i][j] < min)
	    {
	      jmaxmin = j;
	      min = a[i][j];
	    }
    }
      printf("%d, ", min);
      if (min >=  findMaxMin)
	    {
	      findMaxMin = min;
	      imaxmin = i;
            }
      else jmaxmin = 0;
    }
  printf("\b\b]. Maximum of these is %d present in row %d & column %d", findMaxMin, imaxmin, jmaxmin);
  printf("\n");
  
  return findMaxMin;
}

int findMinMax(int m, int n, int a[m][n])
{
  int sum, findMinMax = 0, iminmax = 0, max = 0, jminmax = 0;
  printf("\nMaximum for the rows is: [");
  for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  max = 0;
	  if (a[i][j] > max)
	    {
	      jminmax = j;
	      max = a[i][j];
	    }
	}
      printf("%d, ", max);
      if (max <= findMinMax)
	    {
	      findMinMax = max;
	      iminmax = i;
            }
      else jminmax = 0;
    }
  printf("\b\b]. Minimum of these is %d present in row %d & column %d", findMinMax, iminmax, jminmax);
  printf("\n");
  
  return findMinMax; 
}

int main()
{
  int m, n, arr[10][10];
  printf("\nEnter the no. of rows of the matrix: ");
  scanf("%d", &m);
  printf("Enter the no. of coulmns of the matrix: ");
  scanf("%d", &n);

  printf("\nThe %d*%d matrix is: \n", m, n);
  for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
        {
	  printf("%-2d  ", arr[i][j] = (rand() % 11));
        }
      printf("\n");
    }
  printf("\n");

  findMax(m, n, arr);
  findMin(m, n, arr);
  findMinMax(m, n, arr);
  findMaxMin(m, n, arr);

  return 0;
}
