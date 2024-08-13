#include<stdio.h>
#include<math.h>
int main(){
    double Xo,Yo,a,u,ax,ay,ux,uy,X,Y,t,o1,o2;
    int d1,d2;
    printf("Enter the value of 't' :\n");
    scanf("%lf",&t);
    printf("Enter the value of 'u' and its degrees with x-axis :\n");
    scanf("%lf%d",&u,&d1);
    printf("\n");
    printf("Enter initial Xo and Yo :\n");
    scanf("%lf%lf",&Xo,&Yo);
    printf("Enter the value of 'a' and its degrees with x-axis :\n");
    scanf("%lf%d",&a,&d2);
    o1=(d1*M_PI)/180;
    o2=(d2*M_PI)/180;
    ax=a*cos(o2);
    ay=a*sin(o2);
    ux=u*cos(o1);
    uy=u*sin(o1);
    X=ux*t+(ax*t*t*0.5);
    Y=uy*t+(0.5*t*t*ay);
    printf("New position of particle ***\n");
    printf("Xt =%le\n",X);
    printf("Yt =%le\n",Y);
    
    
    return 0;
}
