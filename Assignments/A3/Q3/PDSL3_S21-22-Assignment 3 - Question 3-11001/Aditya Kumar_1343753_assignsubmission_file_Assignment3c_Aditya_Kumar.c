/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Assignment- 3c
Package- stdio.h, math.h
*/
#include <stdio.h>
#include <math.h>
float x1,y_1,x2,y2,x3,y3;
int intersection(float a[], float b[], int n)
{
    if((a[0]*b[1])==(a[1]*b[0]))
    {
        return 0;
    }
    float x,y;
    if((a[0]!=0)&&(a[1]!=0)&&(b[0]!=0)&&(b[1]!=0))
    {
    x = ((b[2]/b[1])-(a[2]/a[1]))/((a[0]/a[1])-(b[0]/b[1]));
    y= ((b[2]/b[0])-(a[2]/a[0]))/((a[1]/a[0])-(b[1]/b[0]));
    }
    else if((a[0]==0)&&(a[1]!=0)&&(b[0]!=0)&&(b[1]!=0))
    {
        y= a[2]/a[1];
        x= (b[2]-(b[1]*a[2]/a[1]))/b[0];
    }
    else if((a[0]!=0)&&(a[1]==0)&&(b[0]!=0)&&(b[1]!=0))
    {
        x= a[2]/a[0];
        y= (b[2]-(b[0]*a[2]/a[0]))/b[1];
    }
    else if((a[0]!=0)&&(a[1]!=0)&&(b[0]==0)&&(b[1]!=0))
    {
        y= b[2]/b[1];
        x=(a[2]-(a[1]*b[2]/b[1]))/a[0];
    }
    else if((a[0]!=0)&&(a[1]!=0)&&(b[0]!=0)&&(b[1]==0))
    {
        x=b[2]/b[0];
        y=(a[2]-(a[0]*b[2]/b[0]))/a[1];
    }
    else if((a[0]==0)&&(a[1]!=0)&&(b[0]!=0)&&(b[1]==0))
    {
        y=a[2]/a[1];
        x=b[2]/b[0];
    }
    else if((a[0]!=0)&&(a[1]==0)&&(b[0]==0)&&(b[1]!=0))
    {
        x=a[2]/a[0];
        y=b[2]/b[1];
    }
    switch(n)
    {
        case 1: x1=x;
                y_1=y;
                break;
        case 2: x2=x;
                y2=y;
                break;
        case 3: x3=x;
                y3=y;
                break;       
    }
    return 1;

}

int main()
{ 
    float a[3]; float b[3]; float c[3];
    printf("Enter the co-efficients(a,b,c) of three lines\n");
    scanf("%f%f%f",&a[0],&a[1],&a[2]);
    scanf("%f%f%f",&b[0],&b[1],&b[2]);
    scanf("%f%f%f",&c[0],&c[1],&c[2]);
    int n1 = intersection(a,b,1);
    int n2 = intersection(b,c,2);
    int n3 = intersection(c,a,3);
    if(n1==0)
    {
        printf("Line 1 and 2 are parallel, so no point of intersection\n");
        return 0;
    }
    if(n2==0)
    {
        printf("Line 2 and 3 are parallel, so no point of intersection\n");
        return 0;
    }
    if(n3==0)
    {
        printf("Line 1 and 3 are parallel, so no point of intersection\n");
        return 0;
    }
    float s1,s2,s3,s;
    s1 = sqrt((x2-x1)*(x2-x1)+(y2-y_1)*(y2-y_1));
    s2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    s3 = sqrt((x3-x1)*(x3-x1)+(y3-y_1)*(y3-y_1));
    s = (s1+s2+s3)/2;
    float area = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("Point of intersection between L1 and L2 = (%f,%f)\n",x1,y_1);
    printf("Point of intersection between L2 and L3 = (%f,%f)\n",x2,y2);
    printf("Point of intersection between L1 and L3 = (%f,%f)\n",x3,y3);
    printf("Side lengths = %f,%f,%f\n",s1,s2,s3);
    printf("Area = %f",area);
    return 0;
}
