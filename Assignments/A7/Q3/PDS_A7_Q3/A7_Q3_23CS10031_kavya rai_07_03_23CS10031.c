#include<stdio.h>
#include<stdlib.h>
int dist[5][5];
int Dist2city()
{char r,c,v;
 int i=0,j=0;
 printf("Enter the two char with a space in between(between A to E) :");
 scanf("%c%c",&r,&c);
 if(r=='A')i=0;
 else if(r=='B')i=1;
 else if(r=='C')i=2;
 else if(r=='D')i=3;
 else if(r=='E')i=4;
 else {printf("You entered character out of range(A to E). RETURNING");
       return 0;
} 
 

 if(c=='A')j=0;
 else if(c=='B')j=1;
 else if(c=='C')j=2;
 else if(c=='D')j=3;
 else if(c=='E')j=4;
  else {printf("You entered character out of range(A to E). RETURNING");
       return 0;
} 
 printf("Ditance between %c and %c : %d",r,c,dist[i][j]);
 return 0;
}
void DistThr1city()
{
 char r,c;
 printf("Enter the two char :");
 scanf("%c%c",&r,&c);
}
int main()
{ int i,j;
  for(i=0;i<5;i++)
    {
      for(j=0;j<i;j++)
	{
	  dist[i][j]=20+rand()%(980);
          dist[j][i]=dist[i][j];
          dist[i][i]=0;
	}
     
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{  
          printf("%d ",dist[i][j]);
	}
       printf("\n");
    }
  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{  
          if(dist[i][j]>150)dist[i][j]=-1;
	}
    }
 for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	{  
          printf("%d ",dist[i][j]);
	}
       printf("\n");
    }
  Dist2city();
  DistThr1city();
  return 0;
}
