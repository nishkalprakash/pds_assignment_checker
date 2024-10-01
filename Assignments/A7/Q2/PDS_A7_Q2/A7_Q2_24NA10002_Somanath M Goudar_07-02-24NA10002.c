#include<stdio.h>
int gcd(int a, int b){ // function o fin the gcd of two numbers
int temp;
if(a>b){
temp=a; a=b;b=temp;
}
while ((b%a)!=0)
{
temp=b%a;
b=a;
a=temp;
}
return a;
}
void Coprime(int a, int b){ 
// function to check if the two numbers are co prime
if( int gcd(a,b)==1){
printf ("a and b are co prime")
}
}
int main(){
int a[5],i,j,k;
for(i=0;i<5;i++){
scanf("%d",&a[i]);
}
for(j=0;j<4;j++){
for(k=1;k<5;k++){
void Coprime(int a[j],int a[k]);//calling the co prime function 
}
}
