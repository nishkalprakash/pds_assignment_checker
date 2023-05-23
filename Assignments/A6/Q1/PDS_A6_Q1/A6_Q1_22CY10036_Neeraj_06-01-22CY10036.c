#include<stdio.h>
#include<time.h>
long long int fact(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*fact(n-1);

}

float pow(float x,int n)
{
    if(n==1)return x;
    if (n==0)return 1;
    else
        return x*pow(x,n-1);
}
 double i_sin(double x)
 {
     int k = 0;
     double sinx = 0;
  while(k<21){
             sinx = sinx+(double)pow(-1,k)*(double)pow(x,2*k+1)/(double)fact(2*k+1);
             k = k+1;
  }

     return sinx;
 }



int main(){
   float a;
   printf("enter a:");
   scanf("%f",&a);

   clock_t start,end;
   double cpu_time_used;
   start = clock();

   double sinx = i_sin((a*3.1415926535)/180);
   printf("sinx = %lf\n",sinx);

   end = clock();
   cpu_time_used = ((double)(end - start))/ CLOCKS_PER_SEC;
   printf("cpu_time_used is %lf", cpu_time_used);

   return 0;
}
