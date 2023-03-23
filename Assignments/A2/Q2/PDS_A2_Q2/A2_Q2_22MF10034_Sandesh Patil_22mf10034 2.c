#include<stdio.h>
#include<math.h>

int main()
{
    double alpha,row,R,T,D,Tp;

    printf("enter the value of alpha,row,R,T,D \n ");
    scanf("%lf%lf%le%le%le",&alpha,&row,&R,&T,&D);

    Tp = T*sqrt(R*sqrt((1-alpha)/row)/2*D);
    printf("the value of Tp is %le",Tp);

    return 0;

}
