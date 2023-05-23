#include<stdio.h>
#include<time.h>
/*
   sec-2
   Assignment no.- 7
   Roll no- 22IE10035
   Name- Roctotpal Sandilya
   Que no.- 1
*/

long long int fact(int n){
if(n==0) return 1;
else return n*fact(n-1);
}

float pow(float x, int n){
if(n==0) return 1;
else return x*pow(x,n-1);
}

double i_sin(double x){
double sum =0;
for(int i=1; i<30; i++) sum+= pow(-1,i+1)*pow(x*3.1415926535/180,2*i-1)/fact(2*i-1);
return sum;
}

double r_sin(double x, int i){
if(i==1) return x*3.1415926535/180;
else return pow(-1,i+1)*pow(x*3.1415926535/180,2*i-1)/fact(2*i-1) + r_sin(x, i-1);
}

int main(){
clock_t start,end;
double cpu_time_used_i, cpu_time_used_r;
float x;
scanf("%f", &x);

start = clock();
printf("%lf ", i_sin(x));
end = clock();
cpu_time_used_i = ((double)(end-start))/CLOCKS_PER_SEC;

start = clock();
printf("%lf ", r_sin(x, 30));
end = clock();
cpu_time_used_r = ((double)(end-start))/CLOCKS_PER_SEC;

printf("\nDifference in time between recursive and iterative approach %lf\n", cpu_time_used_r-cpu_time_used_i);

return 0;
}
