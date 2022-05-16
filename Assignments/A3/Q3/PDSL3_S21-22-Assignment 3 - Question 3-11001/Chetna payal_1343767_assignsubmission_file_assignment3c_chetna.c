#include<stdio.h>
#include<math.h>

/*Name-Chetna
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

void intersection(int a1,int b1,int c1,int a2,int b2,int c2)
{
    float x,y;
    int d=(a1*b2)-(a2*b1);
    if(d==0) printf("Lines are parallel!! So, no point of intersection\n");
    else
    {
        x=((c1*b2)-(c2*b1))/(float)d;
        y=((a1*c2)-(a2*c1))/(float)d;
        printf("(%f , %f).\n",x,y);
    }
}
int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    float x1,x2,x3,y1,y2,y3;
    printf("Enter coefficient of x of line 1:- ");
    scanf("%d",&a1);
    printf("Enter coefficient of y of line 1:- ");
    scanf("%d",&b1);
    printf("Enter constant(c) of line 1:- ");
    scanf("%d",&c1);
    printf("Enter coefficient of x of line 2:- ");
    scanf("%d",&a2);
    printf("Enter coefficient of y of line 2:- ");
    scanf("%d",&b2);
    printf("Enter constant(c) of line 2:- ");
    scanf("%d",&c2);
    printf("Enter coefficient of x of line 3:- ");
    scanf("%d",&a3);
    printf("Enter coefficient of y of line 3:- ");
    scanf("%d",&b3);
    printf("Enter constant(c) of line 3:- ");
    scanf("%d",&c3);
    printf("Point of intersection between L1 and L2 = ");
    intersection(a1,b1,c1,a2,b2,c2);
    printf("Point of intersection between L2 and L3 = ");
    intersection(a3,b3,c3,a2,b2,c2);
    printf("Point of intersection between L3 and L1 = ");
    intersection(a1,b1,c1,a3,b3,c3);

    float l1,l2,l3;
    l1=sqrt(x2*x2-x1*x1 + y2*y2-y1*y1);
    l2=sqrt(x3*x3-x2*x2 + y3*y3-y2*y2);
    l3=sqrt(x3*x3-x1*x1 + y3*y3-y1*y1);
   printf("lenghths= %f %f %f\n",l1,l2,l3);

   float area;
   area= ((x1-x2)*y3+(x2-x3)*y1+(x3-x1)*y2)/2;
   printf("area=%f\n",area);
}
