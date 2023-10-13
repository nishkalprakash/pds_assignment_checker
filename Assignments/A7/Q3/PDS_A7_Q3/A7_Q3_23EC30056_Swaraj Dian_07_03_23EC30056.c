//Name Swaraj Dian
//Roll: 23EC30056

#include<stdio.h>//Librarie
#include<stdlib.h>
int dist[5][5];

void dist2city()//Function 1
{
  char s,t;
  int distance;
  printf("Enter 2 Characters from A-E: ");
  scanf("%c%c",&s,&t);
  if ((s>='A')&&(s<='E')&&(t>='A')&&(t<='E'))//checking for validity
    {
      distance=dist[s-'A'][t-'A'];//distace between cityies
      if (distance==-1)
	printf("Distance between %c and %c is: unreachable",s,t);
      else
	printf("Distance between %c and %c is: %d",s,t,distance);
    }
  else
    printf("Invalid Output");
}
int main()//main function
{
  int i,j;
  for(i=0;i<5;i++)
    {
      for(j=i;j<5;j++)
	{
	  if(i==j)
	    dist[i][j]=0;
	  else
	    {
	      dist[i][j]=rand()%980+20;
	      dist[j][i]=dist[i][j];
	    }
	}
    }
  printf("Generated Array\n");//printing generated array
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	  printf("%d\t",dist[i][j]);
      printf("\n");
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{
	  if(dist[i][j]>150)
	    dist[i][j]=-1;
	}
    }
  printf("Formatted array: \n");//printing formatte array
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	  printf("%d\t",dist[i][j]);
      printf("\n");
    }
  dist2city();
}
