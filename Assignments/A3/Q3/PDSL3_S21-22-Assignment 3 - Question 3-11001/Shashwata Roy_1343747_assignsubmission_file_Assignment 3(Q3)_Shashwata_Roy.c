/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
*/
#include<stdio.h>
#include<math.h>

float det(float x1,float x2,float x3,float x4)
    return (x1*x4-x2*x3);

float dist(float x1,float x2,float y1,float y2)
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));

float area(float a1,float b1,float a2,float b2,float a3,float b3)
    return 0.5*abs(a1*(b2-b3)+a2*(b3-b1)+a3*(b1-b2);

int calc(int i,int j,float a1,float b1,float c1,float a2,float b2,float c2){
    float x1,y1,x2,y2,x3,y3;
    int m;
    if(det(a1,b1,a2,b2)!=0){
        x1 = -det(b1,c1,b2,c2)/det(a1,b1,a2,b2);
        y1 = -det(a1,c1,a2,c2)/det(a1,b1,a2,b2);
        printf("Point of intersection between L%d and L%d: (%f,%f)\n",i,j,x1,y1);
    }
    else
        printf("Lines %d and %d are parallel\n",i,j);
}

int main(){
    float a[3],b[3],c[3];
    for(int i=0;i<3;i++){
        printf("Line %d: ",(i+1));
        scanf("%f%f%f",&a[i],&b[i],&c[i]);
    }
        calc(1,2,a[0],b[0],c[0],a[1],b[1],c[1]);
        calc(2,3,a[2],b[2],c[2],a[1],b[1],c[1]);
        calc(1,3,a[0],b[0],c[0],a[2],b[2],c[2]);

    return 0;
}
