/* NAME: ABHIJIT KUMAR
ROLL NO. 22IM10001
SECTION 14
LAB 5:ARRAY AMD FUCTION
TOPIC- Checking if two numbers are co-prime or not*/

#include<stdio.h>
int gcd(int,int);
void CoPrime(int,int);
void pair(int);
int main()
{
int n,i;
printf("Enter the number of integers in array : ");
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
printf("Enter the number : ");
scanf("%d",&a[i]);
}
return 0;
}



