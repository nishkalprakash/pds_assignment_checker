
#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,X;
    double Area;
    printf("four points in 2D Euclidean space:\nA(x1,y1):");
    scanf("%d,%d",&x1,&y1);
    printf("(%d,%d)",x1,y1);
    printf("/nB(x2,y2):");
    scanf("%d,%d",&x2,&y2);
    printf("(%d,%d)",x2,y2);
    printf("/nC(x3,y3):");
    scanf("%d,%d",&x3,&y3);
    printf("(%d,%d)",x3,y3);
    printf("/nD(x4,y4):");
    scanf("%d,%d",&x4,&y4);
    printf("(%d,%d)",x4,y4);
    a1=(float)((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2)));
    a2=(float)((x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2)));
    a3=(float)((x1*(y3-y4))+(x3*(y4-y1))+(x4*(y1-y3)));
    a4=(float)((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3)));
    if(a1<0)
        a1*=(-1);
    else  if(a2<0)
        a2*=(-1);
    else if(a3<0)
        a3*=(-1);
    else
         a4*=(-1);
        if(a1<a2&&a1<a3&&a1<a4)
        Area=a1;
        else if(a2<a1&&a2<a3&&a2<a4)
            Area=a2;
            else if(a3<a1&&a3<a2&&a3<a4)
            Area=a3;
            else
            Area=a4;
    printf("Smallest triangle area=%lf",Area);
    if(Area==a1)
        X=1;
    else if(Area==a2)
        X=2;
    else if(Area==a3)
        X=3;
    else
        X=4;
    switch(X){
            case 1:printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
                    break;
            case 2:printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);break;
            case 3:printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x3,y3,x4,y4);break;
            case 4:printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);break;
    }


}
