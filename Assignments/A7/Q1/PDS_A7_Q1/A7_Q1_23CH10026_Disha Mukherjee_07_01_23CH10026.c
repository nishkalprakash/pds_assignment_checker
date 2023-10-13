//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

void findMax(int data[][20],int m,int n)
{
  int i,j,k,l,sum=0,max=0,mi=0,ml=0;
  for(i=0;i<=(m-3);i++)
    {
      l=0;
      for(l=0;l<=(n-3);l++)
	{
	  for(k=i;k<i+3;k++)  //extracting each 3 by 3 matrix
	    {
	      for(j=l;j<l+3;j++)
		{
		  sum=sum+data[k][j];
		}
	    }
	  if(sum>max)
	    {
	      max=sum;
	      mi=i;
	      ml=l;
	    }
	  sum=0;
	}
    }
  for(i=mi;i<mi+3;i++)   //displaying matrix
    {
      for(j=ml;j<ml+3;j++)
	printf("%d ",data[i][j]);
      printf("\n");
    }
}



void findMin(int data[][20],int m,int n)
{
  int i,j,k,l,sum=0,sum1=0,min,mi=0,ml=0;
  for(i=0;i<3;i++)     //taking reference of first 3 by 3 matrix
    {
      for(j=0;j<3;j++)
	sum1=sum1+data[i][j];
    }
  min=sum1;
  for(i=0;i<=(m-3);i++)
    {
      l=0;
      for(l=0;l<=(n-3);l++)
	{
	  for(k=i;k<i+3;k++)      //extracting every 3 by 3 matrix
	    {
	      for(j=l;j<l+3;j++)
		{
		  sum=sum+data[k][j];
		}
	    }
	  if(sum<min)
	    {
	      min=sum;
	      mi=i;
	      ml=l;
	    }
	  sum=0;
	}
    }
  for(i=mi;i<mi+3;i++)   //displaying matrix
    {
      for(j=ml;j<ml+3;j++)
	printf("%d ",data[i][j]);
      printf("\n");
    }
}
      

void findMinMax(int data[][20],int m,int n)
{
  int i,j,k,mrow[m],max=0,min1=0,ind=0;
  for(j=0;j<m;j++)   //maximum of each row
    {
      for(k=0;k<n;k++)
	{
	  if(data[j][k]>max)
	    max=data[j][k];
	}
      mrow[j]=max;
      max=0;
    }
  min1=mrow[0];     //min of the array
  for(i=0;i<m;i++)
    if(mrow[i]<min1)
      {
	ind=i;
	min1=mrow[i];
      }
  for(i=0;i<n;i++)   //finding the position of result
    if(data[ind][i]==min1)
      printf("\nminMax=%d, present in row %d, column %d",data[ind][i],ind,i);
}


void findMaxMin(int data[][20],int m,int n)
{
  int i,j,k,mrow[m],min,max1=0,ind=0;
  for(j=0;j<m;j++)
    {
      min=data[j][0];  //taking reference of 1st element
      for(k=0;k<n;k++)
	{
	  if(data[j][k]<min)
	    min=data[j][k];
	}
      mrow[j]=min;
    }
  
  for(i=0;i<m;i++)   //finding max in array
    if(mrow[i]>max1)
      {
	ind=i;
	max1=mrow[i];
      }
  for(i=0;i<n;i++)   //finding the position of result
    if(data[ind][i]==max1)
      printf("\nmaxMin=%d, present in row %d, column %d",data[ind][i],ind,i);
}

	    


int main()
{
  int data[20][20],m,n,i,j;
  printf("enter dimensions m and n\n");
  scanf("%d %d",&m,&n);
  if((m<2 || m>20)||(n<2||n>20))
    {
      printf("\nWrong input!");
      return 0;
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  data[i][j]=rand()%10;
	  printf("%d,",data[i][j]);
	}
      printf("\n");
    }
  findMax(data,m,n);
  findMin(data,m,n);
  findMinMax(data,m,n);
  findMaxMin(data,m,n);
  return 0;
}
