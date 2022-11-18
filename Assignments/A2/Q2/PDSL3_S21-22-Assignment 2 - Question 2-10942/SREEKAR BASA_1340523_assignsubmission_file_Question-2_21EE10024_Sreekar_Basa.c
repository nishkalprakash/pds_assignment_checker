/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Assignment 2(b)
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
int main()
{
  srand(time(NULL));
  int i,j,d,D,n,k,p ;
  float DE;
  D = 0;
  printf("Enter the value 'n' (no.of random steps) : ");
  scanf("%d",&n);
  printf("Enter no.of iterations to be done :");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    for(j=0,d=0;j<n;j++)
    {
    p = rand() & 1 ? -1 : 1;
    d = d + p ;
    }
    D = D + pow(d,2);
  }
  DE = sqrt((D*1.0)/k) ;
  printf("Final expected distance is : %f",DE);
  return 0;
}
