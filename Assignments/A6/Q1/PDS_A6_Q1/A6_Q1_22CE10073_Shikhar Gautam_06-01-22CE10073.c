#include <stdio.h>
#include <time.h>

int fact(int n); // defining a function to calculate the factorial of n

float calculatepow(float x, int n); // defining a function to calculate the power of x

double i_sin(double x); /* defining a function to calculate
the value of sin(x) with an iterative function*/

double r_sin(double x); /* defining a funtion to calculate
the value of sin(x) with an recursive function */

int main(){

int n; // taking input for variable n
float x; // taking input for variable x
printf("Enter a number : ");
scanf("%d", &n);

fact(n); // calling our function fact(n)

printf("Enter a number : ");
scanf("%f", &x);

calculatepow(x,n); // calling our function calculatepow(x,n)

}

int fact(int n){

if(n==1){

    return 1; // termination condition for recursive function
}

int factnm1=fact(n-1);
int factn=fact(n-1)*n;

return factn; // returning the value of calculated factorial

}

float calculatepow(float x, int n){

if(x == 0){

    return 1; // termination condition(1) for recursive function
}

if(x == 1){

    return 1; // termination condition(2) for recursive function
}

float p;
p = pow(x,n);

return p; // returning the value of our calculated power

}
