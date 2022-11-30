#include<stdio.h>
int main()
{
int i,n=1;
scanf("%d",&i);
if (i==0)
printf("factor is = 0");
else
while (-1000000<i<1000000,n<1000000)
{
if (i%n==0)
{
printf ("factor is = %d \n",n);
}
n++;
}
return 0;
}


