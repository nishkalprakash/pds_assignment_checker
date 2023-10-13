//Shrey G Patel
//23CS10051

#include <stdio.h>
#include <stdlib.h>

int dist[5][5];


void dist2city(int c[5][5])
{
 char y,z;
 printf("Enter two characters between AtoE without ant space between them:");
scanf("%c %c",&y,&z);
y=y-'A';
z=z-'A';
if(c[y][z]==-1)
printf("Unreachable\n\n");
else
printf("The direct distance between them is %d\n",c[y][z]);
}

void distthr1city(int c[5][5])
{char x,y,z,temp;
int min=100000;
printf("Enter the cities between which you have to find distance along with the third without anyspace between them:");
scanf("%c %c %c",&x,&y,&z);
x=x-'A';y=y-'A';z=z-'A';

if(c[x][z]==-1 || c[y][z]==-1)
printf("Unreachable through given third city\n");

else
printf("The distance of %c from %c via %c is:%d\n",x+'A',y+'A',z+'A',c[x][z]+c[y][z]);

for(int i=0;i<5;i++)
{  
  if(i==x||i==y||c[x][i]==-1||c[y][i]==-1)
  continue;
 else if(min>c[x][i]+c[y][i])
 {min=c[x][i]+c[y][i];
  temp=i+'A';}}

if(min==100000)
printf("Unreachable through any third city\n\n");
else
printf("The min distance between %c and %c is via %c=%d\n",x+'A',y+'A',temp,min);
}


int main()
{
for(int i=0;i<5;i++)
{
 for(int j=0;j<=i;j++)
 {if(i==j)
  dist[i][j]=0;
  else
  dist[i][j]=dist[j][i]=rand()%980+20;}
}
for(int i=0;i<5;i++)
 {for(int j=0;j<5;j++)
  printf("%d\t",dist[i][j]);
  printf("\n");}


printf("\n");

for(int i=0;i<5;i++)
{ 
for(int j=0;j<5;j++)
{ if(dist[i][j]>150)
  dist[i][j]=-1;
}}
for(int i=0;i<5;i++)
 {for(int j=0;j<5;j++)
  printf("%d\t",dist[i][j]);
  printf("\n");}


dist2city(dist);
printf("\n\n");
distthr1city(dist);
  return 0;
}
