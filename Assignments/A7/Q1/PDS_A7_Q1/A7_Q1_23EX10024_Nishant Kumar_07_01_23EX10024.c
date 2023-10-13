//ROLL NO 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
void findMax(int data[20][20],int m,int n)
{
  int sum,max=0,index1,index2;
  int i,j,p,q;
  for(i=0;i<m-2;i++)
    {
      for(j=0;j<n-2;j++)
	{
	  sum = data[i][j] + data[i+1][j] + data[i+2][j] +data[i][j+1] + data[i+1][j+1] + data[i+2][j+1] + data[i][j+2] + data[i+1][j+2] + data[i+2][j+2];
	  if(sum>max)
	    {
	      max=sum;
	      index1=i;
	      index2=j;
	    }
	}
    }
  printf("Max submatrix is :\n");
  for(p=index1;p<index1+3;p++)
    {
      for(q=index2;q<index2+3;q++)
	{
	  printf("%d  ",data[p][q]);
	}
      printf("\n");
      printf("\n");
    }
  printf("Sum = %d",max);
}
void findMin(int data[20][20],int m,int n)
{
  int sum=0,min=100,index1,index2;
  int i,j,p,q;
  for(i=0;i<m-2;i++)
    {
      for(j=0;j<n-2;j++)
	{
	  sum = data[i][j] + data[i+1][j] + data[i+2][j] +data[i][j+1] + data[i+1][j+1] + data[i+2][j+1] + data[i][j+2] + data[i+1][j+2] + data[i+2][j+2];
	  if(sum<min)
	    {
	      min=sum;
	      index1=i;
	      index2=j;
	    }
	}
    }
  printf("\nMin submatrix is :\n");
  for(p=index1;p<index1+3;p++)
    {
      for(q=index2;q<index2+3;q++)
	{
	  printf("%d  ",data[p][q]);
	}
      printf("\n");
      printf("\n");
    }
  printf("Sum = %d",min);
}
void findMinMax(int data[20][20],int m,int n)
{
  int array[20];
  int max=0;
  int min=100;
  for(int i=0;i<m;i++)
    {
      max=0;
      for(int j=0;j<n;j++)
	{
	  if(data[i][j]>max)
	    {
	      max = data[i][j];
	    }
	}
      array[i]=max;
    }
  for(int i=0;i<m;i++)
    {
      if(array[i]<min)
	{
	  min = array[i];
	}
    }
  printf("\n");
  printf("\nMinmax=%d\n",min);
}
void findMaxMin(int data[20][20],int m,int n)
{
  int array[20];
  int max=0;
  int min=100;
  for(int i=0;i<m;i++)
    {
      min=100;
      for(int j=0;j<n;j++)
	{
	  if(data[i][j]<min)
	    {
	      min = data[i][j];
	    }
	}
      array[i]=min;
    }
  for(int i=0;i<m;i++)
    {
      if(array[i]>max)
	{
	  max = array[i];
	}
    }
  printf("\nMaxMin=%d\n",max);
}

int main()
{
  int m,n;
  printf("Enter the number of rows and columns in the range of 3 to 19:\n");
  scanf("%d %d",&m,&n);
  int data[20][20];
  for(int i=0;i<m;i++)
    {
      for (int j=0;j<n;j++)
	{
	  data[i][j]= rand()%11;
	}
    }
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  printf("%d  ", data[i][j]);
	}
      printf("\n");
      printf("\n");
    }
  findMax(data,m,n);
  findMin(data,m,n);
  findMinMax(data,m,n);
  findMaxMin(data,m,n);
  return 0;
}

      
  
  
