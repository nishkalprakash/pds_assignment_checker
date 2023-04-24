#include <stdio.h>
#include <math.h>

int main()
{
    float peri,a1,a2,a3,a4,max_area=0,x1,y1,x2,y2,x3,y3,x4,y4;
    printf("(x1,y1) =");
    scanf("%f%f",&x1,&y1);
    printf("(x2,y2) =");
    scanf("%f%f",&x2,&y2);
    printf("(x3,y3) =");
    scanf("%f%f",&x3,&y3);
    printf("(x4,y4) =");
    scanf("%f%f",&x4,&y4);
    a1=(x1*(y1-y2)-y1*(x2-x3)+(x2*y3-x3*y2))/2;
    a2=(x1*(y1-y2)-y1*(x2-x4)+(x2*y4-x4*y2))/2;
    a3=(x2*(y2-y3)-y2*(x3-x4)+(x3*y4-x4*y3))/2;
    a4=(x1*(y1-y3)-y1*(x3-x4)+(x3*y4-x4*y3))/2;

    if (a1<0) {a1*=-1;}
    if (a2<0) {a2*=-1;}
    if (a3<0) {a3*=-1;}
    if (a4<0) {a4*=-1;}

    max_area=(a1>max_area)?a1:max_area;
    max_area=(a2>max_area)?a2:max_area;
    max_area=(a3>max_area)?a3:max_area;
    max_area=(a4>max_area)?a4:max_area;

    if (a1==max_area){
                printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
                peri=sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x1-x3),2)+pow((y1-y3),2))+sqrt(pow((x3-x2),2)+pow((y3-y2),2));
                printf("Perimeter = %f",peri);
    }
    else if (a2==max_area){
                printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x4,y4);
                peri=sqrt(pow((x1-x2),2)+pow((y1-y2),2))+sqrt(pow((x1-x4),2)+pow((y1-y4),2))+sqrt(pow((x4-x2),2)+pow((y4-y2),2));
                printf("Perimeter = %f",peri);}
    else if (a3==max_area){
                printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f)",x2,y2,x3,y3,x4,y4);
                peri=sqrt(pow((x4-x2),2)+pow((y4-y2),2))+sqrt(pow((x4-x3),2)+pow((y4-y3),2))+sqrt(pow((x3-x2),2)+pow((y3-y2),2));
                printf("Perimeter = %f",peri);}
    else if (a4==max_area){
                printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f)",x1,y1,x3,y3,x4,y4);
                peri=sqrt(pow((x1-x3),2)+pow((y1-y3),2))+sqrt(pow((x1-x4),2)+pow((y1-y4),2))+sqrt(pow((x4-x3),2)+pow((y4-y3),2));
                printf("Perimeter = %f",peri);}

    else if (a1==0 && a2==0 && a3==0 && a4==0) {
        printf("Points having the maximum area: (%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        peri=0;
        printf("Perimeter = %f (since there is no traingle)",peri);
    }




    return 0;

}
