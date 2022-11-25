/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 3
   Description : Program  to enter valid time of day 
*/
#include<stdio.h>
int main()

{
 float E;
 float B;
 float TotB;

printf("Input total no of electric units");
scanf("%f",&E);

if(E<=100)
{
 B=50.0;
}
else if(E>100 && E<=200)
{
B=50 + (E-100.0)*0.75;
}
else if(E>200 && E<=300)
{
B=50 + 100* 0.75 + (E-200)*1.2;
}
else if(E>300)
{
B=50 + 100*0.75 + 200 * 1.2 + (E-300)*1.5;
}

TotB = B+(20.0/100)*B;

printf("Total electric bill is %f",TotB);
return 0;
}
 
