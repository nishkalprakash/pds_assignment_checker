#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
# define N 20
# define A 20
# define B 20

int ramNum(int a){ // random number generator with a  fixe seed(42)
srand(42);

int randomNumber = rand() % 100 +1;
printf("Random num: %d\n", randomNumber);
return 0;
}

void main(){
int x;
float Filter[20];
int Bin_A[20],i;
int Bin_B[20];

float b,y;
printf ("enter the value of x\n");

b=0.0000000;
for(int i=1;i<=x;i++){
ramNum(x);  // generating vlue x as a random number in the range[1 to 100]
b+=(pow((-1),i+1)*(i*i))/2i+1;

y=b+cos(x/2);
Filter[i]=y; // storing value of y to Filter array
}
printf("value of y: %lf",y); // computing value of y 
}













