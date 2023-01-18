/*Name:P.Sri Harsha Vardhan
Roll no:22MA10040
assignment:9
program 3
 */
#include<stdio.h>
struct complex{
float real;
float imag;
};
void sum(struct complex c1,struct complex c2)
{
printf("Z=%.2f+%.2fi",c1.real+c2.real,c1.imag+c2.imag);
}
void main()
{
struct complex c1,c2;
printf("Enter the complex numbers:Z1 ");
scanf("%f %f",&c1.real,&c1.imag);
printf("Enter the complex numbers:Z2 ");
scanf("%f %f",&c2.real,&c2.imag);
sum(c1,c2);
}
 

 

