#include<stdio.h>
float sum(int n);

int main(){
float n;
printf("enter n [0-99999] ");
scanf("%f" ,&n);
printf("%f",sum(n));
return 0;
}

float sum(int n){
float x;
if(n==1 ||n==0){ //base condition
return 1;}
else
x=1.0/n +sum(n-1); //return main condition
return x;
}
