#include<stdio.h>
#include<time.h>
long int fact(int n)//to calculate factorial of n
    {
        if(n==1)return (1);
        else
        return (n*fact(n-1));
    }
float pow(float x,int n)//to calculate value of x raised to power n
{
   if(n==0)return(1);
   else
   {
       return x*pow(x,n-1);
   }
}
double i_sin(double x)//to calculate value of sinx using iterative function
{
   double value=0,a1,a2;
   int k=1,a3;
   x=x*(3.1415926535/180.0);
   for(int k=1;k<10;k++)//here the value of k cannot be accessed by computer more than a certain limit due to which a slight difference in the value is there
   {
    a1=pow(x,k);
   a2=pow(-1,k+1);
   a3=fact(2*k-1);
    value=value+((a1*a2)/(double)a3);
   }

}
double r_sin(double x,int k)//here the VALUE OF K UPTO WHICH SINX FUNCTION WILL BE TAKEN
{
  if(k==1) return x*3.1415926535/180;//X CONVERTED IN RADIANS
  else             // x needs to be converted in radians during the iteration.
  {
      return pow(-1,k+1)*pow(x*3.1415926535/180,2*k-1)/fact(2*k-1)+r_sin(x,k-1);
  }
}
int main()
{
    clock_t start,end;
    double cpu_time_usedi1,cpu_time_usedr1;
    double x;
    printf("enter the value of x\n");
    start=clock();
    scanf("%lf",&x);
    printf("ITERATIVE=%lf\n",i_sin(x));
    /*part of the program whose CPU time is to be calculated*/
    end=clock();
    cpu_time_usedi1=((double)(end-start))/CLOCKS_PER_SEC;
    printf("CPU time 1 =%lf\n",cpu_time_usedi1);
    start=clock();
    printf("RECURSIVE=%lf\n",r_sin(x,5));
    end=clock();
    cpu_time_usedr1=((double)(end-start))/CLOCKS_PER_SEC;
    printf("CPU time 2 =%lf\n",cpu_time_usedr1);
    printf("difference in cpu time is %lf",cpu_time_usedi1-cpu_time_usedr1);
return 0;
}
