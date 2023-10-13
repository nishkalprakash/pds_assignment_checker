//Name : Shine Srivastava
//Roll no. : 23MF3IM17
#include<stdio.h>
#include<stdlib.h>
int l,v,o,p;
void findminmax(int a[][20],int m,int n)
{
  int max[100];
  for(int i=0;i<100;i++)
    {
      max[i]=0;
    }
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(a[i][j]>max[i])
	    {
	      max[i]=a[i][j];
	    }
	}
    }
  printf("Max for rows is :\n");
  for(int i=0;i<m;i++)
    {
      printf("%d , ",max[i]);
    }

  int min=max[0];

  for(int i=0;i<m;i++)
    {
      if(max[i]<min)
	{
	  min=max[i];
	}
    }

  printf("minmax = %d\n",min);

  return;
}


void findmaxmin(int a[][20],int m,int n)
{
  int min[100];
  for(int i=0;i<100;i++)
    {
      min[i]=11;
    }
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  if(a[i][j]<min[i])
	    {
	      min[i]=a[i][j];
	    }
	}
    }
  printf("Min for rows is :\n");
  for(int i=0;i<m;i++)
    {
      printf("%d , ",min[i]);
    }

  int max=min[0];

  for(int i=0;i<m;i++)
    {
      if(min[i]>max)
	{
	  max=min[i];
	}
    }

  printf("maxmin = %d\n",max);

  return;
}


void findmax(int a[][20],int m,int n)
{
  int sum=0,k=0,l=0;
  int max=0;
  for(int i=0;i<m-2;i++)
    {
      int j,o,p;
      for(j=0;j<n-2;j++)
	{
	  for(o=0;o<3;o++)
	    {
	      for(p=0;p<3;p++)
		{
		  sum = sum+a[i+o][j+k];
		}
	    }
	}
    
		    
      if(sum>max)
	    {
	      max=sum;
	      k=i;
	      l=j;
	    }
    }
    

  printf("Sum = %d\n",max);
  for(int z=0;z<3;z++)
    {
      for(int y=0;y<3;y++)
	{
	  printf("%d\t",a[z+k][y+l]);
	}
      printf("\n");
    }
}


void findmin(int a[][20],int m,int n)
{
  int sum=0,k=0,l=0;
  int min=11;
  for(int i=0;i<m;i++)
    {
      int j;
      for(j=0;j<i+2 && i<n;j++)
	{
	  sum=sum+a[i][j];
	}
      if(sum<min)
	    {
	      min=sum;
	      k=i;
	      l=j;
	    }
    }

  printf("Sum = %d\n",min);
  for(int i=k;i<k+3 && i<m;i++)
    {
      for(int j=l;j<l+3 && i<n;j++)
	{
	  printf("%d\t",a[i][j]);
	}
      printf("\n");
    }
}
	 
	  
	  



	  




      

      

      




int main()
{
  int data[20][20],m,n;
  printf("Enter number of rows:\n");
  scanf("%d",&m);
  printf("Enter number of column:\n");
  scanf("%d",&n);
  while(m<2 || m>20)
    {
       printf("Enter number of rows:\n");
  scanf("%d",&m);
    }

   while(n<2 || n>20)
    {
       printf("Enter number of columns:\n");
  scanf("%d",&n);
    }
      
  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  data[i][j]=rand()%10+1;
	}
    }

  for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
	{
	  printf("%d\t",data[i][j]);
	}
      printf("\n");
    }

  findminmax(data,m,n);
  findmaxmin(data,m,n);
  findmax(data,m,n);
  findmin(data,m,n);
	
  
  
}
  
	
