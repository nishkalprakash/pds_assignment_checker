//This program is written to calculate the speed of light using the formula mentioned below 
#include<stdio.h>
#include<math.h>
int main()
{
float l,m,s;// floating digits 
scanf("%f%f", &l,&m); // Reading Values i.e. putting them in 2 Byte buckets (in lay man term)
s=1/sqrt(l*m); // Function to calculate speed of light or any other mathematical calculation 
printf("%f",s);// Printing the results of our input 
return 0;
}
