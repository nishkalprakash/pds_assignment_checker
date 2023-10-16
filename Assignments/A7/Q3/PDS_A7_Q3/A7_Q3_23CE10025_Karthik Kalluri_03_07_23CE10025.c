#include <stdio.h>
#include <stdlib.h>
int dist[5][5];
int dist2city(int dist[5][5]);
int distthr1city();
int main()
{ 
  for(int i=0,j=0;i<5 && j<5;i++,j++)
    {
      dist[i][j]=0;
    }
  for(int i=4;i>=0;i--)
    {
      
      for(int j=0;j<i;j++)
	{
	  dist[i][j]=rand()%980+20;
	  dist[j][i]=dist[i][j];
	}
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  printf("%d  ",dist[i][j]);
	}
      printf("\n");
    }
  for(int i=0;i<5;i++)
    {
      for(int j=0;j<5;j++)
	{
	  if(dist[i][j]>150)
	    {
	      dist[i][j]=-1;
	    }
	}
    }
  dist2city(dist);
  
      



 }
int dist2city(int dist[5][5])
{ char s,t;
  do{
    printf("Enter 2 letters ranging from A to E\n");
    scanf("%c%c",&s,&t);
      if((s>='A')&&(s<='E')&&((t>='A')&&(t<='E')))
	{
	  break;
	}
  }while(1);
  int i,j;
  if(s=='A')
    i=0;
  if(s=='B')
    i=1;
  if(s=='C')
    i=2;
    if(s=='D')
    i=3;
      if(s=='E')
    i=4;
        if(t=='A')
    j=0;
  if(t=='B')
    j=1;
  if(t=='C')
    j=2;
    if(t=='D')
    j=3;
      if(t=='E')
    j=4;
      
  printf("The distance between the given cities is %d",dist[i][j]);
}

