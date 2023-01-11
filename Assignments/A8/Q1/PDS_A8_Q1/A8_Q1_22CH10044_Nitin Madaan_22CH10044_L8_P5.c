#include<stdio.h>
int main()
{
  int m,i,j;
 printf("Enter the value of order m\n");
 scanf("%d",&m);
int Q[m][m];
for(i=0;i<m;i++)
{
  for(j=0;j<m;j++)
{
  printf("Enter the value of Q[%d][%d]:-",i,j);
  scanf("%d",&Q[i][j]);
}
}

for(i=0;i<m;i++)
{
  for(j=0;j<m;j++)
{
  printf("%d",Q[j][i]);
 }
}

return 0;
}


