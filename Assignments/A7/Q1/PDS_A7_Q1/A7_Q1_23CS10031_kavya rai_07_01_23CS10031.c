#include<stdio.h>
#include<stdlib.h>
void findMax(int data[][20],int m,int n)
{ int sum,sum1=0,j,k,l,i,index1,index2,r,s;

      for(i=0   ;i<m-2;i++)
	{ 
	  for(j=0;j<n-2;j++)
	    {sum=0;
	  for(k=i;k<i+3;k++)
	    {for(l=j;l<j+3;l++)
		sum+=data[k][l];
	    }
	 if(sum1<sum)
           {sum1=sum;
            r=i;s=j;
           }
	    }
	}
  index1=r;
  index2=s;
  for(i=index1;i<index1+3;i++)
    {
      for(j=index2;j<index2+3;j++)
	{
	  printf("%d ",data[i][j]);
	}
      printf("\n");
    }
  printf("\n");
}
void findMin(int data[][20],int m,int n)
{ int sum,sum1=100,j,k,l,i,index1,index2,r,s;

      for(i=0;i<m-2;i++)
	{ 
	  for(j=0;j<n-2;j++)
	    {sum=0;
	  for(k=i;k<i+3;k++)
	    {for(l=j;l<j+3;l++)
		sum+=data[k][l];
	    }
	 if(sum1>sum)
           {sum1=sum;
            r=i;s=j;
           }
	    }
	}
  index1=r;
  index2=s;
  for(i=index1;i<index1+3;i++)
    {
      for(j=index2;j<index2+3;j++)
	{
	  printf("%d ",data[i][j]);
	}
      printf("\n");
    }
 printf("\n");

}
void findMinMax(int data[][20],int m,int n)
{
}
void findMaxMin(int data[][20],int m,int n)
{
}

int main()
{
  int data[20][20],m,n,i,j;
  printf("Enter the value of m and n : ");
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  data[i][j]=rand()%(10);
	}
    }
  for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("%d ",data[i][j]);
	}
      printf("\n");
    }
  findMax(data,m,n);
  findMin(data,m,n);
  findMinMax(data,m,n);
  findMaxMin(data,m,n);
  return 0;
}
