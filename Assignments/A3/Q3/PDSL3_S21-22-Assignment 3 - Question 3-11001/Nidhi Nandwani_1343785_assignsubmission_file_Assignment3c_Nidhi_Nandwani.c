/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <math.h>

int Intersection(int a1, int b1, int c1, int a2, int b2, int c2,float arr[])
{
    // function to evaluate the intersection of two lines
    double d = a1*b2 - b1*a2;
    
    if(d==0)
    {
        return 0;
    }
    
    else
    {
        arr[0] = (b2*c1 - b1*c2) / d;
        arr[1] = (a1*c2 - a2*c1) / d;
        return 1;
    }
}

float sidelength(float arr1[], float arr2[2])
{
    // calculating distance between two intersection points of given lines
    float l = sqrt((arr1[0] - arr2[0])*(arr1[0] - arr2[0]) + (arr1[1] - arr2[1])*(arr1[1] - arr2[1]));
    return l;
}

float area(float s1, float s2, float s3)
{
    float s = (s1+s2+s3)/2; // calculating semiperimeter
    float a = sqrt((s*(s-s1)*(s-s2)*(s-s3)));
    return a;

}

int main()
{
    int a1,b1,c1,a2,b2,c2,a3,b3,c3;
    float arr1[2], arr2[2], arr3[2];
    float s1,s2,s3,a;
    printf("Line 1: ");
    scanf("%d %d %d", &a1,&b1,&c1);
    printf("Line 2: ");
    scanf("%d %d %d", &a2, &b2, &c2);
    printf("Line 3: ");
    scanf("%d %d %d", &a3, &b3, &c3);
    int i1, i2, i3;
    i1 = Intersection(a1, b1, c1, a2, b2, c2, arr1);
    i2 = Intersection(a2,b2,c2,a3,b3,c3, arr2);
    i3 = Intersection(a1, b1,c1, a3,b3,c3, arr3);
    if(i1 == 0) printf("Lines 1 and 2 are parallel; so no point of intersection");
    else if(i2 == 0) printf("Lines 2 and 3 are parallel; so no point of intersection");
    else if(i3 == 0) printf("Lines 1 and 3 are parallel; so no point of intersection");
    else
    {
        s1 = sidelength(arr1,arr2);
        s2 = sidelength(arr2, arr3);
        s3 = sidelength(arr1, arr3);
        a = area(s1,s2,s3);
        printf("Point of intersection between L1 and L2 = (%f, %f)\n", arr1[0], arr1[1]);
        printf("Point of intersection between L2 and L3 = (%f, %f)\n", arr2[0], arr2[1]);
        printf("Point of intersection between L1 and L3 = (%f, %f)\n", arr3[0], arr3[1]);
        printf("Sidelengths = %f, %f, %f\n", s1,s2,s3);
        printf("Area = %f", a);
        
    }
    return 0;
}