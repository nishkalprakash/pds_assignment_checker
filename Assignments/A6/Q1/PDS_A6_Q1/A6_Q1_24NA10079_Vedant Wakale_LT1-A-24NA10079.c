#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <math.h>

#define N 5
#define A 5
#define B 5
  
  
int main()

{


float Filter[N],y;
int Bin_A[A], Bin_B[B],x,k,i,q,r;
srand(42);   // for random number "x" generator
 

for(i=0;i<N;i++)
{
x=rand()% 100 + 1;
for (k=1,y=0;k<=x; k++)
{
		y = y + (((pow(-1,(k+1))*(k*k)) / ((2*k)+1)) + cos(x/2.0));
		// formula for computing the value of y
 
}
Filter[i]=y;
}
printf("Array Filter:");
for (i=0;i<N;i++) printf("%f/n",Filter[i]); //printing the Filter Array


//...........................PROGRAM (1) ENDS.......................................

srand(40);

for (i=0;i<500;i++)
x=rand()% 100 + 1;

for (k=1,y=0;k<=x; k++)
{
		y = y + (((pow(-1,(k+1))*(k*k)) / ((2*k)+1)) + cos(x/2.0));
}


for (i=0;i<500;i++)
x=rand()% 100 + 1;

if (y<Filter[0]||y<Filter[1]||y<Filter[2]||y<Filter[3]||y<Filter[04])
{
Bin_A[q]=x;
q++;
}


else if (y>Filter[0]||y>Filter[1]||y>Filter[2]||y>Filter[3]||y>Filter[04])
{
Bin_B[r]=x;
r++;
}

printf("Array Filter:");
for (i=0;i<A;i++) printf("%f",Filter[i]);
printf("\n");

printf("Bin_A : ");

for (i=0;i<A;i++) printf("%d",Bin_A[i]);
printf("/n");

for (i=0;i<B;i++) printf("%d",Bin_B[i]);
printf("/n");
}


