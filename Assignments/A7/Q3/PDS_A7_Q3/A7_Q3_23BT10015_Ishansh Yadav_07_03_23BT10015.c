//Name-Ishansh Yadav
//Roll No.-23BT10015

#include<stdio.h>
#include<stdlib.h>

int dist[5][5];

int dist2city(int a[5][5], char m, char n)
{int i, j;
  if(m=='A')i=0;
  if(m=='B')i=1;
  if(m=='C')i=2;
  if(m=='D')i=3;
  if(m=='E')i=4;
  if(n=='A')j=0;
  if(n=='B')j=1;
  if(n=='C')j=2;
  if(n=='D')j=3;
  if(n=='E')j=4;
  if(a[i][j]==-1)printf("Cities are disconnected");
  return a[i][j];
}

int main()
{int i, j;
  for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
	{if(i==j)dist[i][j]=0;
	  if(i<j)dist[i][j]=20+rand()%980;
	  if(i>j)dist[i][j]=dist[j][i];
	  printf("%3d ", dist[i][j]);
	}
      printf("\n");
    }
  printf("New Matrix is\n");
  for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
	{if(dist[i][j]>150)dist[i][j]=(-1);
         printf("%3d ", dist[i][j]);
	}
      printf("\n");
    }
  char city1, city2;
  scanf("%c\n%c", &city1, &city2);
  int distance=dist2city( dist, city1, city2);
  if(distance!=-1)printf("Distance is %d", distance);
}
