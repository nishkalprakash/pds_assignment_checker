/*section:14
roll no.22MT30016
name:harsh
assignment:4
description no:factors */

#include <stdio.h>
int main ()
{
int n;
printf("enter a number n  \n");
scanf("%d",&n);
int i ;
if (n<0)
n = n*(-1);
      
for (i=1; i<n;i++)
     
{
if(n%i==0)
{
printf(" all the factor of n is %d\n",i);
}
}
return 0;
}
