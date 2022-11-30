/* Section 14
   roll no- 22EE30007
   name- Debarpita Saha
   Assignment no-4
   Description-  program to displaythe sum of digits
 */ 
#include<stdio.h>
int main()
{
 int n,a;
int sum=0;
printf("enter a number from -999999 to 999999:");
 scanf("%d", &n);
 while(n!=0){
 a= n%10;
 sum = sum+a;
 n=n/10;
}
printf("sum of digits is:%d", sum);
return 0;
}
