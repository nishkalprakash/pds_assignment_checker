/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Assignment 2(a)
*/
#include <stdio.h>
#include <math.h>
int main()
{ int k,i,n;
  float z,z1,z2,s;
  printf("Enter the value of height 'z' :");
  scanf("%f",&z);
  printf("Enter no.of iterations to be performed 'k' : ");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  { if(i==0)
    {
    z1 = z - sqrt(z) ;
    z2 = z1 ;
    printf("(%f,%d)\n",z2,i+1);
    }
    else
    {z1 = z2 ;
         z2 = z1 -sqrt(z1) ;
    if(z2 <0)
    { z2 = -1.0*z2 ; }
    printf(" (%f,%d)\n",z2,i+1);
    if (z1 == z2)
    {
       s = sqrt(z1);
       s = s - (1/k);
       z2 = z1 - pow(s,2);
    if(z1 == z2) break;
    }
    }
  }
  return 0 ;
}
