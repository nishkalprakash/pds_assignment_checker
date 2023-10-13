#include <stdio.h>
#include <stdlib.h>
int dist[5][5];
void dist2city()
{
  char s,t;
  int i,j,sv,tv,d;
  printf("Enter s and t : ");
  scanf("%c%c",&s,&t);
  if (s=='A') sv=0;
  else if (s=='B') sv=1;
  else if (s=='C') sv=2;
  else if (s=='D') sv=3;
  else if (s=='E') sv=4;
  if (t=='A') tv=0;
  else if (t=='B') tv=1;
  else if (t=='C') tv=2;
  else if (t=='D') tv=3;
  else if (t=='E') tv=4;
  
  d=dist[sv][tv];
  printf("Direct distence between %c and %c is %d\n",s,t,d);
}



  
int main()
{
  int i,j;
  for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
	{
	  if (i==j) dist[i][j]=0;
	  else if (i>j)
	    {
	      dist[i][j]=dist[j][i]=rand()%980+20;
	    }
	}
    }
   for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
	{
	  printf("%d ,",dist[i][j]);
	}
      printf("\n");
    }
   for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
	{
	  if (dist[i][j]>150) dist[i][j]=-1;
	}
      
    }
   printf("Updated array : \n");
   for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
	{
	  printf("%d ,",dist[i][j]);
	}
      printf("\n");
    }
   dist2city();
}
  
