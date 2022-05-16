/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
assignment:1(a)
*/
#include<stdio.h>
#include<math.h>
int main(){

    float a,u,d,t,acceleration;
    printf("enter a:\n");
    printf("enter u:\n");
    printf("enter t:\n");
    printf("enter acceleration :\n");
    scanf("%f%f%f%f",&a,&u,&t,&acceleration);

 if (a>=0){
        d=a+(u*t)+0.5*acceleration*t*t;




    printf("distance is :%f",d);
    }
    else{
     d= (-a)+(u*t)+(0.5*acceleration*t*t);

    printf("distance is :%f",d);


      }
       return 0;
        }


