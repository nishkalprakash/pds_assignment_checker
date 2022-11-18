#include <stdio.h>
#include <stdlib.h>
#include <math.h>



void intersection(int m, int n, double a1, double b1, double c1, double a2, double b2, double c2, double X[])
{
    double determinant,x,y;
    determinant = a1*b2 - a2*b1;
    if (determinant == 0)
    {
        printf("Lines %d and %d are parallel, so no point of intersection.",n,m);
        return;
        // Lines are parallel
    }
    else
    {
      x = (c1*b2 - c2*b1)/determinant;
      y = (a1*c2 - a2*c1)/determinant;
      printf("Point of intersection of L%d and L%d=(%lf, %lf)",n,m,x,y);
      X[0] = x;
      X[1] = y;
    }
}

void dist(double x1, double y1, double x2, double y2, double D1[]) {
   double d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
   printf(" %f", d);
   D1[0] = d;
   return;
}

int main()
{
    double a1,a2,a3,b1,b2,b3,c1,c2,c3, X[5],Y[5],Z[5] ,D1[2],D2[2],D3[2] ,a,b,c ,area,s ;
    int m,n, flag[5];
    
    printf("Enter the coefficients (a,b,c) of three lines:\n");
    printf("Line 1: ");
    scanf("%lf %lf %lf",&a1,&b1,&c1);
    printf("Line 2: ");
    scanf("%lf %lf %lf",&a2,&b2,&c2);
    printf("Line 3: ");
    scanf("%lf %lf %lf",&a3,&b3,&c3);
    
    intersection(1, 2, a1, b1, c1, a2, b2, c2, X );
    printf("\n");
    intersection(2, 3, a2, b2, c2, a3, b3, c3, Y);
    printf("\n");
    intersection(3, 1, a3, b3, c3, a1, b1, c1, Z);
    printf("\n");
    
    
    printf("Side lengths = ");
    dist(X[0],X[1],Y[0],Y[1], D1);
    printf(",");
    dist(Y[0],Y[1],Z[0],Z[1], D2);
    printf(",");
    dist(Z[0],Z[1],X[0],X[1], D3);
    printf(".\n");
    
    a = D1[0];
    b = D2[0];
    c = D3[0];
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %lf \n", area);

    return 0;
}