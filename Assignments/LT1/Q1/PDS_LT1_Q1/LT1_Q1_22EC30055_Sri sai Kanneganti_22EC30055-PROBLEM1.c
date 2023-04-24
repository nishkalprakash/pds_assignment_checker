/*  NAME K Srisai
     Roll NO 22EC30055 */
#include<stdio.h>
#include<math.h>
int main()
{
 float a,b,c,x1,x2,x3,x4,y1,y2,y3,y4,p,A1,A2,A3,A4,a1,b1,c1,A;
 printf("enter coordinates of x1,y1\n");
 scanf("%f%f",&x1,&y1);
  printf("enter coordinates of x2,y2\n");
 scanf("%f%f",&x2,&y2);
  printf("enter coordinates of x3,y3\n");
 scanf("%f%f",&x3,&y3);
  printf("enter coordinates of x4,y4\n");
 scanf("%f%f",&x4,&y4);
 A1= (x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2 ;
 if(A1<0)
    {
        A1=A1*(-1) ;
    }
  A2= (x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2 ;
 if(A2<0)
    {
        A2=A2*(-1) ;
    }
     A3= (x3*(y4-y1)+x4*(y1-y3)+x1*(y3-y4))/2 ;
 if(A3<0)
    {
        A3=A3*(-1) ;
    }
     A4= (x4*(y1-y2)+x1*(y2-y4)+x2*(y4-y1))/2 ;
 if(A4<0)
    {
        A4=A4*(-1) ;
    }

if((A1>=A2)&&(A1>=A3)&&(A1>=A4))
{
a=x1;
b=x2;
c=x3;
a1=y1;
b1=y2;
c1=y3;
A=A1 ;
} else {
if((A2>=A1)&&(A2>=A3)&&(A2>=A4))
{
a=x2;
b=x3;
c=x4;
a1=y2;
b1=y3;
c1=y4;
A=A2;
} else {
if((A3>=A2)&&(A3>=A1)&&(A3>=A4))
{
a=x3;
b=x4;
c=x1;
a1=y3;
b1=y4;
c1=y1;
A=A3;
} else {
if((A4>=A2)&&(A4>=A3)&&(A4>=A1))
{
a=x4;
b=x1;
c=x2;
a1=y4;
b1=y1;
c1=y2;
A=A4 ;

}
}
}
}
printf("points having maximum area:(%f,%f),(%f,%f),(%f,%f)\n",a,a1,b,b1,c,c1);
if(A==0)
    {
        printf("perimeter = 0(since there is no triangle)\n");
    }else {
     p = sqrt(pow(a-b,2)+pow(a1-b1,2))+sqrt(pow(b-c,2)+pow(b1-c1,2))+sqrt(pow(c-a,2)+pow(c1-a1,2));
     printf("perimeter = %.2f\n",p);
    }
    return 0 ;


}
