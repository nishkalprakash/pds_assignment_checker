#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i, x,y, low=5000,high= 6000, sum=0,min=1000,ans, temp;
  for(i=0;i<20;i++)
    {
      x= (rand()%((high-low)+1))+low; //generating random numbers between 5000 to 6000
      printf("%d\n", x);
      sum=0;
      temp=x;
       while(x)
    {
      y= x%10; //extracting each digits from the given integer
       x=x/10;
  sum= sum+y; //adding all the digits in the integer
    }
  printf("Sum of digits of each number= %d\n", sum);
  if(sum<min)//checking the sum of digits of smallest number
    {
      min=sum;
      ans=temp;
    }
    }
  printf("The number %d is having the smallest sum of digits= %d", ans, min);                           ;
  return 0;
}
  
