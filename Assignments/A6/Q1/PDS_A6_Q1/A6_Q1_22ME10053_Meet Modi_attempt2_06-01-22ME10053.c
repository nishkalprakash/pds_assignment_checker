//Name -Meet Modi
//Roll No-22ME10053
//Lab 6-Q1) sinx value
//Ques-
#include<stdio.h>
#include<time.h>
#define PI 3.14159265


long long int fact(int n){
  if(n==0 || n==1) return 1;
  else return (n*fact(n-1));
}

float pow(float x,int n){
  if(n==0) return 1;
  else return (x*pow(x,n-1));
}

double i_sin(double x){
    int i,j;
    double prod=x;
    double sum = x;
    for(i=1;i<20;i++){
        prod *= -(x*x)/((2*i)*(2*i+1));
        sum += prod;
    }
    return sum;
}

double r_sin(double x,double sum){
    static int i=1,j=0;
    if(i>39) return sum;
    else{
        if(j%2==0){
            sum += (pow(x,i))/(fact(i));
        }
        else if(j%2==1){
            sum -= (pow(x,i))/(fact(i));
        }
        i+=2;
        j++;
        r_sin(x,sum);
    }
}

int main(){
    float x;
    printf("Enter the value of x in degrees:");
    scanf("%f",&x);
    x *= (PI/180);
    double sum_r = 0;
    clock_t start,end;
    double cpu_time_used_i,cpu_time_used_r;
    start=clock();
    printf("The value using function is %lf ",i_sin(x));
    end=clock();
    cpu_time_used_i =((double)(end-start))/ CLOCKS_PER_SEC;
    start=clock();
    printf("\n The value using recursive function is %lf ",r_sin(x,sum_r));
    end=clock();
    cpu_time_used_r =((double)(end-start))/ CLOCKS_PER_SEC;
    double diff = cpu_time_used_r - cpu_time_used_i;
    printf("\n CPU time difference is % lf",diff);

    return 0;
}
