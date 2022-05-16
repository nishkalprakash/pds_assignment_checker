#include <stdio.h>
#include <math.h>

int intersection(int A[3] , int B[3]);
int main()
{
    int line1[3],line2[3],line3[3];
    printf("Enter the coefficients of the three lines: \n");
    printf("Line 1: ");
    for(int i = 0; i < 3; i++)
    {
       scanf("%d",&line1[i]);
    }
    printf("Line 2: ");
    for(int i = 0; i < 3; i++)
    {
       scanf("%d",&line2[i]);
    }
    printf("Line 3: ");
    for(int i = 0; i < 3; i++)
    {
       scanf("%d",&line3[i]);
    }
    //float L[2];
    float M[2];
   // float N[2];
   // L[2] = intersection(line1 , line2);
    M[2] = intersection(line2 , line3);
  //  N[2] = intersection(line3 , line1);

   // printf("point of intersection between L1 and L2 = (%f,%f)",L[0],L[1]);
    printf("point of intersection between L2 and L3 = (%f,%f)",M[0],M[1]);
   // printf("point of intersection between L3 and L1 = (%f,%f)",N[0],N[1]);

}

int intersection(int A[] , int B[])
{
    float x, y;

    y = ((float)B[2] * A[0] - B[0] * (float)A[2]) / (B[1] * A[0] - B[0] * A[1]);
    x = ((float)A[2] / A[0]) - ((float)A[1] / A[0]) * y;

    float P[2];
    P[2] = (x,y);
    return P[2];
}
