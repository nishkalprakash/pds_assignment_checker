// Roll - 23IE10031
// Name - Om singh Jadon

#include <stdio.h>
#include <stdlib.h>

int dist2city();
int distThr1city();

int dist[5][5];

int main()
{
  for (int i = 0; i<5; i++)
    {
      for (int j = 0; j<5; j++)
	{
	  if (i==j) dist[i][j] = 0;
	  else if (i>j)
	    {
	      dist[i][j] = rand()%980;
	      dist[j][i] = dist[i][j];
	    }
	  
	}
    }

  for (int i = 0; i<5; i++)
    {
      for (int j = 0; j<5; j++)
	{
	  printf("%d", dist[i][j]);
	  int k = 5;
	  int temp = dist[i][j] ? dist[i][j] : 1 ;
	  while (temp)
	    {
	      temp /= 10;
	      k--;
	    }
	  for (int l=0; l<k; l++)
	    {
	      printf(" ");
	    }
	}
      printf("\n");
    }

  printf("\n");
  printf("\n");
  printf("\n");
  for (int i = 0; i<5; i++)
    {
      for (int j = 0; j<5; j++)
	{
	  if (dist[i][j] > 150) dist[i][j] = -1;
	}
    }

    for (int i = 0; i<5; i++)
    {
      for (int j = 0; j<5; j++)
	{
	  printf("%d", dist[i][j]);
	  int k = 5;
	  int temp = dist[i][j] ? dist[i][j] : 1 ;
	  while (temp)
	    {
	      temp /= 10;
	      k--;
	    }
	  for (int l=0; l<k; l++)
	    {
	      printf(" ");
	    }
	}
      printf("\n");
    }

    dist2city();
}


int dist2city()
{
  printf("\n\nType the cities(in Caps) between which you want to calculate direct distance: ");
  char s,t;
  scanf("%c %c", &s, &t);

  s = s - 'A' < 0 ? (s-'A')*(-1) : s-'A';
  t = t - 'A' < 0 ? (t-'A')*(-1) : t-'A';

  if (dist[s][t] == -1) printf("\nNot Connected\n");
  else printf("\nDirect Distance between %c and %c is %d\n", s+'A', t+'A', dist[s][t]);
}

int distThr1city()
{
  printf("\n\nType the cities(in Caps) between which you want to calculate distance through a third city: ");
  char s,t;
  scanf("%c %c", &s, &t);
  s = s - 'A' < 0 ? (s-'A')*(-1) : s-'A';
  t = t - 'A' < 0 ? (t-'A')*(-1) : t-'A';

  int min_city;
  int min_dist = 1000;
  
  int distance = 0;
  for (int i=0; i<5; i++)
    {
      if (i!=s && i!=t)
	{
	  if (dist[s][i]==-1 || dist[i][t] == -1)
	    {
	      printf("\nFrom %c to %c via %c unreachable\n", s+'A', t+'A', i+'A');
	    }
	  int distance = dist[s][i] + dist[i][t];
	  printf("\nFrom %c to %c via %c  %d\n", s+'A', t+'A', i+'A', distance);
		 if (distance < min_dist) min_dist = distance;
	}
    }
}
