/*This program is to find RMS diatance travelled by particle from mean position*/
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
  srand(time(NULL));
  int n,k,i,j,dn=0,D=0,DE=0,p=0;
  printf("Enter number of steps the particle want to take each time (n) : ");
  scanf("%d",&n);
  printf("Enter number of times we have to execute this distance calculation(please enter large value for good result like 100000) (k) : ");
  scanf("%d",&k);
  for(i=1;i<=k;i++)
  {
    for(j=1;j<=n;j++)
    {
       p = rand() & 1 ? -1 : 1;
       dn=dn+p;
    }
    D=D+dn*dn;
  }
  DE=sqrt(D/k);
  printf("expected distance DE is computed as : %d\n",DE);
}

