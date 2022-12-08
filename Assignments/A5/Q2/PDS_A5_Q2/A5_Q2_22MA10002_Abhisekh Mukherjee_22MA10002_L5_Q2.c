/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002
Assingment no:5
q:2                              */
#include<stdio.h>
void coprime(int a,int b);
int gcd(int a,int b);
void pair(int a,int b);
int main()
{
int n=5,f,a,b; 
int A[5];  //declaring the array
for(int i=0;i<5;i++){
scanf("%d",&A[i]);
}

f=gcd(a,b);  // calling the fuction
coprime(a,b);
pair(a,b);






return 0;
}
int gcd(int a,int b){
int  c,d,A[5];
for(int i=0;i<5;i++){  // loops
for(int j=0;j<5;j++){
do{
a=A[i];
b=A[j];
c=a%b;
d=a/b;
b=c;
a=b;
}while(c!=0);
}
}

return d;
}
void coprime(int a,int b){
int test=0,f;
if(f==1){
test=1;
}
  
}
void pair(int a,int b){
int A[5],test;
if (test==1){
for(int i=0;i<5;i++){ //loops
for(int j=0;j<5;j++){
printf("%d and %d are coprime",A[i],A[j]); // printing the pairs 
}
}
}
}







