
/*section 14
roll no. - 22GG10024
name - KRISHNA GUPTA
assignment - 4
description - Finding the sum of digit  of a number*/
#include <stdio.h>
int main()
{
   int n,i,r,t=0,sum =0 ;
   printf("Enter a number :");   // inputing a number
   scanf("%d",&n);
 if (n<0)                     // making a negative number positive and putting the value of n in t 
{
 t=n*-1;
  }
else{
t=n;                       //putting the value of n in t
}
 
   while(t>0)               // computing the sum
{

   r = t%10;
   sum = sum +r;
  t = t/10;
  
}
if(n<0)
{
   sum = sum*-1;        // making sum negative if a number is negative
  printf("The sum of digits is: %d",sum);
   
    }
else
{  
   printf("The sum of digits is: %d",sum);
}
return 0 ;
}
