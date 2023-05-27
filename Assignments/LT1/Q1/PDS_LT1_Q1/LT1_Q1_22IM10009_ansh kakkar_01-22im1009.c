#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4;
    double a1,a2,a3,a4,p1,p2,p3,p4,max=-1;
    //int max=-1;
    printf("enter the points\n");
    scanf("%f,%f%f,%f%f,%f%f,%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    a1=x1*(y2-y3)-y1*(x2-x3)+(x2*y3-x3*y2);
    a2=x1*(y2-y4)-y1*(x2-x4)+(x2*y4-x4*y2);
    a3=x2*(y3-y4)-y2*(x3-x4)+(x3*y4-x4*y3);
    a4=x1*(y3-y4)-y1*(x3-x4)+(x3*y4-x4*y3);
    //printf("%lf%lf%lf%lf",a1,a2,a3,a4);
    if(a1<0)
        a1=-1*a1;
    if(a2<0)
        a2=-1*a2;
    if(a3<0)
        a3=-1*a3;
    if(a4<0)
        a4=-1*a4;
    printf("%lf %lf %lf %lf",a1,a2,a3,a4);

    if(max<a1)max=a1;
    if(max<a2)max=a2;
    if(max<a3)max=a3;
    if(max<a4)max=a4;
printf("max=%lf",max);

    if(max==a1)
    {
        printf("points having maximum area are(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x3,y3);
        p1=sqrt(pow((x3-x1),2)+pow((y3-y1),2))+sqrt(pow((x2-x1),2)+pow((y2-y1),2))+sqrt(pow((x3-x2),2)+pow((y3-y2),2));
        printf("perimeter is %lf",p1);
    }
    else if(max==a2)
    {
      printf("points having maximum area are(%f,%f),(%f,%f),(%f,%f)",x1,y1,x2,y2,x4,y4);
      p2=sqrt(pow((x4-x1),2)+pow((y4-y1),2))+sqrt(pow((x2-x1),2)+pow((y2-y1),2))+sqrt(pow((x4-x2),2)+pow((y4-y2),2));
      printf("perimeter is %lf",p2);
    }
    else if(max==a3)
    {
        printf("points having maximum area are(%f,%f),(%f,%f),(%f,%f)",x2,y2,x3,y3,x4,y4);
         p3=sqrt(pow((x3-x2),2)+pow((y3-y2),2))+sqrt(pow((x3-x4),2)+pow((y3-y4),2))+sqrt(pow((x4-x2),2)+pow((y4-y2),2));
         printf("perimeter is %lf",p3);
    }

    else if(max==a4)
    {
        printf("points having maximum area are(%f,%f),(%f,%f),(%f,%f)",x1,y1,x3,y3,x4,y4);
        p4=sqrt(pow((x3-x1),2)+pow((y3-y1),2))+sqrt(pow((x4-x1),2)+pow((y4-y1),2))+sqrt(pow((x3-x4),2)+pow((y3-y4),2));
       printf(" perimeter is %lf",p4);
    }


return 0;
}




























































