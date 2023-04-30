#include<stdio.h>
/* Name:Sumit Kumar
   Roll No.:22CS30056
   Section:2
   Problem NO.:1
   Description: Minimum area of triangle       */

int main() {
    float x1,y1,x2,y2,x3,y3,x4,y4;
    printf("enter the first coodinates (x1,y1)=");
    scanf("%f %f",&x1,&y1);
    printf("\n");
    printf("enter the first coodinates (x2,y2)=");
    scanf("%f %f",&x2,&y2);
    printf("\n");
    printf("enter the first coodinates (x3,y3)=");
    scanf("%f %f",&x3,&y3);
    printf("\n");
    printf("enter the first coodinates (x4,y4)=");
    scanf("%f %f",&x4,&y4);
    printf("\n");
    float a,b,c,d;
    a=((x1*y2)-(x2*y1)+(x2*y3)-(x3*y2)+(x3*y1)-(x1*y3))/2;
    a=((a>0)?a:(-a));
    b=((x4*y2)-(x2*y4)+(x2*y3)-(x3*y2)+(x3*y4)-(x4*y3))/2;
    b=((b>0)?b:(-b));
    c=((x4*y1)-(x1*y4)+(x1*y3)-(x3*y1)+(x3*y4)-(x4*y3))/2;
    c=((c>0)?c:(-c));
    d=((x4*y1)-(x1*y4)+(x1*y2)-(x2*y1)+(x2*y4)-(x4*y2))/2;
    d=((d>0)?d:(-d));
    int p,q,r,s;
    p=(a<b)+(a<c)+(a<d);
    q=(b<a)+(b<c)+(b<d);
    r=(c<a)+(c<b)+(c<d);
    s=(d<a)+(d<b)+(d<c);
    if (p==3){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        printf("\n");
        printf("Area=%f",a);
        printf("\n");
    }
    if (q==3){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x2,y2,x3,y3,x4,y4);
        printf("\n");
        printf("Area=%f",b);
        printf("\n");

    }
    if (r==3){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x3,y3,x4,y4,x1,y1);
        printf("\n");
        printf("Area=%f",c);
        printf("\n");

    }
    if (s==3){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x4,y4,x1,y1,x2,y2);
        printf("\n");
        printf("Area=%f",d);
        printf("\n");

    }
    if ((p==0)&&(q==0)&&(r==0)&&(s==0)) {
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        printf("\n");
        printf("Area=0");

    }
    if ((a==d)){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        printf("\n");
        printf("Area=%f",a);
        printf("\n");

    }
    if ((a==b)){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        printf("\n");
        printf("Area=%f",a);
        printf("\n");

    }
    if ((a==c)){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        printf("\n");
        printf("Area=%f",a);
        printf("\n");

    }
    if ((c==d)){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x3,y3,x4,y4,x1,y1);
        printf("\n");
        printf("Area=%f",c);
        printf("\n");

    }
    if ((b==d)){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x3,y3,x4,y4,x2,y2);
        printf("\n");
        printf("Area=%f",b);
        printf("\n");

    }
    if ((c==b)){
        printf("Points having minimum area:(%f,%f),(%f,%f),(%f,%f)",x3,y3,x4,y4,x2,y2);
        printf("\n");
        printf("Area=%f",c);
        printf("\n");

    }



   return 0;
}
