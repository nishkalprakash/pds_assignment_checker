#include <stdio.h>
#include <math.h>

int main(){
// n is the number of times it strke the ground but here we assume that n is very large.
// d is the total distance

float y,n,d;



printf("enter height from which ball is thrown");
scanf("%f",&y);

printf("enter the value of n");
scanf("%f",&n);

d=(5*y)/3;

printf("total distance travelled %f",d);






return 0;
}
