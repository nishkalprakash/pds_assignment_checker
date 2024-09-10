#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main() {
const int A=3, N=3 ,B=3;
float Filter[N];
int Bin_A[A];
int Bin_B[B];
double y;
srand(42);
for(int i=0;i<=N;i++){
int x=rand() % 100 + 1;
printf("Random Number: %d\n", x);
for(int k=1;k<=x;k++){
y+= ((pow(-1,k+1)*(k*k))/(2*k+1))+cos(x/2);
Filter[i]=y;
}
printf("value of y is %lf:\n" ,y);
}
for(int j=0;j<=A;j++){
for(int i=0;i<=N;i++){
int x=rand() % 100 + 1;
printf("Random Number1 : %d\n", x);
for(int k=1;k<=x;k++){
y+= ((pow(-1,k+1)*(k*k))/(2*k+1))+cos(x/2);
if(y>Filter[i]){
Bin_A[i]=x;
i++; 
}
else
Bin_B[i]=x;
i++;


}
}
}


}







