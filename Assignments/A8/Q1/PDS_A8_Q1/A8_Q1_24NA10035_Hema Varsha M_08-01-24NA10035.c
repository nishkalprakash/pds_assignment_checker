#include <stdio.h>
#include <math.h>
int digits(int n);
int ispalindrome(int n);
int main()
{
int n,d,r;
//read  a number
printf("enter a number\n");
scanf("%d",&n);
r=ispalindrome(n);// function call
if (r==1)
printf("palindrome");
else
printf("not a palindrome");    

return 0;
}
//function to find the no. of digits
int digits(int n)
{
 if (n==0)
     return 0;
 return 1+digits(n/10);//recursive call
 
}
//fuction to check palindrome
int  ispalindrome(int n)
{
int d1,d2,num,m,cnt;
num=n;
cnt=digits(num);
if (cnt==0)
  return 1;
d1=n%10;
for (int i=1;i<cnt;i++)
    num/=10;
d2=num;
//printf("%d",d2);
//d2=n/(int)pow(10,(cnt-1));
if (d1==d2)
   { 
    m=pow(10,(cnt-1));
    n%=m;
    n/=10;
    ispalindrome(n);//recursive call
  }
 }
  
 
