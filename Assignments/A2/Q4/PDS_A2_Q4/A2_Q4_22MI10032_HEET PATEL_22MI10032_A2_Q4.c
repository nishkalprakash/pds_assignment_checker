#include<stdio.h>
#include<math.h>
int main()
{
 
float u , e , c; // to declare variable u , e , c
scanf("%f%f",&u,&e);// to ask user the value of u and e
c = 1/sqrt(u*e); // formula
printf("%f", c );// prints the value of light as per the data is given by user
return 0 ;
}
