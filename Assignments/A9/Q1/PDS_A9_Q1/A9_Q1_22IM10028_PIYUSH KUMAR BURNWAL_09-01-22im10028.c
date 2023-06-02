#include <stdio.h>//header file

int main()//main function
{
  int n,a=0,b=1,t=1;
  printf("Enter a number:");//accepting number from the user
  scanf("%d",&n);
  printf("Value of n: %d\n",n);
  if (n<0)//fibonacci number starts from 0 and are sum of positive numbers so are always positive
  {
      printf("Please give positive number");
  }
  else
  {
      if (n==a || n==b)//if n is 0 or 1 then directly print n
      {
          printf("%d is a Fibonacci number");
      }
      else
      {
          while(t<n)
          {

              a=b;
              b=t;
              t=a+b;//t is storing the next or nearest fibonacci number
          }
          if(t==n)
          {
              printf("%d is a Fibonacci number",t);//if t is equal to n that means n is a fibonacci number
          }
          else
          {
              printf("Nearest Fibonacci number is %d",(((t-n)<(n-(t-a)))?(t):((t-a))));//computing nearest fibonacci number by the help of ternary operator.
          }

      }



}
}
