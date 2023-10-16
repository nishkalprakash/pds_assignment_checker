#include <stdio.h>
#include <stdlib.h>
int findmax(int a[20][20],int m,int n);
int findmin(int a[20][20],int m,int n);
int findminmax(int a[20][20],int m,int n);
int findmaxin(int a[20][20],int m,int n);
int main()
{
  int data[20][20],m,n;
  printf("Enter the values of m and n\n");
  printf("The values of m and n should lie between 2 and 20\n ");
  do{
  scanf("%d%d",&m,&n);
  if(((2<m)&&(m<20))&&((2<n)&&(n<20)))
    {
      break;
    }
  printf("Enter again!\n");
  }while(1);
for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
	data[i][j]=rand()%11;
      }
  }
for(int i=0;i<m;i++)
  {
    for(int j=0;j<n;j++)
      {
	printf("%d  ",data[i][j]);
      }
    printf("\n");
  }
 findmax(data,m,n);
 findmin(data,m,n);
 findminmax(data,m,n);
  findmaxmin(data,m,n);
 

  
  return 0;
}
int findmax(int a[20][20],int m,int n)
{
  int sum,d[2],max=-1;
  for(int k=0;k<n-2;k++)
    {
      for(int x=0;x<m-2;x++)
	{
	  sum=0;
  for(int i=x;i<x+3;i++)
    {
      for(int j=k;j<k+3;j++)
	{
	  sum=sum+a[i][j];
	}
    }
  printf("sum is %d\n",sum);
  if(sum>max)
    {
      max=sum;
      d[0]=k+1;
      d[1]=x+1;
    }
  
	}
    }
  printf("Maximuim sum is %d\n",max);
  printf("The matrix with maximum sum is \n");
  for(int i=d[0]-1;i<d[0]+2;i++)
    {
      for(int j=d[1]-1;j<d[1]+2;j++)
	{
          printf("%d  ",a[i][j]);
	}
      printf("\n");
    }
}
int findmin(int a[20][20],int m,int n)
{
    int sum,d[2],min=82;
  for(int k=0;k<n-2;k++)
    {
      for(int x=0;x<m-2;x++)
	{
	  sum=0;
  for(int i=x;i<x+3;i++)
    {
      for(int j=k;j<k+3;j++)
	{
	  sum=sum+a[i][j];
	}
    }
  printf("sum is %d\n",sum);
  if(sum<min)
    {
      min=sum;
      d[0]=k+1;
      d[1]=x+1;
    }
  
	}
    }
  printf("Minimum sum is %d\n",min);
  printf("The matrix with minimum sum is \n");
  for(int i=d[0]-1;i<d[0]+2;i++)
    {
      for(int j=d[1]-1;j<d[1]+2;j++)
	{
          printf("%d  ",a[i][j]);
	}
      printf("\n");
    }

}
int findminmax(int a[20][20],int m,int n)
{
  int max,maxi[m],min=99,d[2];
  for(int i=0;i<m;i++)
    { max=-1;
      for(int j=0;j<n;j++)
	{
	  if(max<a[i][j])
	    {
	      max=a[i][j];
	      d[1]=j;
	    }
	  
	   
	}
      d[0]=i;
     printf("The maximum element in %d row is %d\n",i+1,max);
     maxi[i]=max;
     
      
    }
  for(int i=0;i<m;i++)
    {
      if(maxi[i]<min)
	{
	  min=maxi[i];
	}
    }
  printf("minmax = %d\n",min);
  printf("present in row %d,coloumn %d\n",d[1],d[0]);
  
}
int findmaxmin(int a[20][20],int m,int n)
{
    int min,mini[m],max=-1,d[2];
  for(int i=0;i<m;i++)
    { min=11;
      for(int j=0;j<n;j++)
	{
	  if(min>a[i][j])
	    {
	      min=a[i][j];
	      d[1]=j;
	    }
	  
	   
	}
      d[0]=i;
      printf("The minimum element in %d row is %d\n",i+1,min);
     mini[i]=min;
     
      
    }
  for(int i=0;i<m;i++)
    {
      if(mini[i]>max)
	{
	  max=mini[i];
	}
    }
  printf("maxmin = %d\n",max);
  printf("present in row %d,coloumn %d",d[0],d[1]);
}

