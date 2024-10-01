#include<stdio.h>
int fact(int n){ // defining the factorial function
   if (n==0) return 1;
   else {
     int facto=1;
     for(int i=1;i<=n;i++){
        facto*=i;}
     return facto;}   
  }
float power(int x,int n){  // defining the power function to evaluate x^n
   float b=1.0;
   if (n==0) return b;
   else {
     for(int i=1;i<=n;i++){
          b*=x;}
     return b;}     
}  

int main(){
  int x,n;
  float a;//  variable to store the value of the series 
  scanf("%d %d",&x,&n);
  for (int i=0;i<=n;i++){
      a+=(power(x,i)/fact(i));// calling the function 
  }
  printf("\n %f",a);     
  return 0;

}
