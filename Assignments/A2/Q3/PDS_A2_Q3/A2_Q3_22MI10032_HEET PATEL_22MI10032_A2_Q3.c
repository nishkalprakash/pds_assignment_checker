#include<stdio.h>

#include<math.h>

int main ()

{

   int a , b , c ;// to declare a , b , c variable

  scanf("%d%d%d",&a , &b , &c);// ask the user to put values 

int d = (-b + sqrt(b*b - 4*a*c) )/2*a;// formula

int e = (-b - sqrt(b*b - 4*a*c) )/2*a;

printf("%d%d" , d , e);// prints the roots

return 0;

}
