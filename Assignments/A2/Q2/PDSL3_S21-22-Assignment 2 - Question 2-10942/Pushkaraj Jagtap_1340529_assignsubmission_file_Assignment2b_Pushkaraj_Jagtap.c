/* Name=Pushkaraj Jagtap
   Roll no.= 21MF3IM12
   Section=3
   Package= Code Blocks
   ASSIGN CLASS=5
   */

#include <stdio.h>
#include <math.h>
#include<time.h>
#include<stdlib.h>
int main() {
     srand(time(NULL));
     int n,k,p,a,i,j,s;
     float m=0;
     a=0;
     printf("n:");
     scanf("%d",&n);
     printf("Enter the value of k:");
     scanf("%d",&k);
     for (i=0;i<k;i++){
         s=0;
         for (j=0;j<n;j++){
             p = rand() & 1 ? -1 : 1;
             s+=p;

         }
         a+=pow(s,2);
     }
     m=sqrt(a/(float)k);
     printf("Total distance is %f",m);


    return 0;
}
