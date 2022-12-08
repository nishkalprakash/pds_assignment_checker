#include <stdio.h>

int power(int , int );

int fact (int );

float term;
float sum =0;

int main()

{

int x;
int t;

printf("enter value of x :  ");
scanf("%d", &x);

printf("enter value of t : ");
scanf("%d", &t);

power(x,t);

printf("the sum of series is %f", sum  );

return 0;

}


int power(int x, int t) {

for(int n=1;n<=t;n++) {
int fact =1;
for(int i=1; i<=n; i++) {
fact = fact*i;

term = (x^n)/fact ;

sum = sum + term  ;

}
}


return sum ;

}

