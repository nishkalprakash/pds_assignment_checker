# include <stdio.h>
# include <math.h>
int main (){
double x,y,l,u,a,t,xt,yt ;
printf (" tell the starting coordinates , angle , initail velocity , acceleration and time");
scanf( "%lf",&x);
scanf( "%lf",&y);
scanf( "%lf",&l);
scanf( "%lf",&u);
scanf( "%lf",&a);
scanf( "%lf",&t);
xt = (u * (cos(l)) * t) + (0.5 * a * t *t);
yt = (u * (sin(l)) * t) + (0.5 * a * t * t);
printf ("%lf \n",xt);
printf ("%lf \n",yt);
return 0;}