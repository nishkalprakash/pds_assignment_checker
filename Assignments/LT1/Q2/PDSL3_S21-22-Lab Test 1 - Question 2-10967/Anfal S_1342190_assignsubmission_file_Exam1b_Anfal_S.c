/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Test: 1
Operating System: windows
*/

#include<stdio.h>

int main()
{
float a,b,d,e;
int c,k;
printf("Enter the values for x0, tolerence limit and maximum no of iterations\n");
scanf("%f%f%d",&a,&d,&k);
printf("(iteration no , x0 , x1 , error)\n");
for(c=1;c<=k;++c){
b=a-((a*a*a-25)/(3*a*a));
e=b-a;
if(e<0) e=(-e);
printf("(%d,%f,%f,%f)\n",c,a,b,e);
if(e<d) break;
a=b;
}
printf("square root =%f",b);
return 0;
}
