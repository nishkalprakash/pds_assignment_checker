#include<stdio.h>
#include<math.h>

int main(){

int n,S1,S2,S3,x,y,z,a,xyz;

printf( "\n Enter a three digit number: \n");
scanf("%d",&n);
S1 = n*(n+1)/2;
S2 = n*(n+1)*(n+n+1)/6;
x = n/100;
a = n%100;
y = a/10;
z = a%10;

S3 = x+y+z;

printf("\n The value of S1: %d \n ",S1);
printf("\n The value of S2: %d \n ",S2);
printf("\n The value of S3: %d \n ",S3);


getchar();
return 0;





}
