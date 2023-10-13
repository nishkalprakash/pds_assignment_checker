#include<stdio.h>
#include<stdlib.h>

int dist[5][5];
char s,t;

void dist2city(char s,char t)
{
  int dis;
  printf("Enter any 2 cities from A to E:\n");
  printf("The distance between %c and %c is = \n",(char)s,(char)t);
  scanf("%c\n%c ",&s,&t);
  s-=(int)97;
  t-=(int)97;
  dis= dist[(int)s][(int)t];
    if ( dis=-1)
      printf ("City is unreachable \n");
    else
      printf("%d",dis);
    printf("\n");
}

int main ()
{
  int i,j;
  for (i=0;i<5;i++)
    {
      for (j=0;j<5;j++)
	{
	  if (i==j)
	    dist[i][j]=0;
	  if ( i<j)
	  dist[i][j]=rand()%1000+20 ; 
	  dist[j][i]=dist[i][j];
	  printf (" %d ", dist[i][j]);
	}
      printf("\n");
    }
  
  printf("\n");
  
  int p,q;
  for (p=0;p<5;p++)
    {
      for(q=0;q<5;q++)
	{
	if (dist[p][q]>150)
	  {
	  dist[p][q]=-1;
	  }
	  printf(" %d ",dist[p][q]);
	}
  printf("\n");
}
  
  dist2city(s,t);
  { printf ("%d ", dis);}
  
  return 0;
}

  
	      
	     
  
