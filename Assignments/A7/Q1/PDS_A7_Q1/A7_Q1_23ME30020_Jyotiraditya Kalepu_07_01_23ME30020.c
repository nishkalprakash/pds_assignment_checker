//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>

void findMax(int arr[][20],int m,int n);
void findMin(int arr[][20],int m,int n);
void findMinMax(int arr[][20], int m, int n);
void findMaxMin(int arr[][20], int m, int n);

int main()         // Defining Main Function
{
  int data[20][20],m,n;
  printf("Enter the value of m and n : ");
  while(1)
    {
      scanf("%d %d",&m,&n);
      if(m<20 && m>2 && n<20 && n>2) break;
      else printf("Enter values between 2 and 20 : ");
    }
  
  for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
	{
	  data[i][j] = rand()%11;
	}
    }

  for(int i=0; i<m; i++)
    {
      for(int j=0; j<n; j++)
	{
	  printf("%d  ",data[i][j]);
	}
      printf("\n");
    }
  // Calling Functions 
  findMax(data,m,n);               
  findMin(data,m,n);
  findMinMax(data,m,n);
  findMaxMin(data,m,n);
  return 0;
}

void findMax(int arr[][20], int m, int n)   // Defining findMax function
{
  int maxSum=0, sum=0, maxRow, maxCol, row, col;
  for( int r=3,l1=0; r<=m; r++,l1++)
    {
      for( int c=3,l2=0; c<=n; c++,l2++)
	{
	  for( int i=l1; i<r; i++)
	    {
	      for( int j=l2; j<c; j++)
		{
		  sum += arr[i][j];
		  row = i;
		  col = j;
		}
	    }
	  if(sum > maxSum)
	    {
	      maxRow = row-2;
	      maxCol = col-2;
	      maxSum = sum;
	    }
      	      sum = 0;
	      row = 0;
	      col = 0;
	}
    }
  printf("Max Submatrix: \n");

  for(int i=maxRow; i<maxRow+3; i++)
    {
      for(int j=maxCol; j<maxCol+3; j++)
	{
	  printf("%d  ", arr[i][j]);
	}
      printf("\n");
    }
  
}

void findMin(int arr[][20], int m, int n)     // Defining findMin function
{
  int minSum=999999999, sum=0, minRow, minCol, row, col;
  for( int r=3,l1=0; r<=m; r++,l1++)
    {
      for( int c=3,l2=0; c<=n; c++,l2++)
	{
	  for( int i=l1; i<r; i++)
	    {
	      for( int j=l2; j<c; j++)
		{
		  sum += arr[i][j];
		  row = i;
		  col = j;
		}
	    }
	  if(sum < minSum)
	    {
	      minRow = row-2;
	      minCol = col-2;
	      minSum = sum;
	    }
      	      sum = 0;
	      row = 0;
	      col = 0;
	}
    }
  printf("Min Submatrix: \n");

  for(int i=minRow; i<minRow+3; i++)
    {
      for(int j=minCol; j<minCol+3; j++)
	{
	  printf("%d  ", arr[i][j]);
	}
      printf("\n");
    }
}

void findMaxMin(int arr[][20], int m, int n)    // Defining findMaxMin function
{
  int row[20], col[20], min[20], mini = 100, minmax = 0, maxrow, maxcol;
  for (int i = 0; i < m; i++)
    {
      for(int j = 0; j < n; j++)
	{
	  if( arr[i][j] < mini)
	    {
	      mini = arr[i][j];
	      min[i] = arr[i][j];
	      row[i] = i;
	      col[i] = j;
	    }
	}
      mini = 100;
    }

  for(int i = 0; i < m; i++)
    {
      if(min[i] > minmax)
	{
	  minmax = min[i];
	  maxrow = row[i];
	  maxcol = col[i];
	}
    }
  printf("maxMin = %d, present in row %d, column %d\n", minmax, maxrow, maxcol);
}

void findMinMax(int arr[][20], int m, int n)   // Defining findMinMax function
{
  int row[20], col[20], max[20], maxi = 0, maxmin = 100, minrow, mincol;
  for (int i = 0; i < m; i++)
    {
      for(int j = 0; j < n; j++)
	{
	  if( arr[i][j] > maxi)
	    {
	      maxi = arr[i][j];
	      max[i] = arr[i][j];
	      row[i] = i;
	      col[i] = j;
	    }
	}
      maxi = 0;
    }

  for(int i = 0; i < m; i++)
    {
      if(max[i] < maxmin)
	{
	  maxmin = max[i];
	  minrow = row[i];
	  mincol = col[i];
	}
    }
  printf("minMax = %d, present in row %d, column %d\n", maxmin, minrow, mincol);
}
	  
	     
  
  
  
