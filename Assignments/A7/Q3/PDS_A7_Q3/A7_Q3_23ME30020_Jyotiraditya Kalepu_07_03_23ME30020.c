//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
#include <stdlib.h>

void dist2city();
void DistThr1city();
int dist[5][5];

int main()
{
  for(int i = 0; i < 5; i++)
    {
      for(int j = i; j < 5; j++)
	{
	  if ( i==j) dist[i][j] = 0;
	  else
	    {
	      dist[i][j] = rand()%800 + 20;
	      dist[j][i] = dist[i][j];
	    }
	}
    }
  for(int i = 0; i < 5; i++)
    {
      for( int j = 0; j < 5; j++)
	{
	  printf("%d  ",dist[i][j]);
	}
      printf("\n");
    }
  for(int i = 0; i < 5; i++)
    {
      for( int j = 0; j < 5; j++)
	{
	  if( dist[i][j] > 150) dist[i][j] = -1;
	}
    }
  for(int i = 0; i < 5; i++)
    {
      for( int j = 0; j < 5; j++)
	{
	  printf("%d  ",dist[i][j]);
	}
      printf("\n");
    }

  dist2city();
  DistThr1city();
  return 0;
}

void dist2city()
{
  char c1, c2;
  int city1, city2;
  printf("Enter two city : ");
  scanf("%c %c", &c1, &c2);
  city1 = c1 - 'A';
  city2 = c2 - 'A';
  if(dist[city1][city2] == -1) printf("From %c to %c unreachable", c1, c2);
  else printf("From %c to %c %dkm\n", c1, c2, dist[city1][city2]);
}

void DistThr1city()
{
  char c1, c2, c3;
  int city1, city2, city3;
  printf("Enter two city and intermediate city : ");
  scanf("%c %c %c", &c1, &c2, &c3);
  city1 = c1 - 'A';
  city2 = c2 - 'A';
  city3 = c3 - 'A';
  if(city1 != city3 && city2 != city3)
    {
      if(dist[city1][city3] == -1 && dist[city2][city3] == -1 )
	printf("From %c to %c via %c unreachable", c1, c2, c3);
      else printf("Minimum distance from %c to %c via %c %dkm\n", c1, c2, c3, dist[city1][city3]+dist[city2][city3]);
		  
    }
}
      
  
  


  

