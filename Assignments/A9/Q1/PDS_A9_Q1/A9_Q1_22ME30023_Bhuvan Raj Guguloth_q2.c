#include<stdio.h>
/*NAME:Guguloth Bhuvan Raj
  rollno:22me30023 
  section:14 */
 typedef struct{
     float real;
     float imag;
 } complex;
  complex add(complex z1, complex z2){
  complex z3;
  z3.real=z1.real+z2.real;
  z3.imag=z1.imag+z2.imag;
  return z3;
 }

 int main(){
  complex a,b,Z;
  printf("Z1= ");
  scanf("%f %f,&a.real,&a.imag");
  printf("Z2= ");
  scanf("%f %f,&b.real,&b.imag");
  Z=add(a,b);
  if (Z.imag>=0)printf("Z=%1f+%1fi",Z.real,Z.imag);
  else printf("Z=%1f%1fi",Z.real,Z.imag);
  return 0;
 }
