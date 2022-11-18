//Aryan Kubal
//21MT30012
//ASSIGNMENT1d
#include <stdio.h>

int main()
{
    float x1, y1, x2, y2, x3, y3;
    float area, distance_a, distance_b, distance_c,distance_d,distance_e,distance_f;
   //firstly,all the inputs are taken
    printf("input x1 \n");
    scanf("%f", &x1);
    printf("input y1 \n");
    scanf("%f", &y1);
    printf("input x2 \n");
    scanf("%f", &x2);
    printf("input y2 \n");
    scanf("%f", &y2);
    printf("input x3 \n");
    scanf("%f", &x3);
    printf("input y3 \n");
    scanf("%f", &y3);
    //area is calculated by using 3points area formula
    area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
    distance_a = ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    distance_b = ((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
    distance_c = ((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    
    if (area < 0)// if value of above area calculation comes less then zero ,it is wrong so we have converted it positive
    {
        area = -area;
    }

    if (area > 0)//for area not equal to 0,it will form a traingle
    {
        printf("this is a valid triangle\n");
       
    }
    
   else if (area == 0)//for area is equal to 0,it will not form a traingle
    {
        printf("this is not a valid triangle\n");
        
    }
    

   float x=distance_a*distance_a;
   float y=distance_b*distance_b;
   float z=distance_c*distance_c;

    // finding the type of triangle
    if( ((x * x) + (y * y) == (z * z)) || ((x * x) + (z * z) == (y * y)) || ((z * z) + (y * y) == (x * x)) ) {
                   printf("This is a right-angled triangle.\n");
               }
    else if( ( ((x * x) + (y * y) < (z * z)) || ((x * x) + (z * z) < (y * y)) || ((z * z) + (y * y) < (x * x)) ) || ( ( x<=z && y<=z ) || ( x<=y && z<=y ) || ( y<=x && z<=x ) ) ) {
                   printf("This is an acute-angled triangle.\n");
               }
    else if( ( ((x * x) + (y * y) > (z * z)) || ((x * x) + (z * z) > (y * y)) || ((z * z) + (y * y) > (x * x)) ) || ( ( x>z && y>z ) || ( x>y && z>y ) || ( y>x && z>x ) ) ) {
                   printf("This is an obtuse-angled triangle.\n");

    }

}