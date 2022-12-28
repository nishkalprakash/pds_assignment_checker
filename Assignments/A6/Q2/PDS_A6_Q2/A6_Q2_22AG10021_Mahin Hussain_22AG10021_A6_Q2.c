/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:6
Description: Program to print Co-Prime pairs.
*/



#include <stdio.h>
int gcd(int m,int n)         //function to compute gcd using recursion
{
while(m!=0&&n!=0)
{
if(m==n)
return m;
else if(m>n)
{
m=m%n;
return gcd(m,n);
}
else if(m<n)
{
n=n%m;
return gcd(m,n);
}
}
if(m==0)
return n;
else if(n==0)
return m;
}
void CoPrime(int a,int b)     //function to find if 2 numbers are co-prime or not
{
 if(gcd(a,b)==1)  //check for coprime
 {  
   printf("(%d  %d) \t",a,b); 
 }
}
void pair(int a[])         //function for making pairs
{
 for(int i=0;i<5;i++)    //loop used to make pairs
 {
  for(int j=i+1;j<5;j++)
   CoPrime(a[i],a[j]);
 }
}
int main()
{
 int f=0,i,c,b[5];
float a[5];
 for(i=0;i<5;i++)       //reading numbers in array
{
  scanf("%f",&a[i]);
c=a[i]-(int)a[i];       //check for floating number
b[i]=a[i];
if(a[i]<0||c!=0)      //checking invalid inputs
f++;
}
if(f==0)     
 pair(b);    //sending array to the function void pair 
else
printf("Invalid Entries:ALL should be positive integers");
 return 0;
}
