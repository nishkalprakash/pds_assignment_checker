#include<stdio.h>
int main(){
int n,S1,S2,S3,p,q,r,s,t,u;
printf("Enter a 3 digit integer: ");
scanf("%d",&n);
S1=(n*(n+1))/2;
S2=(n*(n+1)*((2*n)+1))/6;
p=n/100;
s=n%100;
q=s/10;
t=s%10;
printf("S1= %d\n",S1);
printf("S2= %d\n",S2);
printf("S3= %d",p+q+t);
return 0;
}
