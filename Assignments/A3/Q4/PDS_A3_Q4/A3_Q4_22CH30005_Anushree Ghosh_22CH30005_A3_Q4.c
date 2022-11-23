#include<stdio.h>
 
 int main(){

 float bill;
 int units;
 printf("enter values of units");
 scanf("%d",&units);

 if(units<=100){
 bill=50;
 printf("%f",bill);
 }else if(units<=200){
 bill=((50+((units-100)*0.75))*1.2);
 printf("%f",bill);
 }else if(units<=300){
 bill=((50+(100*0.75)+((units-200)*1.20))*1.2);
 printf("%f",bill);
 }else{
 bill=(((50)+(100*0.75)+(100*1.20)+((units-300)*1.50))*1.2);
 printf("%f",bill);
 }

 return 0;
}


 
