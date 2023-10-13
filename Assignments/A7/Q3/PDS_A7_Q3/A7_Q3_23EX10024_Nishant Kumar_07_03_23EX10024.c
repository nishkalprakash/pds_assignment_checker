//ROLL 23EX10024
//NAME NISHANT KUMAR
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int dist[5][5];
  for(int i=0;i<5;i++)
    {
      dist[i][i]=0;
    }
  for(int i=0;i<5;i++)
    {
      for(int j=i+1;j<5;j++)
	dist[i][j]=20+rand()%980;
    }
  for(int i=4;i>=0;i--)
    {
      for(int j=0;j<i;j++)
	{
	  dist[i][j]=dist[j][i];
	}
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  printf("%d  ",dist[i][j]);
	}
      printf("\n");
      printf("\n");
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  for(int n=1;n<5-j;n++){
	  if((dist[i][j] - dist[i][j+n])>150 || (dist[i][j+n] - dist[i][j])>150)
	    {
	      dist[i][j+n]= -1;
	    }
	  }
	}
    }
  for(int i=0;i<5;i++)
    {
      dist[i][i]=0;
    }
   for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  printf("%d  ",dist[i][j]);
	}
      printf("\n");
      printf("\n");
    }
      return 0;
}
