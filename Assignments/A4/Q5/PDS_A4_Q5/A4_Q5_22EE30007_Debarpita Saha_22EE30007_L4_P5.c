/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-4
   Description-  program to find an approximate root of a cubic polynomial
 */ 
#include<stdio.h>
int main()
{
 int h, k, g, d;
double p1, p2, p3, x, m, i, j, a, b, c;//a<b

 printf("enter 4 integer coefficients lying in range [-5,5]:");
 scanf("%d %d %d %d", &h, &k, &g, &d);
for(i= -5; i<=5; i++){
 p1= h*i*i*i + k*i*i + g*i +d;
if(p1<0){
a=i;//p(a)
printf("%f\n",a);
break;
}
}
for(j= -5; j<=5; j++){
 p2= h*j*j*j + k*j*j + g*j +d;
if(p2>0){
b=j;//p(b)
printf("%f\n",b);
break;
}
}
p1= h*a*a*a + k*a*a + g*a +d;
p2= h*b*b*b + k*b*b + g*b +d;
m= (p2-p1)/(b-a);
x= -b/m +a; // here x=c where the line cuts x axis so y=0 in (y-b)= m(x-a)
c=x;
p3= h*c*c*c + k*c*c + g*c +d;//p(c)
if((p3<= 0.001)&&(p3>0)){
  printf("root of polynomial is: %f\n", c);
}
 else{
if((p1*p3)>0){
 a=c;
p1= h*a*a*a + k*a*a + g*a +d;
p2= h*b*b*b + k*b*b + g*b +d;
m= (p2-p1)/(b-a);
x= -b/m +a; // here x=c where the line cuts x axis so y=0 in (y-b)= m(x-a)
c=x;
printf("root of polynomial is: %f\n", c);
p3= h*c*c*c + k*c*c + g*c +d;//p(c)

printf("value of polynomial at c is: %f\n", p3);
}
else{
b=c;
}
}

return 0;
}
 
 
