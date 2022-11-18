/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main(){
srand(time(NULL));
int p,n,k,i,j;
double d,D,De;

D=0;
printf("Enter number of steps\n");
scanf("%d",&n);
printf("Enter number of iterations\n");
scanf("%d",&k);
for (i=0;i<k;++i){
      d=0;
     for (j=0;j<n;++j){
          p=rand()&1?-1:1;
          d+=p;}
     D+=pow(d,2);
}
De=sqrt((D/k));
printf("The expected distance is %lf",De);
}
