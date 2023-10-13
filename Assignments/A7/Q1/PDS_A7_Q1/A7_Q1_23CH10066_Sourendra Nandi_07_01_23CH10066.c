//name :sourendra nandi
//roll 23CH10066
#include <stdio.h>
#include <stdlib.h>
void findmax(int data[][20],int m,int n);
void findmin(int data[][20],int m,int n);
void findminmax(int data[][20],int m,int n);
void findmaxmin(int data[][20],int m,int n);
int main()
{
  int data[20][20],i,j,m,n;
  printf("Enter m and n :");
  scanf("%d%d",&m,&n);
  
  for (i=0;i<m;i++)
    {
      for (j=0;j<n;j++)
	{
	  data[i][j]=rand()%11+0;
	}
    }
   for (i=0;i<m;i++)
    {
      printf("{");
      for (j=0;j<n;j++)
	{
	  printf("%d, ",data[i][j]);
	}
      printf("}\n");
    }
   findmax(data,m,n);
   findmin(data,m,n);
   findminmax(data,m,n);
   findmaxmin(data,m,n);
   return 0;
   
}
void findmax(int data[][20],int m,int n)
{
  int i,j,k,l,sum,maxsum=0,max_i,max_j;
  for (i=0;i<=m-3;i++)
    {
      for(j=0;j<=n-3;j++)
	{
	  sum=0;
	  for (k=i;k<=i+2;k++)
	    {
	      for (l=j;l<=j+2;l++)
		{
		  sum=sum+data[k][l];   //sum calculate
		}
	    }
	  if (sum>maxsum)
	    {
	      maxsum=sum;
	      max_i=i;
	      max_j=j;
	    }
	}
    }
  printf("Max Submatrix =\n");
  for (i=max_i;i<=max_i+2;i++)
    {
      for (j=max_j;j<=max_j+2;j++)
	{
	  printf("%d ",data[i][j]);
	}
      printf("\n");
    }
  printf("Max sum = %d\n",maxsum);
  printf("----------------------\n");
}
void findmin(int data[][20],int m,int n)
{
  int i,j,k,l,sum,minsum=200,min_i,min_j;
  for (i=0;i<=m-3;i++)
    {
      for(j=0;j<=n-3;j++)
	{
	  sum=0;
	  for (k=i;k<=i+2;k++)
	    {
	      for (l=j;l<=j+2;l++)
		{
		  sum=sum+data[k][l];   //sum calculate
		}
	    }
	  if (sum<minsum)
	    {
	      minsum=sum;
	      min_i=i;
	      min_j=j;
	    }
	}
    }
  printf("Min Submatrix =\n");
  for (i=min_i;i<=min_i+2;i++)
    {
      for (j=min_j;j<=min_j+2;j++)
	{
	  printf("%d ",data[i][j]);
	}
      printf("\n");
    }
  printf("Min sum = %d\n",minsum);
  printf("----------------------\n");
}
void findminmax(int data[][20],int m,int n)
{
  int i,j,k,rowno[20],colno[20],maxele_arr[20],maxele=0,minval=200,minrow,mincol;
  for (i=0;i<m;i++)
    {
      maxele=0;
      for (j=0;j<n;j++)
	{
	  if (data[i][j]>=maxele)
	    {
	      maxele=data[i][j];
	      maxele_arr[i]=maxele;
	      colno[i]=j;
	    }
	}
    }
  for (k=0;k<m;k++)
    {
      if (maxele_arr[k]<minval)
	{
	  minval=maxele_arr[k];
	  minrow=k;
	  mincol=colno[k];
	}
    }
  printf("Max elements = (");
  for (k=0;k<m;k++)
    {
      printf("%d ,",maxele_arr[k]);
    }
  printf(")\n");
  
  printf("\nminMax= %d , row = %d col = %d \n",minval,minrow,mincol);        //printing minmax with row and col
  printf("-----------------------------\n");
}
void findmaxmin(int data[][20],int m,int n)
{
  int i,j,k,rowno[20],colno[20],minele_arr[20],minele=200,maxval=0,maxrow,maxcol;
  for (i=0;i<m;i++)
    {
      minele=200;
      for (j=0;j<n;j++)
	{
	  if (data[i][j]<=minele)
	    {
	      minele=data[i][j];
	      minele_arr[i]=minele;
	      colno[i]=j;
	    }
	}
    }
  for (k=0;k<m;k++)
    {
      if (minele_arr[k]>maxval)
	{
	  maxval=minele_arr[k];
	  maxrow=k;
	  maxcol=colno[k];
	}
    }
  printf("Min elements = (");
  for (k=0;k<m;k++)
    {
      printf("%d ,",minele_arr[k]);
    }
  printf(")\n");
  
  printf("\nmaxMin= %d , row = %d col = %d \n",maxval,maxrow,maxcol);        //printing maxmin with row and col
  printf("-----------------------------\n");
}
      
      
      
      
	      
	  
  
  

  
  
