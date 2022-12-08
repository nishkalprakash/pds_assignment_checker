/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 5
desciption: TO FIND THE SUM OF THE FIRST N TERMS OF A SERIES
*/



#include<stdio.h>
float powe(int x, int n) // DECLARING POWER FUNCTION
{
  int y=1;
  for(int i=0; i<n; i++)
   {
    y=y*x;
   }
 return y;
}




float facto(n) // DECLARING FACTORIAL FUNCTION
{
 int y,j;
 y=n;
 j=1;
 for(int i=0; i<n; i++)
 {
  j=j*y;
  y--;
 }
return j;
}

  


int main() // MAIN FUNCTION 

{
 int x, n;
 float sum=0;
 printf("enter the value of x and n");
 scanf("%d%d", &x, &n);
 for(int i=0; i<n; i++)
 {
  sum=sum+((powe(x, i))/facto(i));
 }
printf("answer=%f", sum);
return 0;
}
 

  
 
 

