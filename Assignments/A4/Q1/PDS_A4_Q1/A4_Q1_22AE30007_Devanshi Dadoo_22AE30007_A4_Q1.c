/*
section 14
roll no.: 22AE30007
name: Devanshi Dadoo
Assigment 4
desciption: TO FIND FACTORS OF A GIVEN NUMBER
*/



#include<stdio.h>


int main()

{

int i,num;//DECLARING INTEGERS
printf("enter number between -999999 to 999999");
scanf("%d", &num);
if(-999999<=num<=999999) 
{
   if(num==0)
   {
     printf("0");
   }
    if(num<0)
    {
    num=num*-1;//TO MAKE NUMBER POSITIVE 
    }
    for(i=1; i<=num; i++)
    {
      if(num%i==0) // CONDITION TO FIND FACTORS 
        {
          printf("%d ", i);
        }
    }
}
else 
{
printf("enter a valid number");
}
}
