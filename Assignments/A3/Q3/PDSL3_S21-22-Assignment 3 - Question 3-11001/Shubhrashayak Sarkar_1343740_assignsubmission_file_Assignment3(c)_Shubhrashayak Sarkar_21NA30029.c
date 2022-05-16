/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>
#include<math.h>



int main()
{
    printf("Enter the value of a, b, c for each line represented by ax+by=c\n");
    float a[3], b[3], c[3];
    for (int i = 0; i < 3; i++)
    {
        printf("For line %d\n", i+1);
        scanf("%f", &a[i]);
        scanf("%f", &b[i]);
        scanf("%f", &c[i]);
    }
    float slope[3], intersect[3], x[3], y[3];
    for (int i = 0; i < 3; i++)
    {
        slope[i]=(-a[i]/b[i]);
        intersect[i]=(c[i]/b[i]);
    }
    if ((int)(slope[0])==(int)(slope[1]))
    {
        printf("Line 1 and line 2 are parallel\n");
    }
    else if ((int)(slope[1])==(int)(slope[2]))
    {
        printf("Line 2 and line 3 are parallel\n");
    }
    else if ((int)(slope[1])==(int)(slope[3]))
    {
        printf("Line 1 and line 3 are parallel\n");
    }
    else
    {
        for (int i = 0, j=i+1; i < 3; i++)
        {
            x[i]=(intersect[i]-intersect[j]);
            x[i]/=(slope[i]-slope[j]);
            y[i]=(slope[i]*x[i]);
            y[i]+=intersect[i];
            printf("(%f, %f)\n", x[i], y[i]);
        }
        printf("These are the intersection points\n");
    float length[3];
    for (int i = 0, j=i+1; i < 3; i++)
    {
        length[i]=((x[i]-x[j])*(x[i]-x[j])+((y[i]-y[j])*y[i]-y[j]));
        if (length[i]<0)
        {
            length[i]*=(-1);
        }
        length[i]=sqrt(length[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The side lengths are %f\n", length[i]);
    }
    float area;
    area= x[0]*(y[1]-y[2]);
    area+=x[1]*(y[2]-y[0]);
    area+=x[2]*(y[0]-y[1]);
    area/=2;
    if (area<0)
    {
        area*=(-1);
    }
    printf("The area of the triangle will be %f", area);
    }
    return 0;
}