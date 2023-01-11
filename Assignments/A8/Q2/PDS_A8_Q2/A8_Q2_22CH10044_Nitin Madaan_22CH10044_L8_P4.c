#include<stdio.h>
int main()
{
  int i,j,k,m,n,min,max,p[2][2];
  printf("Enter the order of matirx m*n:-\n");
  scanf("%d %d",&m,&n);
 int Q[m][n];
for(int i=0;i<m;i++)
{
   
  for(int j=0;j<n;j++)
{ 
printf("The value of Q[%d][%d]\n",i,j);
   scanf("%d",&Q[i][j]);
}
}

 for( i=0;i<m;i++)
{
   
  for( j=0;j<n;j++)
{ 
printf("%d",Q[i][j]);
}
  printf("\n");
}

//finding saddle points
for(i=0;i<m;i++)
{
  min=Q[i][0];
for(j=0;j<m;j++)
{
  if(min>=Q[i][j])
{
  min=Q[i][j];
  p[0][0]=i;
p[0][1]=j;
}
}

j=p[0][1];
max=Q[0][j];
for(k=0;k<m;k++)
{
  if(max<=Q[k][j])
{
  max=Q[i][j];
p[1][0]=k;
p[1][1]=j;
}
}

if(min==max)
{
  if(p[0][0]==p[1][0] && p[0][1]==p[1][1])
{
 printf("Saddle point is at (%d,%d) :- %d",p[0][0],p[0][1],max);
 }
}
}
return 0;
}

