/*
Name: Shreya Bharti
Section: 14
Assignment: 11
Roll no.: 22CH10064
*/


#include <stdio.h>

int fib(int n){
int fibb;
if(n==0) return 0;
if (n==1) return 1;

fibb = fib(n-2)+ fib(n-1);

return fibb;
}



int main(){

int n;
printf("Enter n: ");
scanf("%d",&n);

for(int i=0; i<12; i++){
int series= fib(i);

if(series==n){printf("Yes");
break;
}
else{printf("No");
continue;
}

}



return 0;
}
