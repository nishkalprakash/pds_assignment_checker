/*
section 14
ROLL NO : 22CH10044
Name: Nitin
*/


#include<stdio.h>
int main()
{  int n;
   printf("Enter the value of n:-");
  scanf("%d",&n);
  int p;
  int A[n];

for(int i=0;i<n;i++)
{
  p=n%10;
  A[i]=p;
}
printf("digits in the number you entered are;-");
for(int i=0;i<n;i++)
{
  printf("%d",A[i]);
}

return 0;
}
