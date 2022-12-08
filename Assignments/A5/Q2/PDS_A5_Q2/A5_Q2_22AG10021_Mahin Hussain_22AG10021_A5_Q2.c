/*
Section 14
Roll No.:22AG10021
Name: Mahin Hussain
Assignment No.:5
Description: Program to test if the pair of number is co-prime or not.
*/

#include <stdio.h>
int f=0;            //global variabe to check if co-prime number are found or not
int gcd(int a,int b)        //function for gcd
{
 int temp;   //temporary variable to interchange values of a and b
 if (a>b) 
 {
  temp=a;      //finding gcd
  a=b; 
  b=temp;
 }
 while ((b%a)!=0)
 {
  temp=b%a;
  b=a;
  a=temp; 
 }
 return a;
}
void CoPrime(int a,int b)     //function to find if 2 numbers are co-prime or not
{
 if(gcd(a,b)==1)  //check for coprime
 {  
   printf("%d and %d are Co-Prime \n",a,b); 
   f++;
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
 int a[5];
 for(int i=0;i<5;i++)       //reading numbers in array
  scanf("%d",&a[i]);
 pair(a);    //sending array to the function void pair 
  if(f==0)
    printf("No Co-Prime found");
 return 0;
}
