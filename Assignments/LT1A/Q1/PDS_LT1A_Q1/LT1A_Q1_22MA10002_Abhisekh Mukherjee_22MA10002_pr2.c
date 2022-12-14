/*section:14
name: Abhisekh Mukherjee
roll no:22MA10002

set :A                           */
#include<stdio.h>
int main()
{
int N, sum;// declaring a integer
printf("enter the integer\n");
scanf("%d",&N); // read the integer
for(int j=2;j<=N;j++){   // using for loop and nested loops
sum=0;                   
for(int i=1;i<j;i++){
if(j%i==0 && j>1){
sum=sum+i;
}
}

if (sum==j){
printf("%d\t",j);    // using  if else and primtimg the perfect number
}
}
if(N<=1){
printf("invalid input\n");
}
 return 0;
}


