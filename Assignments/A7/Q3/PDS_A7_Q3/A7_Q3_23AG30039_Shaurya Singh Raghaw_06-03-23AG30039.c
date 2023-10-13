#include<stdio.h>
#include<stdlib.h>
int dist[5][5];

void dist2city()
{
  char c1,c2;
  printf("enter the character1: ");
  scanf("%c",&c1);
   printf("enter the character2: ");
  scanf("%c",&c2);
  distance between 

int main()
{
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  if(j<i && i+j!=4)
	dist[i][j] = rand()%980 + 20;
	
     else if(i==j)
	dist[i][j]=0;
     else if(i+j==4)
	dist[i][j]=0;
     else if(j>i && i+j!=4)
	dist[i][j]=dist[j][i];
	}
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	printf("%d ",dist[i][j]);
        }
      printf("\n");
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  if(dist[i][j]>150)
	    dist[i][j]=-1;
        }
      printf("\n");
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	printf("%d ",dist[i][j]);
        }
      printf("\n");
    }
  return 0;
}
  
