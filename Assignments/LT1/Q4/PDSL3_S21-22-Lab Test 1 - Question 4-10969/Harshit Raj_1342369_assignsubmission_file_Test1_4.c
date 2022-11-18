/*
Name- Harshit Raj
Dept- Chemical
Roll- 21CH30015
Package- Codeblocks
OS- Win 10
*/
#include <stdio.h>
#include<math.h>
int main() {

float x[10], y[10], x_s=0, y_s=0, m, m1, m2, b;

printf("enter ten 'x' coordinates: \n");
for(int i=0; i<10; i++){
    scanf("%f", &x[i]);
}
printf("enter ten 'y' coordinates: \n");
for(int i=0; i<10; i++){
    scanf("%f", &y[i]);
}

for(int i=0; i<10; i++){
        x_s+=x[i];
        y_s+=y[i];
}

printf("mean of x values is %f \n", (x_s)/10);
printf("mean of y values is %f \n", (y_s)/10);

for(int i=0; i<10; i++){
        m1+=(x[i]-x_s)*(y[i]-y_s) ;
        m2+=pow(x[i]-x_s,2);
}

m=m1/m2;
printf("slope m is= %f\n", m);

b=y_s-m*x_s;

printf("y intercept is= %f \n", b);

printf("the equation of the corresponding line is y=%fx+%f",m,b);


return 0;
}

