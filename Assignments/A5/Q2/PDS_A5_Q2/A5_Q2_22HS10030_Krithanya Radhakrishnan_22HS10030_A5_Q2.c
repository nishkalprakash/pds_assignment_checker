/*
name:Krithanya
sec:14
rollno.:22HS10030
assgnment no.:5
desc: sum of series using functions
*/

#include <stdio.h>
int main() 
{
int  A, B, t,gcd;
void coprime(int A, int B);
scanf("%d %d", &A, &B);
if (A > B) 
{
t=A;
A=B; 
B=t; 
}
while ((B % A)!=0)  
{
t=B%A;
B=A;
A=t;
}
gcd=A;
if (gcd==1)
{
printf("%d and %d are coprime",A,B);
}
return 0;}
