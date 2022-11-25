/*

SECTION 14

Roll No:22EE10048

Name: Brij

Assignment NO: 3

Description-Program to write number in words

*/
#include <stdio.h>
int main()
{
int n;
printf("Enter number between 20 & 99\n");
scanf("%d",&n);
int fd=n/10,ld=n-(10*fd);
if(fd==2)
{
if(ld==0)
printf("Twenty");
if(ld==1)
printf("Twenty one");
if(ld==2)
printf("Twenty two");
if(ld==3)
printf("Twenty three");
if(ld==4)
printf("Twenty four");
if(ld==5)
printf("Twenty five");
if(ld==6)
printf("Twenty six");
if(ld==7)
printf("Twenty seven");
if(ld==8)
printf("Twenty eight");
if(ld==9)
printf("Twenty nine");
}
if(fd==3)
{
if(ld==0)
printf("Thirty");
if(ld==1)
printf("Thirty one");
if(ld==2)
printf("Thirty two");
if(ld==3)
printf("Thirty three");
if(ld==4)
printf("Thirty four");
if(ld==5)
printf("Thirty five");
if(ld==6)
printf("Thirty six");
if(ld==7)
printf("Thirty seven");
if(ld==8)
printf("Thirty eight");
if(ld==9)
printf("Thirty nine");
}
if(fd==4)
{
if(ld==0)
printf("Fourty");
if(ld==1)
printf("Fourty one");
if(ld==2)
printf("Fourty two");
if(ld==3)
printf("Fourty three");
if(ld==4)
printf("Fourty four");
if(ld==5)
printf("Fourty five");
if(ld==6)
printf("Fourty six");
if(ld==7)
printf("Fourty seven");
if(ld==8)
printf("Fourty eight");
if(ld==9)
printf("Fourty nine");
}
if(fd==5)
{
if(ld==0)
printf("Fifty");
if(ld==1)
printf("Fifty one");
if(ld==2)
printf("Fifty two");
if(ld==3)
printf("Fifty three");
if(ld==4)
printf("Fifty four");
if(ld==5)
printf("Fifty five");
if(ld==6)
printf("Fifty six");
if(ld==7)
printf("Fifty seven");
if(ld==8)
printf("Fifty eight");
if(ld==9)
printf("Fifty nine");
}
if(fd==6)
{
if(ld==0)
printf("Sixty");
if(ld==1)
printf("Sixty one");
if(ld==2)
printf("Sixty two");
if(ld==3)
printf("Sixty three");
if(ld==4)
printf("Sixty four");
if(ld==5)
printf("Sixty five");
if(ld==6)
printf("Sixty six");
if(ld==7)
printf("Sixty seven");
if(ld==8)
printf("Sixty eight");
if(ld==9)
printf("Sixty nine");
}
if(fd==7)
{
if(ld==0)
printf("Seventy");
if(ld==1)
printf("Seventy one");
if(ld==2)
printf("Seventy two");
if(ld==3)
printf("Seventy three");
if(ld==4)
printf("Seventy four");
if(ld==5)
printf("Seventy five");
if(ld==6)
printf("Seventy six");
if(ld==7)
printf("Seventy seven");
if(ld==8)
printf("Seventy eight");
if(ld==9)
printf("Seventy nine");
}
if(fd==8)
{
if(ld==0)
printf("Eighty");
if(ld==1)
printf("Eighty one");
if(ld==2)
printf("Eighty two");
if(ld==3)
printf("Eighty three");
if(ld==4)
printf("Eighty four");
if(ld==5)
printf("Eighty five");
if(ld==6)
printf("Eighty six");
if(ld==7)
printf("Eighty seven");
if(ld==8)
printf("Eighty eight");
if(ld==9)
printf("Eighty nine");
}
if(fd==9)
{
if(ld==0)
printf("Ninety");
if(ld==1)
printf("Ninety one");
if(ld==2)
printf("Ninety two");
if(ld==3)
printf("Ninety three");
if(ld==4)
printf("Ninetyfour");
if(ld==5)
printf("Ninety five");
if(ld==6)
printf("Ninety six");
if(ld==7)
printf("Ninety seven");
if(ld==8)
printf("Ninety eight");
if(ld==9)
printf("Ninety nine");
}
if(n<20)
printf("Invalid Input");
if(n>99)
printf("Invalid Input");
return 0;
}

