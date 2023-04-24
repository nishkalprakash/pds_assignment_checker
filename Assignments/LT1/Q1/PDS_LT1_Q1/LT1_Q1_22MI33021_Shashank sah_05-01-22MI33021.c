/*section 2
roll no: 22mi33021
name: shashank sah
assesment no: 5 q1*/


#include<stdio.h>
int main(){

    int x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,s1,s2,s3,s4,p,q,r,s,t,u;
    printf("enter any number");
    scanf("%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4,&a1,&a2,&a3,&a4,&s1,&s2,&s3,&s4,&p,&q,&r,&s,&t,&u);
    printf("x1=%f,y1=%f,x2=%f,y2=%f,x3=%f,y3=%f,x4=%f,y4=%f,a1=%f,a2=%f,a3=%f,a4=%f,s=%f,s1=%f,s2=%f,s3=%f,s4=%f,p=%f,q=%f,r=%f,s=%f,t=%f,u=&f",x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,s,s1,s2,s3,s4,p,q,r,s,t,u);

   /* printf("(a1=x1(y2-y3)+x2(y3-y1)+x3(y1-y2)/2)");/*area a1 for  triangle formed by points (x1,y1) (x2,y2) (x3,y3)*/
    printf("(a2=x2(y3-y4)+x3(y4-y2)+x4(y2-y3)/2)");/*area a2 area of triangle formed by points (x2,y2) (x3,y3) (x4,y4)*/
    printf("(a2=x1(y2-y4)+x2(y4-y1)+x4(y1-y2)/2)");/*area a3 area of triangle formed by points (x1,y1) (x2,y2) (x4,y4)*/
    printf("(a2=x1(y3-y4)+x2(y4-y1)+x4(y1-y3)/2)");/*area a4 area of triangle formed by points (x1,y1) (x3,y3) (x4,y4)*/

p=((((x2-x1)pow2)-((y2-y1)pow2))pow1/2);

  q=((x2-x1)pow2)-((y2-y1)pow2);
    r=((x2-x1)pow2-(y2-y1)pow2);
    s=((x2-x1)pow2-(y2-y1)pow2);
    t=((x2-x1)pow2-(y2-y1)pow2);
u=(x2-x1)pow2-(y2-y1)pow2);

s1=((p+q+t)/2);
s2=((p+q+s)/2);
    s3=((r+q+u)/2);
        s4=((s+t+r)/2);


     a1=s1(s1-p)(s1-q)(s1-t);
     a2=s2(s2-p)(s2-q)(s2-s);
     a3=s2(s2-r)(s2-q)(s2-u);
       a4=s2(s2-s)(s2-t)(s2-r);

       if(a1>a2&&a1>a3&&a1>a4)
        printf("a1 is the largest triangle")



















return o;

}
