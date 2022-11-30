/*
Krithanya R
section 14
22HS10030
desc: To find factors of a number
*/



#include <stdio.h>
int main()
{
int i=1,n;
printf("enter a number");
scanf("%d",&n);
if (n<0);
{
n=n*-1;
}
while (i<=n)
{
if (n%i==0){
printf("%d\n",i);
i=i+1;}
else
i=i+1;
}
return 0;
}

