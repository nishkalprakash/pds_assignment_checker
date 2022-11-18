#include <stdio.h>
#include <math.h>

float interx(int p[3], int q[3])
{
    float x, d;

    d=(p[0]*q[1])-(q[0]*p[1]);

    if (d==0)
    {
        return -1;
    }
    else
    {
        x=((p[1]*q[2])-(q[1]*p[2]))/d;
        return x;
    }
}

float intery(int p[3], int q[3])
{
    float y, d;

    d=(p[0]*q[1])-(q[0]*p[1]);

    if (d==0)
    {
        return -1;
    }
    else
    {
        y=((p[2]*q[0])-(q[2]*p[0]))/d;
        return y;
    }
}

int main()
{
    int a[3],b[3],c[3], temp1,temp2,temp3, m[2];
    float x1,y1,x2,y2,x3,y3;
    printf("Enter the coefficients (a,b,c) of three lines:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Line %d : ",i+1);
        scanf("%d %d %d",&a[i],&b[i],&c[i]);
    }

    x1=interx(a,b);
    y1=intery(a,b);
    x2=interx(b,c);
    y2=intery(b,c);
    x3=interx(a,c);
    y3=intery(a,c);
    
    printf("Point of intersection between L1 and L2 : %f, %f\n",x1,y1);
    printf("Point of intersection between L2 and L3 : %f, %f\n",x2,y2);
    printf("Point of intersection between L1 and L3 : %f, %f\n",x3,y3);

    return 0;
}