/***************************
 * Name : Aryan Kubal
 * Roll number : 21MT30012
 * Section : 3
***************************/

#include <stdio.h>
#include <math.h>
void intersection_pt(float a1, float b1, float c1, float a2, float b2, float c2, float sol[]) // function to checck the intersection points

// checking for various conditions of intersection
{
    if((a1/a2)==(b1/b2)&& (a1/a2)!=(c1/c2))
        printf("The lines do not intersect\n");
    else
    {
        sol[0]= (c1*b2-c2*b1)/(a1*b2-a2*b1);
        sol[1]= (a1*c2-a2*c1)/(a1*b2-a2*b1);
    }
    return;
}
int main()
{
    float a1,b1,c1,a2,b2,c2,a3,b3,c3,pt12[2],pt23[2],pt31[2],length12, length23, lenght13; //  assigning variables
    int i;
    printf("$ Enter the coefficients (a,b,c) of three lines:\n"); // taking input of the coefficients
    printf("Line 1: ");
    scanf("%f%f%f", &a1,&b1,&c1);
    printf("Line 2: ");
    scanf("%f%f%f", &a2,&b2,&c2);
    printf("Line 3: ");
    scanf("%f%f%f", &a3,&b3,&c3);
    intersection_pt(a1,b1,c1,a2,b2,c2,pt12);
    intersection_pt(a3,b3,c3,a2,b2,c2,pt23);
    intersection_pt(a1,b1,c1,a3,b3,c3,pt31);
    printf("Point of intersection between L1 and L2 = (%f,%f).\n", pt12[0],pt12[1]);
    printf("Point of intersection between L2 and L3 = (%f,%f).\n", pt23[0],pt23[1]);
    printf("Point of intersection between L3 and L1 = (%f,%f).\n", pt31[0],pt31[1]);
    printf("Side lengths = %f,%f,%f\n", sqrt(pow(pt12[0]-pt23[0],2)+pow(pt12[1]-pt23[1],2)),sqrt(pow(pt23[0]-pt31[0],2)+pow(pt23[1]-pt31[1],2)),sqrt(pow(pt12[0]-pt31[0],2)+pow(pt12[1]-pt31[1],2)));
    printf("Area = %f\n", 0.5*fabs(pt12[0]*(pt23[1]-pt31[1])-pt12[1]*(pt23[0]-pt31[0])+ (pt23[0]*pt31[1]-pt31[0]*pt23[1]) )); // printing the Area


    return 0;

}