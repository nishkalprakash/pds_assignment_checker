//section 14
//name Asis Layek
//roll no. 22MF10007
//ASSIGNMENT 5 
//TOPIC FUNCTIONS #include<stdio.h>

#include<stdlib.h>


int main() {

int x;

printf(" enter your favourite no. for the expression of x in the polynomial");

scanf("%d",&x);

int n;

printf(" enter your favourite no. for the degree of the polynomial");

scanf("%d",&n);

int i;
float sum, term ;

sum = 0.0 ; term =1.0 ;

for ( i=1; i<=n; ++i) {

sum += term;

term *= x/i ;

}

printf("%f\n", sum);

return 0;

} 
