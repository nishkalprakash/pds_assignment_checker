/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 4
 Description : Program that prints out an approximate root of cubic polynomial
*/
#include<stdio.h>
#include<math.h>

int main(){
     double m,d,n,o;
     printf("Enter coefficient of x^0:"); 
     scanf("%lf",&o);
     printf("Enter coefficient of x^1:");
     scanf("%lf",&m);
     printf("Enter coefficient of x^2:");
     scanf("%lf",&d);     
     printf("Enter coefficient of x^3:");
     scanf("%lf",&n);
     double a=-1000,b=1000,c,p_a,p_b,p_c=1;
     while(p_c>0.001||p_c<-0.001){
           p_a=n*a*a*a+d*a*a+m*a+o;    //writing p(a)
           p_b=n*b*b*b+d*b*b+m*b+o;    //writing p(b)
           c=b-((p_b*(b-a))/(p_b-p_a));
           p_c=n*c*c*c+d*c*c+m*c+o;
           
           if((p_c*p_a)>0){
                a=c;      //updating the value of a to c
           }
           else{
                b=c;      //updating the value of b to c
           }
    }
    printf("Root of the polynomial:%lf",c);
                
         
}
