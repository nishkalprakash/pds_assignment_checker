//NAME:NAZEER ANWAR
//ROLL NO.:23BT30019
#include<stdlib.h>
#include<stdio.h>

void findmax(int m,int n,int data[20][20])
{
  int i,j,k,p,sum=0,max=0,r,t;
  for(i=0; i<(m-2) ; i++)
    {
      for( j=0; j<(n-2) ; j++)
	{
	  for( k=i ; k<(i+3) ; k++)
	    {
	      for( p=j ; p<(j+3) ; p++)
		{
		  sum=sum + data[k][p];
		}}
	  if(sum>max)
	    {
	      max=sum;
	      r=i;
	      t=j;
	    }
	  sum=0;
	}
    }
  printf("Max 3*3 submatrix\n");
  for( k=r ; k<(r+3) ; k++)
	    {
	      for( p=t ; p<(t+3) ; p++)
		{
		  printf("%d ",data[k][p]);
		}
	      printf("\n");
	    }

  printf("It's SUM is %d\n\n\n",max);
}



void findmin(int m,int n,int data[20][20])
{
  int i,j,k,p,sum=0,min=1000,r,t;
  for(i=0; i<(m-2) ; i++)
    {
      for( j=0; j<(n-2) ; j++)
	{
	  for( k=i ; k<(i+3) ; k++)
	    {
	      for( p=j ; p<(j+3) ; p++)
		{
		  sum=sum + data[k][p];
		}}
	  if(sum<min)
	    {
	      min=sum;
	      r=i;
	      t=j;
	    }
	  sum=0;
	}
    }
  printf("Min 3*3 submatrix\n");
  for( k=r ; k<(r+3) ; k++)
	    {
	      for( p=t ; p<(t+3) ; p++)
		{
		  printf("%d ",data[k][p]);
		}
	      printf("\n");
	    }

  printf("It's SUM is %d\n\n\n",min);
}

 void findMinMax(int m,int n,int data[20][20])
 {
   int i,j,max,min=1000,r,t;
     
     for(i=0; i<m ; i++)
    {
      max=0;
      for( j=0; j<n ; j++)
	{
	  if(data[i][j]>max)
	    {
	      max=data[i][j];
	      t=j; 
	    }
	}
	  if(max<min)
	    { min=max; r=i;}
          
	}
    
     printf("MinMax=%d , present in row %d , column %d\n",min,r,t);
 }

 void findMaxMin(int m,int n,int data[20][20])
 {
   int i,j,max=0,min,r,t;
     
     for(i=0; i<m ; i++)
    {
      min=1000;
      for( j=0; j<n ; j++)
	{
	  if(data[i][j]<min)
	    {
	      min=data[i][j];
	      t=j; 
	    }
	}
	  if(min>max)
	    { max=min; r=i;}
          
	}
    
     printf("MaxMin=%d , present in row %d , column %d\n",max,r,t);
 }





int main()
{
  int data[20][20],m,n,i,j;
    printf("Enter the value of m and n with a blank between them(2<m<20 , 2<n<20):  ");
  scanf("%d %d",&m,&n);
  printf("The original Matrix:\n");
  for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
	  {
	    data[i][j]=rand() % 10 ;
	    printf("%d ",data[i][j]);
	  }
	printf("\n");
    }
  printf("\n\n");
 
  findmax(m,n,data);
  findmin(m,n,data);
findMinMax(m,n,data);
findMaxMin(m,n,data);
}
