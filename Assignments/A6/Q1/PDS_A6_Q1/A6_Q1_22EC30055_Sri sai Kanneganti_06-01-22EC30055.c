#include<stdio.h>
#include<time.h>
long int fact(int n)
{
    if(n>1){
  long int a=n ;
  a=a*fact(n-1);
  return a ;
    } else
    {
      return 1 ;
    }
}

float pow(float x,int n)
{
    if(n==0)
    {
        return 1 ;
    }
  float a ;
  a=x*pow(x,n-1);
  return a ;
}
double i_sin(float x)
{
  double a=0 ;
  int i=0 ;
  while(1)
    {
      a=a+(pow(-1,i)*pow(x,2*i+1)/(double)fact(2*i+1)) ;
      i++ ;
      if((pow(x,2*i+1)/(double)fact(2*i+1))<0.000001)
        {
          break ;
        }
    }
    return a ;
}
double r_sin(float x,int i)
{
    if((pow(x,2*i+1)/(double)fact(2*i+1))<0.000001)
        {
          return 0 ;
        }
  double a ;
  a=(pow(-1,i)*pow(x,2*i+1)/(double)fact(2*i+1))+r_sin(x,i+1);
   return a ;
}

int main()
{
    clock_t start,end ;
    double cputime1,cputime2 ;
 float x ;
 scanf("%f",&x);
 x=x*3.1415926535/180 ;
 start = clock();
 printf("%lf",i_sin(x));
 end = clock();
 cputime1 = ((double)(end -start))/CLOCKS_PER_SEC ;
  start = clock();
 printf(",%lf",r_sin(x,0));
 end = clock();
 cputime2 = ((double)(end -start))/CLOCKS_PER_SEC ;
 printf("\n%lf,%lf",cputime1,cputime2);
 printf("\ndifference between time of exicution %lf",cputime1-cputime2);
 return 0 ;
}
