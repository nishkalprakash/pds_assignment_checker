

/*section : 2
roll no :22cs10017
name    : bhukya mahesh */


#include<stdio.h>
#include<math.h>
int main()
{

    float x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,p,q,r,s,s1,s2,s3,s4,s5,s6;
    printf("enter numbers");
    scanf("%f%f%f%f%f%f%f%f", &x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    printf("x1=%f, y1=%f, x2=%f, y2=%f, x3=%f, y3=%f, x4=%f, y4=%f", x1,y1,x2,y2,x3,y3,x4,y4);

/*
    a1=((x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2)))/2;
    a2=((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3)))/2;
    a3=((x1*(y3-y4))+(x3*(y4-y1))+(x4*(y1-y3)))/2;
    a4=((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)))/2;
*/
p=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
q=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
r=sqrt(pow(x4-x3,2)+pow(y4-y3,2));
s=sqrt(pow(x4-x1,2)+pow(y4-y1,2));
s1=sqrt((s*s)+(r*r));
s2=sqrt((r*r)+(q*q));
s3=(s1+q+r)/2;
s4=(s1+p+q)/2;
s5=(s2+q+r)/2;
s6=(s2+p+s)/2;
a1=sqrt(s3*(s3-s1)*(s3-q)*(s3-r))
a2=0.5*p*q;
a3=0.5*r*q;
a4=0.5*p*s;


    if(a1<a2 && a1<a3 && a1<a4)
    {
        printf("a1 is the smallest triangle\n");
        printf("area of the smallest triangle is %f", a1);
    }
    if(a2<a1 && a2<a3 && a2<a4)
    {
        printf("a2 is the smallest triangle\n");
         printf("area of the smallest triangle is %f", a2);
    }
    if(a3<a1 && a3<a2 && a3<a4)
    {
        printf("a3 is the smallest triangle\n");
         printf("area of the smallest triangle is %f", a3);
    }
    if(a4<a1 && a4<a2 && a4<a3)
    {
        printf("a4 is the smallest triangle\n ");
         printf("area of the smallest triangle is %f", a4);
    }






    return 0;
}
