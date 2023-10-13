#include<stdio.h>
#include<stdlib.h>

int dist[5][5];
int main()
{
  int i, j;
  for(i = 0; i < 5; i++)
    {
      for(j = 0; j < i; j++)
	{
	  dist[j][i] = dist[i][j] = rand()%(999-20 + 1)+20;
	  
	}
      dist[i][i] = 0;
    }
  for(i = 0; i < 5; i++)
    {
      for(j = 0; j < 5; j++)
	{
	  printf("%d\t",dist[i][j]);
	}
      printf("\n");
    }


  for(i = 0; i < 5; i++)
    {
      for(j = 0; j < 5; j++)
	{
	  if(dist[i][j] > 150) dist[i][j] = -1;
	}
    }
    for(i = 0; i < 5; i++)
    {
      for(j = 0; j < 5; j++)
	{
	  printf("%d\t",dist[i][j]);
	}
      printf("\n");
    }
  
  return 0;
}
