#include<stdio.h>
int fact(int n)// function to find the factorial
{
int product=1;
int count;
for(count=1;count<=n;count++){
product=product*count;
}
return product;

}
int power(int x , int n)//function to find the x power n
{
int j,prod,y;
prod=1;
for(j=0;j<=n;j++){
prod=prod*x;
}
return prod;


}
int main(){
int x,n;
float sum=1;
int count;
printf("enter the input :" );
scanf("%d, %d" ,&x, &n);
 for(count=1;count<n;count++){
 sum=sum+((float)power(x,count)/fact(count));
 //calling the both factorial and power function
 }
 
 printf("%f",sum);
 }
 
