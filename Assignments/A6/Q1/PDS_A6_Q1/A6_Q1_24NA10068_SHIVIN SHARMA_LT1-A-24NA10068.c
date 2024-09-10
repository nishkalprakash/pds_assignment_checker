#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(){
int N=20,A=9,B=8;

int a=1.0,z,i=0.0,y,c=0.0,w=0.0,n=0.0,m=0.0,b=0.0,d,l=0,F=0.0,G=0.0;
printf("The size of Filter is %d ", N);

printf("\nThe size of Bin_A is %d ", A);
printf("The size of Bin_B is %d", B);



float Filter[N];
int Bin_A[A],Bin_B[B];
while(w<N){
srand(42);
int x = rand() % 100 + 1;
printf("Random Number : %d\n", x);
float LB[x+1];
while (a<(x+1)){
z=(pow(-1,(a+1))*a*a)/(2*a+1);
LB[i]=z;
i++;
a++;
}
while(c<x){
LB[c+1]=(LB[c]+LB[c+1]);
c++;
}
y=(LB[x]+cos(x/2));
Filter[w]=y;
w++;}
while (n<N){
if(Filter[n]>m){
m=Filter[n];
}
n++;
}
d=Filter[0];
while(b<N){
if(d>Filter[b]){
d=Filter[b];}
b++;
}

int x = rand() % 100 + 1;
printf("Random Number : %d\n", x);
float br[l+1];
float ar[x+1];
a=1.0;
i=0.0;
c=0.0;
while (a<(x+1)){
z=(pow(-1,(a+1))*a*a)/(2*a+1);
ar[i]=z;
i++;
a++;
}
while(c<x){
ar[c+1]=(ar[c]+ar[c+1]);
c++;
}
y=(ar[x]+cos(x/2));
while(l>17){
if(y>d){
Bin_A[F]=y;
F++;}
else{
Bin_B[G]=y;
G++;}


l++;
 if(F>=A && G>=B)
break;
}
i==0;
printf("Filter ");
while(i<N)
{printf("%f", Filter[i]);
i++;
}
printf("\n Bin_A");
i==0;
while(i<N)
{printf("%d", Bin_A[i]);
i++;
}

printf("\n Bin_B");
i==0;
while(i<N)
{printf("%d", Bin_B[i]);
i++;
}




return 0;
}















