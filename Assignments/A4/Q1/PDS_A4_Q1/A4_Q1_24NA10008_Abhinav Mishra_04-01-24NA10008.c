#include <stdio.h>
int main()
{
 int n,trm,trm1,trm2,i;
 printf("Enter a positive integer\n");
 scanf("%d",&n);
 if(n<=0) {
 printf("Invalid\n");
 }
else if (n>0) {
  trm1=1;
  trm2=-1;
  i=0;
 while(i<n) {
 
 trm = trm1 - trm2;
 printf("%d", trm);
 trm1=trm2;
 trm2=trm;
 i++;
 }
 }
 
 return 0;
 }
