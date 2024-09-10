#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int k;
int A=5;
int B=5;
int N=5;
float filter[N];
int Bin_A[A],Bin_B[B];
srand(42);
int p=0;
double y;
int x;
for(int k=1;k<=x;k++){
int x=rand()%100+1;
y=(pow(k,2)/(2*k+1)-pow(-1,k)*k+sin(x/3));
p=p+y;
printf("%d",p);
}
return 0;
}
