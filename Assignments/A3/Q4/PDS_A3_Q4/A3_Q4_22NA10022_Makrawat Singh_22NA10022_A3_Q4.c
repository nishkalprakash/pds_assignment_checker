/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 3
 Description : Print the value of two digit integer in words
*/
 
#include <stdio.h>

int main(){
    int u,t,z;
    float m;
    scanf("%d",&u);
    t=u/100 ;
    z=u%100;
    if(t==0){
          m=50;
          }
    else if(t==1){
          m=50+z*(0.75);
          }
    else if(t==2){
          m=50+100*(0.75)+z*(1.20); 
         }
    else {
          m=50+100*(0.75)+100*(1.20)+(u-300)*(1.50); 
         }

    m=m+(m/5);    
    printf("Electricity bill is : Rs %f \n",m);
}                   
