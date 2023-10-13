//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
#include<stdlib.h>

void findMax(int matrix[][20], int row, int col)
{
  if(row < 3 || col < 3 || row > 20  || col > 20) return; // Checking if m and n lie in the given range
  int i, j, sum = 0, maxsum = 0, startrow, startcol, iterationrow = 0, iterationcol = 0;
  for(i = 0; i <= row - 3; i++)
    {
      for(j = 0; j <= col - 3; j++)
      {

	//Finding the sum of submatrix from ith row and jth column
	iterationrow = 0, sum = 0;
	while(iterationrow < 3)
	  {
	    iterationcol = 0;
	    while(iterationcol < 3)
	      {
		sum = sum + matrix[i + iterationrow][j + iterationcol++];
	      }
	    iterationrow++;	    
	  }
	if(sum > maxsum) //Checking if sum of the submatrix is greater than any of the previous submatrices
	  {
	    maxsum = sum;
	    startrow = i; //Storing the row where the Max Submatrix is found
	    startcol = j; //Storing the column where the Max Submatrix is found
	  }
      }
    }
  printf("Max submatrix \n");
  //Printing the Max Submatrix
  for(i = startrow; i < startrow + 3; i++)
    {
      for(j = startcol; j < startcol + 3; j++)
	{
	  printf("%d\t",matrix[i][j]);
	}
      printf("\n");
    }
  printf("Sum = %d\n",maxsum);
}

void findMin(int matrix[][20], int row, int col)
{
  if(row < 3 || col < 3 || row > 20 || col > 20) return;// Checking if m and n lie in the given range
  int i, j, sum = 0, minsum = 100, startrow, startcol, iterationrow = 0, iterationcol = 0;
  for(i = 0; i <= row - 3; i++)
    {
      for(j = 0; j <= col - 3; j++)
      {

	//Finding the sum of submatrix from ith row and jth column
	iterationrow = 0, sum = 0;
	while(iterationrow < 3)
	  {
	    iterationcol = 0;
	    while(iterationcol < 3)
	      {
		sum = sum + matrix[i + iterationrow][j + iterationcol++];
	      }
	    iterationrow++;	    
	  }
	if(sum < minsum) //Checking if sum of the submatrix is lesser than any of the previous submatrices
	  {
	    minsum = sum;
	    startrow = i; //Storing the row where the Max Submatrix is found
	    startcol = j; //Storing the column where the Max Submatrix is found	    startrow = i;
	    startcol = j;
	  }
      }
    }
  //Printing the minimum submatrix
  printf("Min submatrix \n");
  for(i = startrow; i < startrow + 3; i++)
    {
      for(j = startcol; j < startcol + 3; j++)
	{
	  printf("%d\t",matrix[i][j]);
	}
      printf("\n");
    }
  printf("Sum = %d\n",minsum);
}

void findMinMax(int matrix[][20], int row, int col)
{
  if(row < 3 || col < 3 || row > 20 || col > 20) return; //Checking if m and n lies in the range
  int minVal[row], i, j, maxvalue = 0, rowdata, coldata = 0;
  
  for(i = 0; i < row; i++)
    {
      minVal[i] = 11; //Initializing the minVal array to 11
    }
    
  //Finding the minimum value from each row
  for(i = 0; i < row; i++)
    {
      for(j = 0; j < col; j++)
	{	  
	  if(matrix[i][j] < minVal[i])
	    {
	      minVal[i] = matrix[i][j];
	    }
	}
      printf("%d\t",minVal[i]);
    }
  printf("\n");

  //Finding the maximum value from the minVal array
  for(i = 0; i < row; i++)
    {
      if(minVal[i] > maxvalue)
	{
	  maxvalue = minVal[i];
	  rowdata = i+1; //The row of the maxmin value
	}
    }
  for(j = 0; j < col; j++)
    {
      if(maxvalue == matrix[rowdata-1][j])
	{
	  coldata = j+1; //The column of the maxmin value
	  break;
	}
    }
  printf("maxMin = %d, present in row %d, column %d\n",maxvalue, rowdata, coldata);
  
}

int main()
{
  int data[20][20], i, j, m, n;
  printf("Enter the number of rows and columns of matrix : ");
  scanf("%d %d",&m, &n);
  if(m > 2 && m < 20 && n > 2 && n < 20 )
    {
      //Assigning the random values into the array
      for(i = 0; i < m; i++)
	{
	  for(j = 0; j < n; j++)
	    {
	      data[i][j] = rand()%11;
	      printf("%d\t",data[i][j]);
	    }
	  printf("\n");
	}
    }
  printf("\n");
  findMax(data, m, n);
  findMin(data, m, n);
  findMinMax(data, m, n);
  return 0;
}
