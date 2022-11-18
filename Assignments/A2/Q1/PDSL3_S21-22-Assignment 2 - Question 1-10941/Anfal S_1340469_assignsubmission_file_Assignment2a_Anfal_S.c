/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Assignment class: 1
Operating System: windows
*/

#include<stdio.h>
#include<math.h>
int main()
{
int k,f;
float z,s,x;
printf("Enter the value of z and k\n");
scanf("%f%d",&z,&f);
for (k=1;k<=f;++k)
{
    s= sqrt(z);
    x=z-s;
    if (x<0) x=(-x);
    if (x==z) {s=s-(1/k);
    x=z-s*s;}
    if (x<0) x=(-x);
    printf("(%f,%d)",x,k);
    z=x;
    if (z==0) break;
}
return 0;
}
