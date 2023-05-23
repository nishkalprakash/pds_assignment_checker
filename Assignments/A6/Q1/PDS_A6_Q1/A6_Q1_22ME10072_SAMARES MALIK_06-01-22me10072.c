/*name-samares malik
  roll no.22ME10072
  assignment 6
  question 1*/

#include<stdio.h>

#include<time.h>

long long int fact(int n){
    if((n==0)||(n==1)){
        return 1; //base case
    }
    return n*fact(n-1); //recursive call
}
float pow(float x,int n){
    if(n==0){
        return 1;//base case
    }
    if(n==1){
        return x; //base case
    }
    return x*pow(x,n-1); //recursive call
}
double i_sin(double x){ //using iteration
    double ans=x;
    double term = x;
    for(int i=1;i<26;i++){
        term *= (((-1)*pow(x,2)/fact(2*i+1))*fact(2*i-1));//for each term calculation
        ans += term;//adding those terms
    }
    return ans;//returning the answer
}
double r_sin(double x, int n){
    if(n==0){
        return x;// base case
    }
    return r_sin(x,n-1) + (pow(-1,n)*pow(x,2*n+1)/fact(2*n+1));//recursive call



}

int main(){
    double x;
    scanf("%lf",&x);
    x = x*3.1415926535/180;//converting x to radian
    clock_t start,end;
    double cpu_time_used_i,cpu_time_used_r;
    start = clock();//for the time difference in iteration
    printf("%lf",i_sin(x));
    end = clock();
    cpu_time_used_i = ((double)(end-start));
    start = clock();//for the time difference in recursion
    printf(",%lf",r_sin(x,12));
    end = clock();
    cpu_time_used_r = ((double)(end-start));
    printf("\n%lf",cpu_time_used_i-cpu_time_used_r);//printing the time diffrence


    return 0;





}
