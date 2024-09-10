#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
# define N 10
# define A 5
# define B 3
int main(){

/*RANDOM NUMBER*/
{//srand(42);
int randomNumber = rand() % 100 + 1;
printf("Random number = %d\n", randomNumber);

int Filter[N], Bin_A[A], Bin_B[B];
int x, y, i, a, j, k, l, z, sum = 0;

/*FUNCTION*/
x = randomNumber;
for(j = 0;j < N;j++){

for(i = 1;i <= x;i++){
a = ((i*i)/(2*i + 1) - ((pow(-1,i)) * i));
sum += a;}
y = sum + sin(x/3);
Filter[j] = y;}

/*VALUES IN BIN_A AND BIN_< A*/

for (i = 1;i <= x;i++){
a = ((i*i)/(2*i + 1) - ((pow(-1,i)) * i));
sum += a;}
x = randomNumber; 
z = sum + sin(x/3);

for (j = 0;j < N;j++)
{
if (z < Filter[j] && k < A){
for (k = 0;k < A;k++){
Bin_A[k] = Filter[j];}
}
if(z > Filter[j] && l < B){
for (l = 0;l < B;l++){
Bin_B[l] = Filter[j];}
}}
/*printing arrays*/
if (k == A || l == B || j == N){
printf("Array FILTER: ");
for (j = 0;j < N;j++){
printf("%d ",Filter[j]);}

printf("\nArray A: ");
for (k = 0;k < A;k++){
printf("%d ",Bin_A[k]);}

printf("\nArray B: ");
for (l = 0;l < B;l++){
printf("%d ",Bin_B[l]);}
}}
return 0;}

