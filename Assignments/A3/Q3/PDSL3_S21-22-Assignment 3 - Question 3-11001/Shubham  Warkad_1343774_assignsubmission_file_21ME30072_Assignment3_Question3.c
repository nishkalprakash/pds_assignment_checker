// Name:-Shubham Gajanan Warkad
// Roll No.-21ME30072
// Lab assignment 3     Question 3
#include <stdio.h>
#include <math.h>

double intersectionx(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double x;
    if((a1/a2)==(b1/b2))
    {
        x='void';
    }
    else{
        x=(c1*b2-c2*b1)/(b2*a1-b1*a2);
    }
    return x;

}
double intersectiony(double a1,double b1,double c1,double a2,double b2,double c2)
{
    double y;
    if((a1/a2)==(b1/b2))
    {
        y='void';
    }
    else{
        y=(c2*a1-c1*a2)/(b2*a1-b1*a2);
    }
    return y;

}
double distance(double x1,double y1,double x2,double y2)
{
    double d1;
    d1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return d1;
}
double AREA(double x1,double y1,double x2,double y2,double x3,double y3)
{
    double ar;
    ar=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    if(ar<0)
    {ar=-1*ar;}
    return ar;
}
int main()
{
    double a1,a2,a3,b1,b2,b3,c1,c2,c3,x1,x2,x3,y1,y2,y3,area,D1,D2,D3;
    printf("enter coordinates of Line1:");
    scanf("%lf %lf %lf",&a1,&b1,&c1);
     printf("enter coordinates of Line2:");
    scanf("%lf %lf %lf",&a2,&b2,&c2);
     printf("enter coordinates of Line3:");
    scanf("%lf %lf %lf",&a3,&b3,&c3);
    x1=intersectionx(a1,b1,c1,a2,b2,c2);
    y1=intersectiony(a1,b1,c1,a2,b2,c2);
    x2=intersectionx(a1,b1,c1,a3,b3,c3);
    y2=intersectiony(a1,b1,c1,a3,b3,c3);
    x3=intersectionx(a3,b3,c3,a2,b2,c2);
    y3=intersectiony(a3,b3,c3,a2,b2,c2);
  
    
    if(x1=='void')
    {printf("lines l1 and l2 are parallel");
    goto label;
    }
    else{
        printf("intersection of l1 and l2 is %lf,%lf\n",x1,y1);
        
    }
    if(x2=='void')
    {printf("lines l1 and l3 are parallel");
    goto label ;
    }
    else{
        printf("intersection of l1 and l3 is %lf,%lf\n",x2,y2);
    }
    if(x3=='void')
    {printf("lines l2 and l3 are parallel");
    goto label;
    }
    else{
        printf("intersection of l3 and l2 is %lf,%lf\n",x3,y3);
    }
    
    printf("area of triangle is %lf\n",AREA(x1,y1,x2,y2,x3,y3));
    D1=distance(x1,y1,x2,y2);
    D2=distance(x1,y1,x3,y3);
    D3=distance(x2,y2,x3,y3);
    printf("length of sides are %lf,%lf,%lf ",D1,D2,D3);


label:
    return 0;
}