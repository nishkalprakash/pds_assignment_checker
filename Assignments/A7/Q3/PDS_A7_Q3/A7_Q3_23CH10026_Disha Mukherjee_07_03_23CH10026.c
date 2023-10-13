//Roll no:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int dist[5][5];

void dist2city()
{
  int i,i1,i2;
  char c1,c2;
  char c[5]={'A','B','C','D','E'};
  printf("\n enter 2 cities");
  scanf("%c",&c1);
  scanf("%c",&c2);
  for(i=0;i<5;i++)
    {
      if(c[i]==c1)
	i1=i;
      if(c[i]==c2)
	i2=i;
    }
  printf("%d",dist[i1][i2]);
}
	 
  

int main()
{
  int i,j;
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{
	  if(i>j)
	    {
	      dist[i][j]=rand()%980+20;
	      dist[j][i]=dist[i][j];
	    }
	  else if(i==j)
	    dist[i][j]=0;
	}
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	printf("%d ",dist[i][j]);
      printf("\n");
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{
	  if(dist[i][j]>150)
	    dist[i][j]=-1;
	}
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	printf("%d ",dist[i][j]);
      printf("\n");
    }
  dist2city();
  
  return 0;
}
