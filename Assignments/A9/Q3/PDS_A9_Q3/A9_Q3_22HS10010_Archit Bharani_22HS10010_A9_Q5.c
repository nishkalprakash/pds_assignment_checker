#include<stdio.h>
typedef struct rectangle{
float t_r_x;                //top_right_x
float t_r_y;                //top_right_y
float b_l_x;              //bottom_left_x
float b_l_y;            //  bottom_left_y
}rectangle;

float area(rectangle r1)
{
float Area=((r1.t_r_x - r1.b_l_x)*(r1.t_r_y -r1.b_l_y));
return Area;
}

int main()
{
rectangle r;
printf("Enter bottom left corner: ");
scanf("%f %f",&r.b_l_x,&r.b_l_y);

printf("Enter top right corner: ");
scanf("%f %f",&r.t_r_x,&r.t_r_y);

area(r);
printf("Area= %0.1f",area(r));
return 0;
}
