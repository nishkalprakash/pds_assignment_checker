/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 1 Question 2

#include <stdio.h>
#include <math.h>

int main(){
float x0, x1, error, absx, max_iteration;
int i;
printf("Enter the first approximate value :");
scanf("%f", &x0);

printf("Enter the tolerance limit :");
scanf("%f", &error);

printf("Enter the max iteration :");
scanf("%f", &max_iteration);

printf("Iteration    x0       x1    Error\n");
for(i=1; i<=max_iteration; i++){
x1= x0-(((x0*x0*x0)-25)/(3*x0*x0));
absx = fabs(x1-x0);
printf("    %d     %f %f %f\n", i, x0, x1, absx);

if(absx<error){
break;
}
x0=x1;

}
printf("The square root is %f", x1);


return 0;

}
