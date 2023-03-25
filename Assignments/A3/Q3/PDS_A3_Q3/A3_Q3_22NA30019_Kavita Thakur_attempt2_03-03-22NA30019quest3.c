#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;
    printf("enter value of x1, y1, z1 \n");
    scanf("%f%f%f",&x1, &y1 ,&z1);
    printf("A = (%f, %f, %f) \n ",x1, y1, z1);


    printf("enter value of x2, y2, z2 \n");
    scanf("%f%f%f",&x2, &y2 ,&z2);
    printf("B = (%f, %f, %f) \n ",x2, y2, z2);


    printf("enter value of x3, y3, z3 \n");
    scanf("%f%f%f",&x3, &y3 ,&z3);
    printf("C = (%f, %f, %f) \n ",x3, y3, z3);

    float a=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)+(z1-z2)*(z1-z2));
        float b=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3)+(z1-z3)*(z1-z3));
            float c=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2)+(z3-z2)*(z3-z2));

     if(a+b==c || c+b==a || a+c==b){
        printf(" points are collinear");
     }
     else{
        printf(" points are not collinear");
     }

     if(x1>x2 && x1>x3 && x2>x3){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x3,y3,z3,x2,y2,z2,x1,y1,z1);}

     else if(x1>x2 && x1>x3 && x3>x2){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x2,y2,z2,x3,y3,z3,x1,y1,z1);}


     else if(x2>x1 && x2>x3 && x1>x3){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x3,y3,z3,x1,y1,z1,x2,y2,z2);}


     else if(x2>x1 && x2>x3 && x3>x1){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x1,y1,z1,x3,y3,z3,x2,y2,z2,);}


     else if(x3>x1 && x3>x2 && x2>x1){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x1,y1,z1,x2,y2,z2,x3,y3,z3);}

     else if(x3>x1 && x3>x2 && x1>x2){
        printf("(%f,%f,%f)<(%f,%f,%f)<(%f,%f,%f)",x2,y2,z2,x1,y1,z1,x3,y3,z3);}

     }

return 0;
}
