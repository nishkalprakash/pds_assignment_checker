/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>, <stdlib.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float *intersection(int l1[],int l2[], float *p);
float p[2];

int main()
{
    int l1[3],l2[3],l3[3];
    float s1,s2,s3,area,s;
    printf("$ Enter the coefficients (a, b, c) of three lines:\n");
    printf("Line 1: ");
    scanf("%d %d %d",&l1[0],&l1[1],&l1[2]);
    printf("Line 2: ");
    scanf("%d %d %d",&l2[0],&l2[1],&l2[2]);
    printf("Line 3: ");
    scanf("%d %d %d",&l3[0],&l3[1],&l3[2]);
    float n[2],m[2],l[2];
    intersection(l1,l2,n);
    intersection(l2,l3,m);
    intersection(l3,l1,l);
    printf("Point of intersection between L1 and L2 = (%f, %f)\n",n[0],n[1]);
    printf("Point of intersection between L2 and L3 = (%f, %f)\n",m[0],m[1]);
    printf("Point of intersection between L3 and L1 = (%f, %f\n)",l[0],l[1]);
    s1=sqrt(((n[0]-m[0])*(n[0]-m[0]))+((n[1]-m[1])*(n[1]-m[1])));
    s2=sqrt(((l[0]-m[0])*(l[0]-m[0]))+((l[1]-m[1])*(l[1]-m[1])));
    s3=sqrt(((n[0]-l[0])*(n[0]-l[0]))+((n[1]-l[1])*(n[1]-l[1])));
    printf("Side lengths = %f, %f, %f.",s1,s2,s3);
    s=(s1+s2+s3)/2;
    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
    printf("Area = %f",area);
}

float *intersection(int l1[],int l2[], float *p)
{
    float c1=l1[0]/l2[0];
    float c2=l1[1]/l2[1];
    float c3=l1[2]/l2[2];
    /*if(c1==c2 && c2==c3 && c3==c1)
    {
        printf("Lines are parallel; so no point of intersection.\n");
        exit(0);
    }*/

    p[0]=(l2[2]-(l2[1]*l1[2]/l1[1]))/(l2[0]-(l1[0]*l2[1]/l1[1]));
    p[1]=l1[2]-(l1[0]*p[0]/l1[1]);
    return p;
}