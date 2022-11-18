#include <stdio.h>
#include<math.h>
int main()
{
    printf("Enter a1 a2 a3\n");
    int a1,b1,c1;
    scanf("%d",&a1);
    scanf("%d",&b1);
    scanf("%d",&c1);
    printf("\nEnter b1 b2 b3\n");
    int a2,b2,c2;
    scanf("%d",&a2);
    scanf("%d",&b2);
    scanf("%d",&c2);
    printf("\nEnter c1 c2 c3\n");
    int a3,b3,c3;
    scanf("%d",&a3);
    scanf("%d",&b3);
    scanf("%d",&c3);
    float poix1=(b1*c2 - b2*c1)/ (a1*b2 - a2*b1);
    float poiy1=(c1*a2 - c2*a1)/ (a1*b2 - a2*b1);
    printf("\n Point of intersection between L1 and L2 %f,%f\n",(-1*poix1),(-1*poiy1));
    float poix2=(b2*c3 - b3*c2)/ (a2*b3 - a3*b2);
    float poiy2=(c2*a3 - c3*a2)/ (a2*b3 - a3*b2);
    printf("\n Point of intersection between L2 and L3 %f,%f\n",(-1*poix2),(-1*poiy2));
    float poix3=(b3*c1 - b1*c3)/ (a3*b1 - a1*b3);
    float poiy3=(c3*a1 - c1*a3)/ (a3*b1 - a1*b3);
    printf("\n Point of intersection between L3 and L1 %f,%f\n",(-1*poix3),(-1*poiy3));
    float A = ((float)sqrt(pow(poix1-poix2,2)+ pow(poiy1-poiy2,2)));
    float B = ((float)sqrt(pow(poix2-poix3,2)+ pow(poiy2-poiy3,2)));
    float C = ((float)sqrt(pow(poix3-poix1,2)+ pow(poiy3-poiy1,2)));
    printf("Side Length are %f %f %f",A,B,C);
    float area = (fabs((double)poix1*(poiy2-poiy3) + (double)poix2*(poiy3-poiy1) + (double)poix3*(poiy1-poiy2)))/2;
    printf("Area %f",area);
}
