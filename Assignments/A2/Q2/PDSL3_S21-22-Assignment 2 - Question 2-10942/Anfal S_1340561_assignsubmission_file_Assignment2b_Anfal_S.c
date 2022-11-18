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
#include<time.h>
#include<stdlib.h>

int main()
{
srand (time(NULL));
int p,k,n,i,j;
float D=0,dist,f=0;
printf("Enter the value of n and k\n");
scanf("%d%d",&n,&k);
for (i=1;i<=k;++i)
{
{for (j=1;j<=n;++j){
p=rand()&1?-1:1;
f=f+p;
}}
D=f*f+D;
f=0;
}
dist=sqrt(D/k);
printf("Average distance= %f",dist);
return 0;
}
