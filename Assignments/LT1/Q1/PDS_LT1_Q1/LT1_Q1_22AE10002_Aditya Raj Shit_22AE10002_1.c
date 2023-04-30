/*
-----Lab Test 1 (21 April 2023)------
Name - Aditya Raj Shit
Section - 2
Roll no. - 22AE10002
Assignment number - 1
Description - Finding triangle with largest area and also calculating its perimeter.
*/

#include<stdio.h>
#include<math.h>

int main(){
    //printf("%d",abs(2));
    double x1,y1,x2,y2,x3,y3,x4,y4;
    double l12,l13,l14,l23,l24,l34;
    double area1,area2,area3,area4;
    double peri1,peri2,peri3,peri4;

    printf("Enter four coordinates below: \n");

    printf("    (x1,y1) : ");
    scanf("%lf%lf",&x1,&y1);

    printf("    (x2,y2) : ");
    scanf("%lf%lf",&x2,&y2);

    printf("    (x3,y3) : ");
    scanf("%lf%lf",&x3,&y3);

    printf("    (x4,y4) : ");
    scanf("%lf%lf",&x4,&y4);


    //Calculating length of sides possible.
    l12=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    l13=sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    l14=sqrt(pow(x4-x1,2)+pow(y4-y1,2));
    l23=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    l24=sqrt(pow(x4-x2,2)+pow(y4-y2,2));
    l34=sqrt(pow(x4-x3,2)+pow(y4-y3,2));



    //Calculating area and perimeter of possible triangles.
    area1=abs(((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3)))/2);
    peri2=l23+l24+l34;

    area2=abs(((x1*(y3-y4))+(x3*(y4-y1))+(x4*(y1-y3)))/2);
    peri1=l13+l14+l34;

    area3=abs(((x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2)))/2);
    peri3=l12+l14+l24;

    area4=abs(((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2);
    peri4=l12+l13+l23;

    double m1=x1,m2=x2,m3=x3,n1=y1,n2=y2,n3=y3;
    double maxPeri=0;


    if(area1>=area2 && area1>=area3 && area1>=area4){
        m1=x2;
        m2=x3;
        m3=x4;
        n1=y2;
        n2=y3;
        n3=y4;
        maxPeri=peri1;
    }

    else if(area2>=area1 && area2>=area3 && area2>=area4){
        m1=x1;
        m2=x3;
        m3=x4;
        n1=y1;
        n2=y3;
        n3=y4;
        maxPeri=peri2;
    }

    else if(area3>=area1 && area3>=area2 && area3>=area4){
        m1=x1;
        m2=x2;
        m3=x4;
        n1=y1;
        n2=y2;
        n3=y4;
        maxPeri=peri3;
    }

    else if(area4>=area1 && area4>=area3 && area4>=area2){
        m1=x1;
        m2=x2;
        m3=x3;
        n1=y1;
        n2=y2;
        n3=y3;
        maxPeri=peri3;
        maxPeri=peri4;
    }

    else {
        printf("");
    }

   /* if(area1==0.0 && area2==0.0 && area3==0.0 && area4==0.0){       //Setting perimeter to 0 when all the four points are collinear.
            maxPeri=0;
    }
    else{
        maxPeri=maxPeri;
    }*/



    printf("\nPoints having the maximum area:\n(%lf,%lf), (%lf,%lf), (%lf,%lf)\n",m1,n1,m2,n2,m3,n3);
    printf("\nPerimeter = %lf",maxPeri);

    return 0;
}
