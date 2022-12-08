/*section:14
roll no.22MT30016
name:harsh
assignment no:5
description:sum of series    
*/

#include<stdio.h>
#include<math.h>
float power(int x,int n)
{
  int p=1;
  int i;
  for(i=1;i<=n;i++)
  {
   p=p*x;
   }
   return p;
}
float fact(int n)
{
int prod=1;
int i;

for(i=1;i<=n;i++)
{
prod=prod*i;
}
return prod;
}
int main()
{
float sum=0.0;
int x,n;
printf("enter x and n");
scanf("%d %d",&x,&n);

int i;
for(i=0;i<n;i++)
{
  sum=sum+power(x,i)/fact(i);
}
printf("%f",sum);
return 0;
}

