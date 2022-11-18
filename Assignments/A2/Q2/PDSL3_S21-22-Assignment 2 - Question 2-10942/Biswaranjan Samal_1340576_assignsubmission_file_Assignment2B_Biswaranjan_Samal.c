/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment: 2 Question 2
*/

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

 int main() {
      srand(time(NULL));
      int k,n,i,j,p;  //p updates itslef and at end it is total distance in each iteration
      double D,D_e ;
      //D= total distance in k iterations as defined,D_e=Expected distance=root  mean dist


     printf("Enter number of random steps:");
     scanf("%d",&n);
      printf("Enter number of iterations:");
     scanf("%d",&k);


       D=0;
       p=0;

       for ( i = 1 ; i <= k ; i++ )
        {   p=0;
            for ( j =1; j <= n; j++)
              {
               p = p + (rand() & 1 ? -1 : 1);  //p updates itslef and at end it is total distance in each step distance
              }

             D = D + p*p;   //D= total distance in k iterations as defined,D_e=Expected distance=root  mean dist


        }

        D_e = sqrt(D / k);

  printf ( " Expected Distance is %lf\n", D_e);














































 return 0;
 }
