/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 1: question 2
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {

     float x0,x,function ,x1,derivative, square_root;

     printf("enter the value of x0 : \n");
     scanf("%f",&x0);

     function = pow(x0,3)-25;
     derivative = 3*(pow(x0,2));

     x1 = x0 -  function/derivative;

     x = x0+x1;

     square_root = sqrt(x);

     printf("the value of x1 is : %f\n",x1);
     printf("error is : %f \n",x0-x1);
     printf("square_root  is : %f\n",square_root);

     return 0;


}






