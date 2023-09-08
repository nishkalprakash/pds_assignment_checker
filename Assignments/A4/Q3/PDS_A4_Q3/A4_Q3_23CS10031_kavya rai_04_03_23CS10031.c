//kavya rai
//23CS10031
#include<stdio.h>
#include<math.h>
int main()
{
  int a, t,r,c,s,b,d,m=0,sum=0;
  
  printf("Enter a no.:");
  scanf("%d",&a);
  t=a;
  b=a;
  while(b>0)
  {
   d=b%10;
   m=m+1;
   b=b/10;
  }
c=m-1;
  while(a>0)
    {
      
      r=a%10;
      sum=sum+r*pow(10,c);
      a=a/10;
      c--;

    }
 
  if(t==sum)
    printf("%d is a palindrome no.",t);
  else
    printf("%d not a palindrome no.",t);
}
