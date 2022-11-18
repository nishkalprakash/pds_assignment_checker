#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>


int main()
{
 srand(time(NULL));

 int p,n,k,i,j,d=0;
 float D = 0, Dexp;

 printf("Enter the value of n :");   //inputing value of n
 scanf("%d", &n);
 printf("Enter the value of k :");   //inputing value of k
 scanf("%d", &k);

 for(i=0; i<k; i++)
    {
     d=0;
      for(j=0; j<n; j++)
      {
        p = rand() & 1 ? -1 : 1;     //finding a random number
         d = d+p;                    //calculating distance from  initial position
      }
       D= D+pow(d, 2);               //final distance

 }
 Dexp = sqrt(D/k);   //expected distance

 printf("Output : %f", Dexp);




return 0;

}
