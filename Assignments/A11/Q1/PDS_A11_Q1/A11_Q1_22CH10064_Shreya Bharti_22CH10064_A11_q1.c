/*
Name: Shreya Bharti
Section: 14
Assignment: 11
Roll no.: 22CH10064
*/


#include <stdio.h>

float sum(int n){
float add;

if(n==1){
return 1.0;
}

else{
for(int i=n; i>1; i--){
add = sum(n-1) + 1.0/(n);
}
}

return add;
}


int main(){

int n;
printf("Enter n: ");
scanf("%d",&n);

float series;
series=sum(n);
printf("Sum: %f",series);

return 0;
}
