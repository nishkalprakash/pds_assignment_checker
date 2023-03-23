#include<stdio.h>
#include<math.h>


int main()
{

    float x0,y0,theta,u,a,t;
    printf("The value of x0 : \n");
    scanf("%f", &x0);

    printf("The value of y0 : \n");
    scanf("%f",&y0);

    printf("The value of theta : \n");
    scanf("%f",&theta);

    printf("The value of u : \n");
    scanf("%f",&u);

    printf("The value of a : \n");
    scanf("%f",&a);

    printf("The value of t : \n");
    scanf("%f",&t);

    float xt,yt;
    xt = x0 + ((u*t + 0.5*a*t*t)*cos((theta)*2*M_PI/360));
    yt = y0 + ((u*t + 0.5*a*t*t)*sin((theta)*2*M_PI/360));
    printf("Q(xt,yt) = Q(%f ,%f)\n", xt , yt);




    return 0;
}


