#include <stdio.h>
#include <math.h>
int main(){
int y,n;
float m=0.125;//mass of the body
printf("Y (in metres)=");//initial height
scanf("%d",&y);
printf("n=");//number of collisions
scanf("%d",&n);
double x =( 2.0 * y * (1-pow(0.25,n))/(0.75) ) - y ; //calculating the distance travelled
printf("the distance travelled is %lf", x );
return 0;
}

