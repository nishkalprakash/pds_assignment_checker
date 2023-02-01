#include <stdio.h>

int fibo(int n) {
int x;
int y;
int i;

if(i==0) {
return 0;
}

if(i==1) {
return 1;
}
int fibonm1 = fibo(n-1) ;
int fibonm2 = fibo(n-2) ;

for(i=2; i<=n; i++) {
fibo(i) == fibo(i-1) + fibo(i-2);
}

for(i=0; i<=n; i++) {
if(x == fibo(i)) {
y == 1;
}
}

for(i=0; i<=n; i++) {
if(x != fibo(i)) {
y == 0;
}
}

return y;
}

int main()
{
int y;
int n;
printf("enter the value of n : ");
scanf("%d", &n);

int x;
printf("enter the value of x : ");
scanf("%d", &x);

printf("output 1 resemble yes \n");
printf("output 0 resemble no \n");

fibo(n);
printf("%d \n",y);

return 0;
}
