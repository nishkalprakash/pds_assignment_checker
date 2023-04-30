#include<stdio.h>
#include<math.h>

int main(){
    float x1,x2,x3,x4,y1,y2,y3,y4,perimeter,area1,area2,area3,area4;   //declaring variables to be used
    printf("Enter coordinates of the first point: ");                  //taking in the inputs
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of the second point: ");
    scanf("%f %f",&x2,&y2);
    printf("Enter coordinates of the third point: ");
    scanf("%f %f",&x3,&y3);
    printf("Enter coordinates of the fourth point: ");
    scanf("%f %f",&x4,&y4);

    float ar1=0.5*((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));                //calculating the area ignoring the sign
    float ar2=0.5*((x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3)));
    float ar3=0.5*((x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2)));
    float ar4=0.5*((x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3)));

    if(ar1>=0) {                                                     //storing the value of the real area
            area1=ar1;
    }
    else{
        area1=-ar1;

    }

    if(ar2>=0) {
            area2=ar2;
    }
    else{
        area2=-ar2;

    }

    if(ar3>=0) {
            area3=ar3;
    }
    else{
        area3=-ar3;

    }

    if(ar4>=0) {
         area4=ar4;
    }
    else{
        area4=-ar4;

    }



    if(area1>=area2 && area1>=area3 && area1>=area4){                              //checking for the largest triangle and printing its coordinates and the required perimeter
        printf("Points having the maximum area: (%f,%f), (%f,%f), (%f,%f)",x1,y1,x2,y2,x3,y3);
        float d1=pow((pow(x1-x2,2)+pow(y1-y2,2)),0.5);
        float d2=pow((pow(x2-x3,2)+pow(y2-y3,2)),0.5);
        float d3=pow((pow(x3-x1,2)+pow(y3-y1,2)),0.5);
        float perimeter=d1+d2+d3;
        if(area1>0){
           printf("\n\nPerimeter = %f",perimeter);
        }
        else printf("\n\nPerimeter=0");

    }
    else if(area2>=area1 && area2>=area3 && area2>=area4){
            printf("Points having the maximum area: (%f,%f), (%f,%f), (%f,%f)",x2,y2,x3,y3,x4,y4);
            float d1=pow((pow(x2-x3,2)+pow(y2-y3,2)),0.5);
            float d2=pow((pow(x3-x4,2)+pow(y3-y4,2)),0.5);
            float d3=pow((pow(x4-x2,2)+pow(y4-y2,2)),0.5);
            float perimeter=d1+d2+d3;
            if(area1>0){
           printf("\n\nPerimeter = %f",perimeter);
        }
        else printf("\n\nPerimeter=0");

    }
    else if(area3>=area1 && area3>=area2 && area3>=area4){
            printf("Points having the maximum area: (%f,%f), (%f,%f), (%f,%f)",x1,y1,x2,y2,x4,y4);
            float d1=pow((pow(x1-x2,2)+pow(y1-y2,2)),0.5);
            float d2=pow((pow(x2-x4,2)+pow(y2-y4,2)),0.5);
            float d3=pow((pow(x4-x1,2)+pow(y4-y1,2)),0.5);
            float perimeter=d1+d2+d3;
            if(area1>0){
           printf("\n\nPerimeter = %f",perimeter);
        }
        else printf("\n\nPerimeter=0");

    }
    else if(area4>=area1 && area4>=area3 && area4>=area2){
            printf("Points having the maximum area: (%f,%f), (%f,%f), (%f,%f)",x1,y1,x3,y3,x4,y4);
            float d1=pow((pow(x1-x3,2)+pow(y1-y3,2)),0.5);
            float d2=pow((pow(x3-x4,2)+pow(y3-y4,2)),0.5);
            float d3=pow((pow(x4-x1,2)+pow(y4-y1,2)),0.5);
            float perimeter=d1+d2+d3;
            if(area1>0){
           printf("\n\nPerimeter = %f",perimeter);
        }
        else printf("\n\nPerimeter=0");


    }
    else{
        printf("Error in computing largest triangle");

    }





return 0;




}
