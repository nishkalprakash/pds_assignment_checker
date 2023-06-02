/*Name: Abhiraj Ranjan
Roll Number: 22MI10002
Section: 2
Assignment: 9
Question: 1
Description: Fibonacci Number*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
int n,i;
long int f[60];
printf("Value of n: ");
scanf("%d",&n);
if(n<0){
    printf("Please give positive number\n");
    return 0;
}
f[0]=0;
f[1]=1;
for(i=2;i<60;i++){
    f[i]=f[i-1]+f[i-2];
}
int j;
for(j=0;j<60;j++){
    if(f[j]>n)
        break;
}
if(f[j-1]==n){
    printf("%d  is a Fibonacci number\n",n);
    return 0;
}
if(f[j]-n>=n-f[j-1])
    printf("Nearest Fibonacci number: %ld",f[j-1]);
else
    printf("Nearest Fibonacci number: %ld",f[j]);
return 0;
}
