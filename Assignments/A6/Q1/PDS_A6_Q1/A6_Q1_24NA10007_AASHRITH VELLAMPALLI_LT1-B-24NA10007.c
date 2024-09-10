#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{
srand(42);
int N=15,A=5,B=5,ctrA=0,ctrB=0,cA=0,cB=0; // defining variables
float Filter[N];
int Bin_A[A];
int Bin_B[B];

for(int i=0;i<N;i++) 
{
 float Y=0;
 int x = rand()%100 + 1;
 for(int k=1;k<=x;k++)
 {
  Y+= k*k/(2*k+1) -pow(-1,k)*k + sin(180/3.14*x/3);
 }
 Filter[i]=Y;
}

while(ctrA<A && ctrB<B) // condition such that both bin has maximum of 5 elements and if one bin is full the loop terminates
{
for(int i=0;i<N;i++)
{
 float Y=0;
 int x = rand()%100 + 1; // generating random int
 for(int k=1;k<=x;k++)
 {
  Y+= k*k/(2*k+1) -pow(-1,k)*k + sin(x/3);// given expression
 }
  
  for(int i=0;i<N;i++)
  {
   if(Y<Filter[i] && ctrA<A && ctrB<B)
   {
    Bin_A[cA]=x;
    ctrA++;
    cA++;
    break;
   }
   
   if(Y>Filter[i] && ctrA<A && ctrB<B)
   {
    Bin_B[cB]=x;
    ctrB++;
    cB++;  
    break;  
   }
  }
 
 }
 }

printf("Filter ");
for(int i=0;i<N;i++) printf("%f,",Filter[i]);
printf("\n"); // formating
printf("Bin_A ");
for(int i=0;i<ctrA;i++) printf("%d,",Bin_A[i]);
printf("\n");
printf("Bin_B ");
for(int i=0;i<ctrB;i++) printf("%d,",Bin_B[i]);// printing binA,binB and Filter
printf("\n");
return 0;
}

