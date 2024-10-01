/*sum of series 1+x+(x*x)/2!+(x*x*x)/3!*/
//code creator Shatakshi Shukla
//Roll no 24NA10067

#include <stdio.h>
int power(int x,int n)//function to calculate the the powers of x and return it's value
{
int p=1;             //variable to store the product of powers of x   
 for(int i=1;i<=n;i++)
 {
   p*=x;       //loop to repetitively calculate powers of x
   }
   return p;  //function returns rhe value of p
   }
  int fact(int n)
  {
  if(n==0)   //if n equals 0 then fact returns 1
  return 1;
  else{
  int f=1;    //variable to store the factorial of numbers
    for(int i=1;i<=n;i++)     
    {
    f*=i;     //with the help of loop which keeps on incrementing i by 1 and keep on multiplying with value stored in f
    }
    return f; //this function returns f
    }
    }
    
int main()
{
int n,x;
 float S=0;
 scanf("%d %d",&x,&n); //user input value of x and n where n is till which term series should go
 for(int j=0;j<n;j++)
 {
 S+=((float)power(x,j)/fact(j));//calling power and factorial function to calculate the sum of series  AND TYPE CASTING POWER SO THAT SUM RETURNS FLOAT VALUE
 }
 printf("The sum of the series is:\n%.4f",S);
 return 0;
 }
