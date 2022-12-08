/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 5
desciption: TO FIND IF 2 NUMBERS ARE CO PRIME OR NOT
*/



#include<stdio.h>
void coprime(int a, int b) // DECLARING CO PRIME FUNCTION 
{
 if(a!=b)
 {
 for(int i=2; i<=a; i++)
 { 
  if(a%i==0)
  {
   if(b%i==0)
   { 
    printf("%d and %d are not coprime \n",a,b);
return; 
   }
   else
   {
    printf("%d and %d are coprime \n", a,b);
   }
  }
 
 }
 }
}
int main()                                 // DECLARING MAIN FUNCTION 
{
 int a, b, num[5];
 printf("enter 5 numbers");
 for(int i=0; i<5; i++)
  {
   scanf("%d", &num[i]);
  }
 for(int i=0; i<5; i++)
 {
  for(int j=0; j<i; j++)
  {
   if(num[i]!=num[j])
   {
   coprime(num[i], num[j]);
   }
   else 
    {
    printf("no coprime found \n");
    }
  }
 }
}







































