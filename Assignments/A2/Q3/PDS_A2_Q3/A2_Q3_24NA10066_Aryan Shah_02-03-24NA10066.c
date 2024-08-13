#include<stdio.h>
#include<math.h>

int main(){
   int x0, y0,th, a ,t;  //Declaring variables with suitable types
   float u , x1 , y1,d;
   
   printf("Enter value of x0,y0,theta,a,u,t : \n ") ;
   scanf("%d%d%d%f%d%d",&x0,&y0,&th,&u,&a,&t) ; //input from user
   
   d = u*t + 0.5*a*t*t ; 
   x1 =  d*cos(th*(M_PI/180));  // Calculation of horizontal distance
   y1 = d*sin(th*(M_PI/180));  // Calculation of vertical distance
   
   printf("The final position is Q(%f,%f)", x1,y1) ;
}
