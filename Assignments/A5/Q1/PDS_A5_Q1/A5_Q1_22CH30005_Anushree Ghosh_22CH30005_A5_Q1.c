/*
SECTION 14
ROLL NO 22CH30005
NAME ANUSHREE GHOSH
assignment 5
*/

#include<stdio.h>
 

int power(int x,int n);
int power(int x,int n) //declaring power function
{
 int y=1;
 int i;
 for(i=0;i<n;i++)
{
 y=y*x;
}
return y;
}
 int fact( int n) //declaring factorial
{
 int y,i,j;
 y=n;
 j=1;
 for(i=0;i<n;i++)
{
 j=j*y;
 y++;
}
return j;
}


int main()
{
 int x,n,i;
 float sum=0;
 printf("enter the values of x and n");
 scanf("%d%d",&x,&n);
 for(i=0;i<n;i++)
{
 sum=sum+(power(x,i)/fact(i));
}
 printf("sum=%f",sum);
}


