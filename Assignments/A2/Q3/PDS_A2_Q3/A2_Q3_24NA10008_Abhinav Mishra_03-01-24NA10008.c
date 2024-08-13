#include<studio.h>
#include<math.h>
int main()
{
float u;
int xo,yo,theta,a,t;
printf("Enter the value of xo and yo");
scanf("%d%d",&xo,&yo);
printf("Enter the value of int. speed and acceration ");
scanf("%f%d",&u,&d);
printf("Enter the value of time and theta");
scanf("%d%d",&t,&theta);
float theta =theta*M_PI/180;
float ux= u* cos(theta);
float uy= u* sin(theta);
float ax= a* cos(theta);
float ay= a* sin(theta);
xt= xo+ux*t+ax(pow(t,2))/2;
yt= yo+uy*t+ay(pow(t,2))/2;
prinf("cordinate of particle after%lf sec is (%lf,%lf)",t,xt,yt);
return 0;
}


