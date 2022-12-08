/*
 Section 14
 Roll No :22NA10022
 Name : Makrawat Singh
 Assignment No : 5
 Description : Program to find the sum of the first n terms of the following series 
*/

#include<stdio.h>
#include<math.h>

double power(int x,int n){      //making the power funtion
     double c=1;
     for(int i=0;i<n;i++){
        c=c*x;
     } 
     return c; 
}

double fact(int n){             //making the factorial funtion
     double c=1;
     for(int i=1;i<=n;i++){
         c=c*i;
     }
     return c;
}
       
int main(){
     double sum=1;
     int x,n;
     scanf("%d%d",&x,&n);       //taking the input from the user
     for(int i=1;i<n;i++){
         sum=sum+power(x,i)/fact(i);
     }
     printf("%lf",sum);            //printing the required output
}
