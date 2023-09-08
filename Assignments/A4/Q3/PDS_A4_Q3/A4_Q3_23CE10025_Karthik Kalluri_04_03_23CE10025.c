#include <stdio.h>
#include <math.h>
int main()
{
  int a,c=1,i,x,b,s,y,d,sum=0;
  printf("Enter a number:\n");
  scanf("%d",&a);
  x=a;
  y=a;
  while(a>0)
    {
      a=a/10;
      c=c+1;
    }
  s=c;

  while(s>=0)
    {
      d=x%10;
      x=x/10;
      d=d*pow(10,s);
      sum=sum+d;
      s--;
      
     
    }
  
  if(y==sum)
    {
      printf("it is a palindrome number");
    }
  else if(a!=sum)
    printf("No");
  return 0;
}
      
      
      
