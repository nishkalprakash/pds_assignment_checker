//NAME:NAZEER ANWAR
//ROLL NO.:23BT30019
#include<stdlib.h>
#include<stdio.h>
int dist[5][5];

void dist2city()
{
  char s ,h;
    printf("Enter two character between A and E with a blank:  ");
  scanf("%c %c",&s,&h);
  if(dist[s-65][h-65]==-1)
    printf("They are disconnected cites\n\n");
  else
    printf("Distance between them is %d",dist[s-65][h-65]);
}

void DistThe1city()
{
  char s ,h;int i;
    printf("Enter two character between A and E with a blank:  ");
  scanf("%c %c",&s,&h);
  for(i=0;i<5;i++)
    {
      if(i=(s-65)||i=(h-65))
	continue;
      if(dist[s-65][i+65]==-1 || dist[i+65][h-65]==-1)
	{
	  printf("%c to %c via %c is unreachable",s,h,i+65);
	  break;}
      
      printf("distance between %c and %c via %c is %d",s,h,i+65,dist[s-65][i+65]);
    }
}



int main()
{
  int i,j;
  for(i=1;i<=4;i++)
    {
      for(j=0;j<=3;j++)
	{
	 dist[j][i]= dist[i][j]=(rand() % 980)+20;
	}
    }
  for(i=0;i<5;i++)
    {
      dist[i][i]=0;
    }

  printf("Genereted array:\n");
for(i=0;i<=4;i++)
    {
      for(j=0;j<=4;j++)
	{
	  printf("%d\t",dist[i][j]);
	}
      printf("\n");
    }

 printf("array after checking disconnected cities\n");
 for(i=0;i<=4;i++)
    {
      for(j=0;j<=4;j++)
	{
	  if(dist[i][j]>150)
	    dist[i][j]=-1;
	  printf("%d\t",dist[i][j]);

	}
      printf("\n");
    }

 dist2city();
 DistThe1city();
}


  
