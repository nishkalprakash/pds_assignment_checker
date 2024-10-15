#include<stdio.h>
#include<math.h>
int digits(int n)//function for mentioning the no of digits
{
if(n==0) return 0;
return 1+digits(n/10);
}

int IsPalindrome(int n,int d)
{   
 if(d==0)  return 1;
   int f=n/(int)pow(10,d-1);
   int l =n%10;
   if (f!=l)
   return 0;
   n= n/10;
   IsPalindrome(n,d-1);

}
int main()
{
int n;
printf("Enter the natural number n :");
scanf("%d",&n);

 int d = digits(n);
printf("%d", d);//we get the no of digits 
if (IsPalindrome(n,d))
printf("Palindrome");
else
printf("Not Palindrome");
return 0;}
