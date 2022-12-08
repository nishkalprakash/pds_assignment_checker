/*Section 14
  Name:Gurram Dhanunjay
  RollNo:22CS10029
  Assignment:5
  Description:Finding sum of given series using functions*/
#include <stdio.h>
int power(int x,int n)                          //Power funtion 
{
   int count=1,result=1;
   while (count<=n){
      result*=x;
      count++; }
   return result;
}
int fact(int n)                                //Factorial function
{
   int count=1,prod=1;
   while (count<=n){
      prod*=count;
      count++; }
   return prod;
}
int main()
{
   int x,n,i;
   float sum=1;
   int power(int,int);                        //Power and factorial functions prototypes
   int fact(int);
   printf("Enter x and no of terms :");
   scanf("%d %d",&x,&n);
   for (i=2;i<=n;i++) {
      sum+=(power(x,i-1)*1.0)/fact(i-1);}     //Using mixed arithmetic
   printf("Sum is %f\n",sum);
   return 0;
}

