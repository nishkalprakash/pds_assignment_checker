/*                                                      
NAME:: BONTHU MATTHEWS 
ROLL NUMBER:: 22PH10013 
ASSIGNMENT 5 
SECTION :: 14 
*/

#include <stdio.h>

int gcd(int a, int b)
{
  int x;
for (int i=1; i<=a&&i<=b; i++)
    {
      if (a%i==0 && b%i==0)
        {  
          x=i
        }
    return x;
    }


int coprime (int a, int b)
{
  int c;
  c= gcd(a,b);
  if (c==1)
  {
  return 1
}
else 
{return 0}

int main ( )

