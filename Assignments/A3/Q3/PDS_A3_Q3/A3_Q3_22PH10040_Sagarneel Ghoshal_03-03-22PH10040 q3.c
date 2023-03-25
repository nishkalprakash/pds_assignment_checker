#include<stdio.h>

int main(){
    float x1,x2,x3,y1,y2,y3,z1,z2,z3;         //declaring the variables
    printf("Enter coordinates of the three points:\n");
    scanf("%f %f %f", &x1,&y1,&z1);
    scanf("%f %f %f", &x2,&y2,&z2);
    scanf("%f %f %f", &x3,&y3,&z3);

    printf("The three coordinates are:\n");
    printf("(%f,%f,%f)\t",x1,y1,z1);
    printf("(%f,%f,%f)\t",x2,y2,z2);
    printf("(%f,%f,%f)\t",x3,y3,z3);

    float a=(x3-x1)/(x2-x1);                //forming equation of a straight line passing through two points
    float b=(y3-y1)/(y2-y1);
    float c=(z3-z1)/(z2-z1);


    //checking if they are collinear
    if(a==b && b==c){
        printf("\nThey are collinear\n");

    }
    else{
        printf("\nThey are not collinear\n");
    }


    //arranging in collating sequence
    if(x1>x2 && x1 >x3 && x2>x3){
         printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);

    }
    else if(x1>x2 && x1 >x3 && x3>x2){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);
    }
    else if(x2>x1 && x2 >x3 && x1>x3){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);
    }
    else if(x2>x1 && x2 >x3 && x3>x1){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
    }
    else if(x3>x1 && x3 >x2 && x2>x1){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    }
    else if(x3>x1 && x3 >x2 && x1>x2){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
    }


    return 0;






}