/*section 14
roll no. - 22GG10024
name - KRISHNA GUPTA
assignment - 4
description - Printing the digit name in reverse order*/
#include <stdio.h>
int main()
{
int i,t,r;
long int n;
printf("Enter a number :");
scanf("%ld",&n);
if (n>=0 && n<10000000000)
{
 t = n;
if(t==0)
{
   printf("Zero");
}
while(t>0)
{
  r= t%10;
t=t/10;
 switch(r)
{
case 0: printf("Zero ");
        break;
case 1: printf("One ");
        break;
case 2: printf("Two ");
        break;      
case 3: printf("Three ");
        break;
case 4: printf("Four ");
        break;
case 5: printf("Five ");
        break;
case 6: printf("Six ");
        break;
case 7: printf("Seven ");
        break;
case 8: printf("Eight ");
        break;
case 9: printf("Nine ");
        break;
}
}
}
else{
printf("Enter a positive number having less than or equal to 10 digits");
}

return 0;
}
