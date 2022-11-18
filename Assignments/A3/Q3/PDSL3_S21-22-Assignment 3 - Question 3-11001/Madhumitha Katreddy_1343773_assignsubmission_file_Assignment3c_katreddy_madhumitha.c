#include <stdio.h>
#include <math.h>
void intersection(int a[3], int b[3], int i)
{
    float m1 = -(a[0] / a[1]), m2 = -(b[0] / b[1]);
    int flag = 0;
    if (m1 == m2 && a[1] * b[2] != a[2] * b[1])
        printf(" line % d and % d are parallel", i, i + 1);
    else
    {
        float x = ((b[2] * a[1] - a[2] * b[1]) / (a[0] * b[1] - a[1] * b[0]));
        float y = ((b[0] * a[2] - a[0] * b[2]) / (a[0] * b[1] - a[1] * b[0]));
        printf(" point of intersection between L%d and L%d = (%f, %f)",i,i+1,x,y);
    }
}
float intersection_y(int a[3], int b[3])
{
}
int main()
{
    int l1[3], l2[3], l3[3];
    printf("Enter the coefficients (a,b,c) of three lines\n");
    printf("Line 1 :");
    for (int i = 0; i < 3; i++)
        scanf("%d", &l1[i]);
    printf("Line 2 :");
    for (int i = 0; i < 3; i++)
        scanf("%d", &l2[i]);
    printf("Line 3 :");
    for (int i = 0; i < 3; i++)
        scanf("%d", &l3[i]);
        intersection(l1, l2,1);
        intersection(l2,l3,2);
        intersection(l3,l1,3);
    return 0;
}
