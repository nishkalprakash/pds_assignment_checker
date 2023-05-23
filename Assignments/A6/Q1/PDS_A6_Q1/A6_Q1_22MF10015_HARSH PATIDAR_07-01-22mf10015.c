//NAME : HARSH PATIDAR
// ROLL NO . : 22MF10015
// SECTION : 2
// PROBLEM 1
//DESCRIPTION ;

#include<stdio.h>
#include<limits.h>
#include<time.h>



long int fact(int n);
float pow(float x , int t );
double i_sinx(double x);
double r_sin(double x ,int  n);

int main(){
int n,y ;

float x,z;
double a,b;
clock_t start,end;
double cpu_time_used;
printf("enter value of n");
scanf("%d",&n);
printf("enter value of x");
scanf("%f",&x);
x=(x*3.1415)/180;
b=r_sin(x,4);
start = clock();
a=i_sinx(x);
end =clock();
cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
printf("%lf",cpu_time_used);

printf("the value of the function is %lf , %lf",a,b);
return 0;
}
long int fact(int n){
   if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
float pow(float x,int n){
    if (n==1)
        return x;
    else
        return (x*pow(x,n-1));

}
double i_sinx(double x){
    int i;
double sina=0.0;
for(int i=1;i<=4;i++){
 sina +=(double)(pow(-1,i+3)*pow(x,2*i-1)/fact(2*i-1));
}
 return sina;
}

double r_sin(double x,int n  )
{

  double sina=0.0;
        return 0;
    sina +=(double)(pow(-1,n)*pow(x,2*n-1)/fact(2*n-1));
    return sina;
}
