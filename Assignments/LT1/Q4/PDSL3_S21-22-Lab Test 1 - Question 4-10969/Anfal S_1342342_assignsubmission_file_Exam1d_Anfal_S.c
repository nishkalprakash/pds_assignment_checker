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
float A[10], B[10];
int i,j,k,l;
float m,c,x,y,p,q,r,s;
printf("please enter the x coordinates of 10 points\n");
for (k=0;k<10;++k)
scanf("%f",&A[k]);
printf("please enter the y coordinates of 10 points\n");
for (l=0;l<10;++l)
scanf("%f",&B[l]);
for(i=0;i<10;++i){
x=x+A[i];
y=y+B[i];
}
p=x/10;
q=y/10;
for(j=0;j<10;++j){
r=(A[j]-p)*(B[j]-q);
s=(A[j]-p)*(A[j]-p);
}
m=r/s;
c=q-m*p;
printf("Reqiured line is y=%fx+%f",m,c);
return 0;
}
