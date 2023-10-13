//name : Shine Srivastava
//roll no. 23MF3IM17

#include<stdio.h>
#include<stdlib.h>
int a[5][5];
int main()
{
  int a[5][5];
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<i && j!=i;j++)
	{
	  a[i][j]=rand()%980+20;
	  a[j][i]=a[i][j];
	}
    }
  for(int i=0;i<5;i++)
    {
      a[i][i]=0;
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  printf("%d\t",a[i][j]);
	}
      printf("\n");
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
      if(a[i][j]>150)
	    {
	      a[i][j]=-1;
	    }
	}
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  printf("%d\t\t",a[i][j]);
	}
      printf("\n\n");
    }

}
  
      
	  
	  
	
