#include<stdio.h>
#include<math.h>
int j=1,num_digits=0;
int digits(int n)
{

   if(n/j>0){
   num_digits++;
   j=j*10;
   digits(n);
   }
   else
   return num_digits;
 }
void ispalindrome(int n)
{
int temp;
temp= digits(n);
temp--;
if(temp==0)
{
   printf("number is palindrome");
}
else if((n/(int)pow(10,temp))==n%10)
{
n=n-((n/(int)pow(10,temp))*pow(10,temp));

n=n/10;

ispalindrome(n);
}
else
printf("number is not palindrome");
}
int main()
{
int n;
printf("enter any real number:");
scanf("%d",&n);
ispalindrome(n);
}

   

