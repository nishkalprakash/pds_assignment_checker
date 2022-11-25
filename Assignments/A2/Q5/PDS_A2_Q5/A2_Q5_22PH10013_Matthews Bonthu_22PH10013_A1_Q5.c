#include <stdio.h>
#include <math.h>

int main ( )
{
// Y is the distance covered in first rebound, N is number of rebounds.
// D is the total distance covered, R is a varaible assigned to make calculation simpler.
  float D,R;
int Y,N;
 printf("enter the value of intial height ");
 scanf("%d",&Y);

 printf("enter the value of rebounds ");
 scanf("%d",&N);
  
   R= 1-pow(0.25, N-1);
   D= Y + (2*Y*R)/3;
    
  printf("hence the total distance covered is %f",D);
  return 0;
}
