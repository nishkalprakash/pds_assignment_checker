//NAME : HARSH PATIDAR
// ROLL NO : 22MF10015
//SECTION : 2
//lab test : 1
//description :

#include<stdio.h>
int main()
{
int x1 ,y1, x2,y2,x3,y3,x4,y4 ;
float t1,t2,t3,t4,g1,g2,g3,z1,z2,z3,z4;


    printf("enter the first point (x1,y1)");
    scanf("%d,%d",&x1,&y1);
    printf("enter the first point (x2,y2)");
    scanf("%d,%d",&x2,&y2);
    printf("enter the first point (x3,y3)");
    scanf("%d,%d",&x3,&y3);
    printf("enter the first point (x4,y4)");
    scanf("%d,%d",&x4,&y4);

    t1= (x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));
    t2= (x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3));
    t3= (x1*(y3-y4))+(x3*(y4-y1))+(x4*(y1-y3));
    t4= (x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2));
if (t1>t2)
{
    g1=t1;
}
    else
    {
    g1=z2;
    }
if(g1>z3)
{
    g2=g1;
}
    else
    {
    g2=z3;
    }
if(g2>z4)
{
    g3=g2;
}
    else
    {
        g3=z4;
    }






return 0 ;
}
