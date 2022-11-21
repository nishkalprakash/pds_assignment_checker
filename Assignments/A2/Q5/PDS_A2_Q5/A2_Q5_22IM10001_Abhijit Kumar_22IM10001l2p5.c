#include<stdio.h>
#include<math.h>
int main()
{
int m=0.125;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
float Y;
int g=9.78;
double n;
scanf("%f %lf",&Y,&n);
float d= (((8*Y)/3)*(1-pow((1/4),(n-1))))-Y; // The distance traversed by the ball when it touches the ground for nth time
printf("the distance traversed=%f",d);
return 0;
}

