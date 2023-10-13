//Name: Swaraj Dian
//Roll no.: 23EC30056
#include<stdio.h>//importing libraries
#include<stdlib.h>
void findMax(int a[][20],int r,int c)//Findmax() function
{
  int i,j,x,y,sum=0,maxsum=0,ri,ci;//ri, ci record the index of [0][0] element of submatric
  for(i=0;i<r-2;i++)
    {
      for(j=0;j<c-2;j++)
	{
	  sum=0;
	  for(x=i;x<i+3;x++)
	    for(y=j;y<j+3;y++)
	      sum=sum+a[x][y];
	  if (maxsum<=sum)//cgecking for max sum
	    {
	      maxsum=sum;
	      ri=i;
	      ci=j;
	    }
	}
    }
  printf("\n");
  printf("Max Submatrix:\n");
  for(i=ri;i<ri+3;i++)
    {
      for(j=ci;j<ci+3;j++)
	printf("%d\t",a[i][j]);
      printf("\n");
    }
  printf("Sum= %d\n\n",maxsum);
}
////////////////////////////////////////////////////////////
void findMin(int a[][20],int r,int c)//Find min()
{
  int i,j,x,y,sum=0,minsum=100,ri,ci;
  for(i=0;i<r-2;i++)
    {
      for(j=0;j<c-2;j++)
	{
	  sum=0;
	  for(x=i;x<i+3;x++)
	    for(y=j;y<j+3;y++)
	      sum=sum+a[x][y];
	  if (minsum>sum)//Checking condition
	    {
	      minsum=sum;
	      ri=i;
	      ci=j;
	    }
	}
    }
  printf("\n");
  printf("Min Submatrix:\n");//printing output
  for(i=ri;i<ri+3;i++)
    {
      for(j=ci;j<ci+3;j++)
	printf("%d\t",a[i][j]);
      printf("\n");
    }
  printf("Sum= %d\n\n",minsum);
}
////////////////////////////////////
void findMinMax(int a[][20],int r,int c)
{
  int maxrows[r],i,j,max=0,minmax=100;
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
	{
	  if(a[i][j]>max)
	    {
	      max=a[i][j];//finding max
	    }
	}
      maxrows[i]=max;
    }
  for(i=0;i<r;i++)
    {
      if(minmax>maxrows[i])//finding min of max rows
	minmax=maxrows[i];
    }
  printf("Max for the rows is [");
  for(i=0;i<r;i++)
    printf("%d, ",maxrows[i]);
  printf("]\n");
  printf("Minimum of these is: %d",minmax);
}
/////////////////////////////
void findMaxMin(int a[][20],int r,int c)
{
  int minrows[r],i,j,min=1000,maxmin=0;
  for(i=0;i<r;i++)
    {
      for(j=0;j<c;j++)
	{
	  if(a[i][j]<min)
	    {
	      min=a[i][j];//finding min
	    }
	}
      minrows[i]=min;
    }
  for(i=0;i<r;i++)
    {
      if(maxmin<minrows[i])//finding max of min rows
	maxmin=minrows[i];
    }
  printf("Min for the rows is [");
  for(i=0;i<r;i++)
    printf("%d, ",minrows[i]);
  printf("]\n");
  printf("Maximum of these is: %d",maxmin);
}
/////////////////////////// 
	

int main()//main function
{
  int data[20][20],i,j,m,n;
  printf("Enter number of rows(<20): ");
  scanf("%d",&m);
  printf("Enter number of columns(<20): ");
  scanf("%d",&n);
  if((m>2)&&(m<20)&&(n>2)&&(n<20))//checking validity of input
    {
      for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	  data[i][j]=rand()%11;
      for(i=0;i<m;i++)
	{
	  for(j=0;j<n;j++)
	    printf("%d\t", data[i][j]);
	  printf("\n");
	}//the 4 functions called
      findMax(data,m,n);
      findMin(data,m,n);
      findMinMax(data,m,n);
      findMaxMin(data,m,n);
    }
  else
    printf("Invalid Output\n");
}
  
