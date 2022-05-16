/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/

#include <stdio.h>
#include <math.h>

void intersect(float a1,float b1,float c1,float a2,float b2,float c2,float a[])
{
    float aa,b,c;
    if (a1*a2!=0)
    {
        float temp=a1;
        a1=a1*a2, b1=b1*a2 , c1=c1*a2;
        a2=a2*temp, b2=b2*temp , c2=c2*temp;
        b = b1-b2;
        c = c1-c2;
        a[1]=c/b;
        a[0]= (c1-b1*a[1])/a1;
    }
    else if (b1*b2!=0)
    {
        float temp=b1;
        a1=a1*b2, b1=b1*b2 , c1=c1*b2;
        a2=a2*temp, b2=b2*temp , c2=c2*temp;
        aa = a1-a2;
        c = c1-c2;
        a[0]=c/aa;
        a[1]= (c1-a1*a[0])/b1;
    }
    if (a1==0)
    {
        a[1]=c1/b1;
        a[0]=c2/a2;
    }
    else
    {
        a[1]=c2/b2;
        a[0]=c1/a1;
    }
}

int main()
{
    float a1,b1,c1,a2,b2,c2,a3,b3,c3;
    printf("$ Enter the coefficients (a, b, c) of three lines:\n");
    printf("Line 1 : ");
    scanf("%f %f %f",&a1,&b1,&c1);
    printf("Line 2 : ");
    scanf("%f %f %f",&a2,&b2,&c2);

    
    if (a1*a2!=0)
    {
        if (b1/a1==b2/a2 )
        {
            printf("Lines 1 and 2 are parallel; so no point of intersection\n");
            return 0;
        }
    }
    
    else if (b1*b2!=0)
    {
        if (a1/b1==a2/b2 )
        {
            printf("Lines 1 and 2 are parallel; so no point of intersection\n");
            return 0;
        }
    }
    
    float a[2];
    intersect(a1,b1,c1,a2,b2,c2,a);
    float x12 = a[0];
    float y12 = a[1];
    
    
    printf("Line 3 : ");
    scanf("%f %f %f",&a3,&b3,&c3);
    if (a1*a3!=0)
    {
        if (b1/a1==b3/a3 )
        {
            printf("Lines 1 and 3 are parallel; so no point of intersection\n");
            return 0;
        }
    }
    else if (b1*b3!=0)
    {
        if (a1/b1==a3/b3 )
        {
            printf("Lines 1 and 3 are parallel; so no point of intersection\n");
            return 0;
        }
    }
    
    if (a3*a2!=0)
    {
        if (b3/a3==b2/a2 )
        {
            printf("Lines 3 and 2 are parallel; so no point of intersection\n");
            return 0;
        }
    }
    else if (b3*b2!=0)
    {
        if (a3/b1==a2/b2)
        {
            printf("Lines 3 and 2 are parallel; so no point of intersection\n");
            return 0;
        }
    }
    intersect(a3,b3,c3,a2,b2,c2,a);
    float x23 = a[0];
    float y23 = a[1];
    intersect(a1,b1,c1,a3,b3,c3,a);
    float x13 = a[0];
    float y13 = a[1];
    printf("Point of intersection between L1 and L2 = (%f , %f)\n",x12,y12);
    printf("Point of intersection between L2 and L3 = (%f , %f)\n",x23,y23);
    printf("Point of intersection between L1 and L3 = (%f , %f)\n",x13,y13);
    
    float s1= sqrt((x12-x13)*(x12-x13)+(y12-y13)*(y12-y13));
    float s2= sqrt((x12-x23)*(x12-x23)+(y12-y23)*(y12-y23));
    float s3= sqrt((x23-x13)*(x23-x13)+(y23-y13)*(y23-y13));
    printf("The side lengths = %f , %f , %f\n",s1,s2,s3);
    float s = (s1+s2+s3)/2;
    float area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("Area = %f \n",area);
    return 0;
}
