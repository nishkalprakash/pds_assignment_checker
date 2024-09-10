#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int main()
{
  float Filter[4];
  int Bin_A[3] , Bin_B[2] , y , x;
  Filter[0] = 0;
  
  srand(42);
  for(int i = 0; i<4 ; i++)
  {
  
  int randomNumber = rand() % 100 + 1;
  printf("Random Number: %d\n", randomNumber);
  
  for(int k = 1; k<=randomNumber ; k++)
  {
     if(k % 2 == 0)
     {
       y = (k*k)/(2*k + 1) - k;
       Filter[i] = Filter[i] + y;
     }
     
     else{
          y = (k*k)/(2*k + 1) + k;
          Filter[i] = Filter[i] + y;
     }
  }
     x = randomNumber;
  printf("Filter[%d] = %f\n",i,Filter[i] + sin(x/3));
  }
  
  // Filter array is full.
  
  for(int b = 1; b<=4; b++)
  {
  int randomNumber = rand() % 100 + 1;

  
  float z = 0;
  
   for(int m = 1; m<=randomNumber ; m++)
  {
     if(m % 2 == 0)
     {
       y = (m*m)/(2*m + 1) - m;
       z = z + y;
     }
     
     else{
          y = (m*m)/(2*m + 1) + m;
          z = z + y;
     }
  }
     z = z + sin(randomNumber/3);
   for(int a = 0; a<4; a++)
   if( z < Filter[a])
   {
   Bin_A[a] = randomNumber;
   }
   else{
    Bin_B[a] = randomNumber;
   }
  }
  printf("\n");
 for(int p = 0; p < 4 ; p++)
 {
   printf("Bin_A[%d] = %d\n",p,Bin_A[p]);
   
 }
 
 printf("\n");
 
  for(int q = 0; q < 4 ; q++)
 {
   printf("Bin_B[%d] = %d\n",q,Bin_B[q]);
   
 }
  
  
  
  return 0;
  
}
