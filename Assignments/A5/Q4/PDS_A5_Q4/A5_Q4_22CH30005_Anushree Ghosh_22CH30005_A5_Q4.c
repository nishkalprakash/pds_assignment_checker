/*
SECTION 14
ROLL NO 22CH30005
NAME ANUSHREE GHOSH
assignment 5
*/

#include<stdio.h>

 int main()

int min(int a[])
{ 
 int min=1;
 for(i=0;i<10;i++)
{
 if a[i]<min
{ 
 min=a[i];
}
}
}


 int max(int a[])
{
int max=100000;
for(int i=0;i<10;i++)
{
if a[i]>max
{ 
max=a[i];
}
return max;
}
}
int main()
{
int a[10],bins,bin1,bin2,bin3,bin4;
float div;
printf("enter the number of bins");
scanf("%d",&bins);
printf("enter 10 numbers");
for(int i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
div=(max(a)-min(a))/bins;
printf("%f ",div);
}
