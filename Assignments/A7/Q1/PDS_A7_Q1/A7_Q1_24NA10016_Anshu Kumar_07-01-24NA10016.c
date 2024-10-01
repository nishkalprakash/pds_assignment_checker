# include<stdio.h>
# include<math.h>
int fact(int n){  // defining the factorial
int fact =1;
 for(int i=1;i<=n;i=i+1){
   fact = fact*i;}
   return fact;}
   float power(int x, int n){  // defining the power function 
   float b=1.0;
   if(n==0)
   return b;
   else{
   
   for(int i=1;i<=n;i=i+1){
   b=b*x;}
   return b;}
   }
   int main(){
   int x,n;
   float a=1;// define variable to store the value of the given series
   scanf("%d%d",&x,&n);
   for(int i=1;i<=n;i=i+1){
   a=a+(float)power(x,i)/fact(i); //calling the function
   }
   
   printf("%f\n",a);
   return 0;}
   
