#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
int main()
{
int j,x,i,z,k;
const int N=5, A=5, B=5;
float Filter[N], y, a;
int Bin_A[A], Bin_B[B];


a = 0;
k = 0;
srand(42);
   for(j=1;j<=N;j++){
      Filter[j] = a;
      printf("%f ", a);
      for(i=1;i<=x;i++){
      x = rand() % 100 + 1;
      y = (pow(-1,j+1)*pow(j,2))/((2*j) + 1) + cos(x/2);
      a = a + y;
         } }
      
   for(j=1;j<=N;j++){
      if(y > Filter[j])
        Bin_A[k] = x;
      else
        Bin_B[k] = x;
      for(i=1;i<=x;i++){
      x = rand() % 100 + 1;
      y = (pow(-1,j+1)*pow(j,2))/((2*j) + 1) + cos(x/2);
      a = a + y;
         } }



return 0;

}




  
