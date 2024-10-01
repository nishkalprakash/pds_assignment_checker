#include<stdio.h>
int main ()
{


float x,value,total;
int n,count;


scanf ("%f",&x);
scanf ("%d",&n);

value = 1.0; total=0;

for (count = 1; count<=n; ++count)

{
   total += value;
   value *= x/count;
   
   }
   
printf(" output %f\n",total);
return 0;
}
