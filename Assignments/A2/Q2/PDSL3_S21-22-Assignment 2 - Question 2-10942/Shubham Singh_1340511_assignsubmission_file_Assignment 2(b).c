/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Assignment Class: 2(b)
*/


#include <stdio.h>

int main(){

srand(time(0));

printf("Enter the value of n and k:\n");           //n is initial value
int n,k;                                           //k is no. of steps

scanf("%d%d",&n,&k);

int D;
float E;

for(int i=1;i<=k;i++){
int d=0,p;

for(int j=1;j<=n;j++){
int a=rand()%2;
if(a==0) p=1;
else p=-1;
d=d+p;
}
D=D+(d*d);    // adding squares
}
E=sqrt(1.0*D/k);
printf("Output : %f",E);
}
