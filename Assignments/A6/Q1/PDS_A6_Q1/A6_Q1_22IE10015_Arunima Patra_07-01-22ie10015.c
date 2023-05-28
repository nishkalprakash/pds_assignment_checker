//sec 2
//Assignment no-7
//Roll no-22IE10015
//Name-Arunima Patra
//Question no-1
#include<stdio.h>

long long int fact(int n){
     if(n==1){
        return 1;
     }
int prod=n*fact(n-1);
    return prod;
}
float pow(float x, int n){//It was showing some error because of math.h function that is why i have taken a different name
    if(n==0){
        return 1;
    }
    float power=x*pow(x, n-1);
return power;


}
double i_sin(double x){

   double sum=0;
   double term =x*3.1415926535/180;
   for(int i=0; i<10; i++){
       sum=sum+term;
       term =term*pow(x*3.14/180,2)/((2*(i+1))*((2*(i+1))+1));
       term=term*(-1);
   }
   return sum;

}
double r_sin(double x, int i){

     if(i==1){
        return x*3.1415926535/180;
     }
    else{
       return pow(-1, i+1)*pow(x*3.1415926535/180, 2*i-1)/fact(2*i-1) +r_sin(x, i-1);
    }

}
int main(){

  double x;
  printf("Enter the value:");
  scanf("%lf", &x);

  printf("%lf\n", i_sin(x));
  printf("%lf\n", r_sin(x, 10));
  return 0;


}
