#include<stdio.h> //almost done
#include<math.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    double a,b,c,d,s1,s2,s3,s4,a1,a2,a3,a4;
    printf("(x1,y1) =");
    scanf("%d %d",&x1,&y1);
     printf("(x2,y2) =");
    scanf("%d %d",&x2,&y2);
     printf("(x3,y3) =");
    scanf("%d %d",&x3,&y3);
     printf("(x4,y4) =");
    scanf("%d %d",&x4,&y4);
    a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c=sqrt(pow((x3-x4),2)+pow((y3-y4),2));
    d=sqrt(pow((x4-x1),2)+pow((y4-y1),2));
    e=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    f=sqrt(pow((x2-x4),2)+pow((y2-y4),2));
    s1=((a+d+f)/2);
    s2=((a+e+b)/2);
    s3=((c+b+f)/2);
    s4=((e+d+c)/2);
    a1=sqrt((s1)*a*d*f);
     a2=sqrt((s2)*a*e*b);
      a3=sqrt((s3)*c*b*f);
       a4=sqrt((s4)*e*d*c);
       if((a1<a2)&&(a1<a3)&&(a1<a4))
       {
           printf("min is %lf",a1);
       }
       else if((a1<a2)&&(a1<a3)&&(a1<a4))
       {
           printf("min is %lf",a1);
       }
       else

    return 0;
}
