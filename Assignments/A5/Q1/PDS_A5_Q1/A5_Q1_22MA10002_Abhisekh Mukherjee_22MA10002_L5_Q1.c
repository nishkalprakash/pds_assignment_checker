
/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:5
q:1
description:                                                */
 

#include<stdio.h>
int power(int x,int n);
int fact(int n);
int main(){
int a,b,n,x;
float sum=0;
printf("enter the value of x\n"); 
scanf("%d",&x); // enter the input 
printf("enter the number of terms you want\n");
scanf("%d",&n); // input the no of terms
for(int j=2;j<=n;j++){

a=power(x,n);  // function calling
b=fact(n);
sum=sum+(float)a/b;
}
printf("the sum is %f\n",sum);
return 0;
}
int power(int x,int n){
int y=1;
for(int i=2;i<=n;i++){
y=y*x;

return y;
}
}
int fact(int n){
int z=1;
for(int i=2;i<=n;i++){
z=z*(i-1);
return z;
}
}




