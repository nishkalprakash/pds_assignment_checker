#include <stdio.h>
int main()
{
  int roll[10],n,i,j;
  float cg[10];

  printf("Enter the number of students: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      printf("Enter value of roll[%d]: ",i);
      scanf("%d", &roll[i]);
    }
  for(j=0;j<n;j++)
    {
      printf("Enter value of cg[%d]: ",i);
      scanf("%f", &cg[j]);
    }

}
