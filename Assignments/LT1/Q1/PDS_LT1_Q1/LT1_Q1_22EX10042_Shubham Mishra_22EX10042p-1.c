#include<stdio.h>
#include<math.h>
int main(){
    int x1 ,x2 ,x3 ,x4 ,y1 ,y2 ,y3, y4;
    printf("(x1,y1)= ");
    scanf("%d, %d",&x1,&y1);
    printf("(x2,y2)= ");
    scanf("%d, %d",&x2,&y2);
    printf("(x3,y3)= ");
    scanf("%d, %d",&x3,&y3);
    printf("(x4,y4)= ");
    scanf("%d, %d",&x4,&y4);
    float a,b,c,d,l1,l2,l3;
    double perimeter;
    a=.5*(x1*(y2-y3)-y1*(x2-x3)+(x2*y3-x3*y2));
    b=.5*(x2*(y3-y4)-y2*(x3-x4)+(x3*y4-x4*y3));
    c=.5*(x3*(y4-y1)-y3*(x4-x1)+(x4*y1-x1*y4));
    d=.5*(x4*(y1-y2)-y4*(x1-x2)+(x1*y2-x2*y1));
    if(a<0)
    {
        a=a*(-1);
    }
    if(b<0)
    {
        b=b*(-1);

    }
    if(c<0)
    {
        c=c*(-1);
    }
    if(d<0)
    {
        d=d*(-1);
    }
    if(a>=b&&a>=c&&a>=d)
    {
        printf("points having maximum area is (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        l1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        l2=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
        l3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        perimeter=(l1+l2+l3);
        printf("perimeter = %2lf",perimeter);
    }
    else if(b>=a&&b>=c&&b>=d)
    {
        printf("points having maximum area is (%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
         l1=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
        l2=sqrt(pow((x4-x2),2)+pow((y4-y2),2));
        l3=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
        perimeter=(l1+l2+l3);
        printf("perimeter = %2lf",perimeter);
    }
    else if(c>=b&&c>=a&&c>=d)
    {
        printf("points having maximum area is (%d,%d),(%d,%d),(%d,%d)",x3,y3,x4,y4,x1,y1);

        l1=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        l2=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
        l3=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
        perimeter=(l1+l2+l3);
        printf("perimeter = %2lf",perimeter);
    }
    else
    {
        printf("points having maximum area is (%d,%d),(%d,%d),(%d,%d)",x4,y4,x1,y1,x2,y2);

        l1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        l2=sqrt(pow((x4-x2),2)+pow((y4-y2),2));
        l3=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
        perimeter=(l1+l2+l3);
        printf("perimeter = %2lf",perimeter);
    }
}
