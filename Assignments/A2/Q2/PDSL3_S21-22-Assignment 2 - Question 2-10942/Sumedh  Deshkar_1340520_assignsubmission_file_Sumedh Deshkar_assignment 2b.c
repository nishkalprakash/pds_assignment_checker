/*
Name: Sumedh Deshkar
Roll no.:21MI33023
section: 3
Department : Mining Engineering
*/

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){


int n,k;
double D=0;
srand(time(NULL));

printf("Enter the value of n : ");
scanf("%d",&n);

printf("enter the iteration number k : ");
scanf("%d",&k);





for (int count=0;count<k;count++){

 int dn=0; for (int count=0;count<n;count++)
 {
   int p=rand()&1?-1:1 ;





    dn=p+dn;
    // printf("%d\n",dn);

 }
  D=dn*dn+D;
  // printf("%lf\n",D);








}


// printf("%lf%d",D,k);




double DE;
DE= sqrt(D/k);

printf("%lf",DE);



return 0;





}


