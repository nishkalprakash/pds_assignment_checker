/*
Krithanya R
section 14
22HS10030
desc: To form pattern with 1 and 0 in odd even places
*/

#include <stdio.h>
int main()
{
int i,x=1,y,z=1;
printf("enter an input \n");
scanf ("%d",&i);
while (z<=i)
{
while (x<=z)
{
y=x%2;
if(y==0)
{
printf("0");
}
else
{
printf("1");
}
x=x+1;
}
z=z+1;
x=1;
printf("\n");
}
return 0;
}



