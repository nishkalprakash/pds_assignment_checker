/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

#include <stdio.h>
#include <math.h>
#include<time.h>
#include<stdlib.h>

int main(){
srand(time(NULL));

int p,n,k,i,j,d=0;
float D = 0, De;

printf("Enter the value of n :");
scanf("%d", &n);
printf("Enter the value of k :");
scanf("%d", &k);

 for(i=0; i<k; i++){
 d=0;
 for(j=0; j<n; j++){
  p = rand() & 1 ? -1 : 1;
d = d+p;
  }
 D= D+pow(d, 2);

 }
 De = sqrt(D/k);

 printf("Output : %f", De);




return 0;

}
