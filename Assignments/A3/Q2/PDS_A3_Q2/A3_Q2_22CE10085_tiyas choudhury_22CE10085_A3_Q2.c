/*
   Section 14 
   Roll No : 22CE10085
   Name : Tiyas Roy Choudhury
   Assignment No : 3
   Description : Program  to enter a two digit nos between 20 and 99 and print in words 
*/
#include<stdio.h>
int main()

{
int dig1;
int dig2;
  printf("Enter  the first digit of a number between 20 and 99");
  scanf("%d",&dig1);
  printf("Enter  the second digit of a number between 20 and 99");
  scanf("%d",&dig2);

if (dig1==2)
{
printf("Twenty");
}
else if (dig1==3)
{ 
 printf("Thirty");
}
else if (dig1==4)
{
 printf("Forty");
}
else if (dig1==5)
{
  printf("Fifty");
}
else if (dig1==6)
{
 printf("Sixty");
}
else if (dig1==7)
{
  printf("Seventy");
}

else if (dig1==8)
{
printf("Eighty");
}
else if (dig1==9)
{
 printf("Ninety");
}
else 
{
 printf("Invalid Input");
}


if (dig2==1)
{
 printf("One");
}
else if (dig2==2)
{
printf("Two");
}
else if (dig2==3)
{
 printf("Three");
}
else if (dig2==4)
{
printf("Four");}
else if (dig2==5)
{
printf("Five");
}
else if (dig2==6)
{
printf("Six");
}
else if (dig2==7)
{
printf("Seven");
}

else if (dig2==8)
{
printf("Eight");
}
else if (dig2==9)
{
printf("Nine");
}
else
{
printf("Invalid Input");
}
 
return 0;
}



