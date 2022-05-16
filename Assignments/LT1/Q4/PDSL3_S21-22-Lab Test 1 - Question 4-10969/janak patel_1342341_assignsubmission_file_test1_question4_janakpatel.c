/*
name: Janak Patel
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 1: question 4

*/

#include<stdio.h>

int main(){

    float x[10]; // we consider size of array is 10
    float y[10];
    float mean_x,mean_y;
    int i;
    float mul,div;
    float tmul,tdiv;
    float m,b;


    for(i=0;i<10;i++){

    printf("enter x cordinate of point %d :",i+1);
    scanf("%f",&x[i]);
    }

     for(i=0;i<10;i++){

    printf("enter y cordinate of point %d :",i+1);
    scanf("%f",&y[i]);
    }

    mean_x = (x[0]+x[1]+x[2]+x[3]+x[4]+x[5]+x[6]+x[7]+x[8]+x[9])/10;
    mean_y = (y[0]+y[1]+y[2]+y[3]+y[4]+y[5]+y[6]+y[7]+y[8]+y[9])/10;


    for(i=0;i<10;i++){

        mul=( x[i] - mean_x)*(y[i] - mean_y);
        int sum=0;
        tmul= sum + mul;
    }

     for(i=0;i<10;i++){

        div=( x[i] - mean_x)*(x[i] - mean_x);
        int sum=0;
        tdiv= sum + div;

     }


     m=(tmul)/(tdiv);

     b=(mean_y)- m*(mean_x);

     printf("equation of line is : y = %f*x + %f",m,b);



    return 0;
}
