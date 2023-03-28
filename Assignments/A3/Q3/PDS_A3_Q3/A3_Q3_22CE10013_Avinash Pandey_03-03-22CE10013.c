#include<stdio.h>
int main(){
   
   float x1, x2, x3, y1, y2, y3, z1, z2, z3;
   
   printf("enter the coordinates of A( x1, y1, z1), B(x2, y2, z2), C(x3, y3, z3) in the specified order: x1, x2, x3, y1, y2, y3, z1, z2 , z3 ");      
          
   scanf("%f %f %f %f %f %f %f %f %f", &x1, &x2, &x3, &y1, &y2, &y3, &z1, &z2, &z3) ;
   
   printf("points given by user are: A(%f, %f, %f), B(%f, %f, %f), C(%f, %f, %f)", x1, y1, z1, x2, y2, z2, x3, y3, z3) ;
    
   
   if( (y3 - y2)*(x2 - x1) == (y2 - y1)*(x3 - x2) ){
            
            printf("given three points are collinear");
   }     
   else printf("given three points are non-collinear");
   
   
   
   float a, b, c, d, e, f, g, h, i;


   
         
         }