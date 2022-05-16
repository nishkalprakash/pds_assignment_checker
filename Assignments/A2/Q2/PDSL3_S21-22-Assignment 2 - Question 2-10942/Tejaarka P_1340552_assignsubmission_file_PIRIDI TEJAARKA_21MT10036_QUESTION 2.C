/*PIRIDI TEJAARKA 21MT10036 QUESTION 2*/


#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <math.h>

int main()
{

 srand(time(0));
//  int p = ;

 int n,k,distance,i,j;

 float tot_d=0;


 printf("enter the value of n:");


 scanf("%d",&n);


 printf("enter the value of k:");


 scanf("%d",&k);


 for(i=1; i<=k; i++){

     distance=0;

     for(j=1; j<=n; j++){


  distance = distance+ (rand() &1 ? -1 : 1);

        //  printf("%d ",dist);


     }
//  printf("\n");


 tot_d = tot_d + distance*distance;


 }

 printf("%f",sqrt(tot_d/k));         /*THE VALUE OF D WILL BE APPROXIMATELY EQUAL TO SQUARE ROOT OF n taken */


 return 0;

}
