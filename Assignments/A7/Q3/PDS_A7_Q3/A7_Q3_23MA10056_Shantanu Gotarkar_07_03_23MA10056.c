//Name:Shantanu
//Roll No.: 23MA10056

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int dist[5][5];

int dist2city(char c1,char c2)
{
  if(dist[c1][c2]==-1)
    printf("Unreachable");
  
  return (dist[c1][c2]);
  
} 

int main()
{  srand(time(NULL));
  
  int u1=999,l1=20,i,j;

  for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	dist[i][j]=rand()%(u1-l1+1)+l1 ;
    }
  
      
      
for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
	printf("%d\t",dist[i][j]);
    
 printf("\n");
    }
 
 printf("\n");
 
 for(i=0;i<5;i++)
   {
     for(j=i;j<5;j++)
       {
	 if(i==j)
	   {
	     dist[i][j]=0;
	   }
	 else
	   {
	
	     dist[i][j]=dist[j][i];
	   }
   }
   }

  
   for(i=0;i<5;i++)
   {
     for(j=0;j<5;j++)
       {
	 if(dist[i][j]>150)
	   dist[i][j]=-1  ;
       }
   }


   for(i=0;i<5;i++)
     {
       for(j=0;j<5;j++)
       printf("%d\t",dist[i][j]);
       
   printf("\n");
     }
   
   
   char c1,c2;
   if (c1=='A')
     A=0;
   if (c2=='B')
  B=1;
   if(c3==

   return 0;
}

   
