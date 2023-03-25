#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,z1,x2,y2,z2,x3,y3,z3;
    printf("enter a coordinate of point A: ");
    scanf("%f%f%F",&x1,&y1,&z1);
    printf("\n enter coordinates of point B: ");
    scanf("\n %f%f%f",&x2,&y2,&z2);
    printf("\n enter coordinates of point C:");
    scanf("\n %f%f%f",&x3,&y3,&z3);
    printf("\n point A%f%f%f",x1,x2,x3);
    double AB,BC,CA;
    AB=(double) (sqrt((pow(x2-x1,2))+(pow(y2-y1,2))+(pow(z2-z1,2))));
    BC=(double) (sqrt((pow(x3-x2,2))+(pow(y3-y2,2))+(pow(z3-z2,2))));
    CA=(double) (sqrt((pow(x3-x1,2))+(pow(y3-y1,2))+(pow(z3-z1,2))));
    if(AB+BC==CA && BC+CA==AB && CA+AB==BC) {
        printf("it is collinear");}
    else printf("it is not collinear");
    if(x1>x2 && x2>x3 || y1>y2 &&y2>y3 || z1>z2 && z2>z3){
        printf("\nA<B<C");
    }
    else printf("\nnothing");

    return 0;


}
