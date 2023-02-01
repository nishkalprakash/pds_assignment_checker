/*
name:ruchita umate
sec:14
rollno:22MI10051
assignment:11
*/

#include<stdio.h>
#define MAX=11

int fib(int n){

if(n==0)
return 0;
if(n==1)
return 1;

fibo = fib(i-2)+fib(i-1);

return fibo;
}

int main(){
int n,arr[15];
printf("Enter n :");
scanf("%d",&n);

for(int i=0;i<12;i++){
int series=fib(i);
scanf("%d",&arr[i]);
if(series==n){printf("yes");
break;
}
else{printf("No");
continue;
}
}
for(int i=0;
printf("%d",fib(n));
return 0;
}

