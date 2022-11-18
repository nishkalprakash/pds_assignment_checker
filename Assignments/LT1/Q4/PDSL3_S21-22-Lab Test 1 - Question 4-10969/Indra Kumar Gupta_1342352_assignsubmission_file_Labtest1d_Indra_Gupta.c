/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 1 Question 4

#include <stdio.h>

int main(){
//assuming size of array 10
float x[10], y[10], s_x_m=0, s_y_m=0, x_m, y_m, m_n=0, m_d=0, m, b;
int i;
char sign;
printf("Enter 10 values for x coordinate:");
for(i=0; i<10; i++){

    scanf("%f", &x[i]);
}
printf("Enter 10 values for y coordinate:");
for(i=0; i<10; i++){

    scanf("%f", &y[i]);
}

for(i=0; i<10; i++){
    s_x_m+=x[i];
    s_y_m+=y[i];
}
x_m= s_x_m/10;
y_m=s_y_m/10;

for(i=0; i<10; i++){

 m_n+= (x[i]-x_m)*(y[i]-y_m);
 m_d+= (x[i]-x_m)*(x[i]-x_m);

}
m=m_n/m_d;

b = y_m-(m*x_m);
if(b<0){
    sign = '-';
}else{
sign = '+';
}
printf("m = %f\nb = %f\nline equation:y = %.3fx %c %.3f", m, b, m, sign, b);








































return 0;
}
