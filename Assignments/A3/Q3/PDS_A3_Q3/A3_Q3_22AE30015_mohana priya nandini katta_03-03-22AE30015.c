#include<stdio.h>
#include<math.h>
int main()
{
    float A1,B1,C1,x1,y1,z1,x2,y2,z2,x3,y3,z3;
    printf("A1(x1,y1,z1)\n",x1,y1,z1);
    scanf("%f %f %f",&x1,&y1,&z1);
    printf("B1(x2,y2,z2)\n",x2,y2,z2);
    scanf("%f %f %f ",&x2 &y2 &z2);
    printf("C1(x3,y3,z3)\n",x3,y3,z3);
    scanf("%f %f %f",&x3,&y3,&z3);
    float l1,l2,l3;
    l1=sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    l2=sqrt(pow(x2-x3,2)+pow(y2-y3,2)+pow(z2-z3,2));
    l3=sqrt(pow(x3-x1,2)+pow(y3-y1,2)+pow(z3-z1,2));
    if
        (l1+l2=l3 || l2+l1=l3 || l3+l1=l2);
    printf ("A1,B1,C1 are collinear");
    return 0;


}
