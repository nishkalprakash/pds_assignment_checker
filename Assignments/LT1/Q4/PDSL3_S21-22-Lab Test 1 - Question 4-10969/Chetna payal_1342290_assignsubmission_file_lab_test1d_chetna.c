#include<stdio.h>

/*Name-Chetna
  section-3
  roll no.-21CS10019
  dep-CSE
  package-code blocks*/

int main() {

    int i,x[10],y[10],sum_x=0,sum_y=0;
    float c,d,mean_x,mean_y,m,b;

printf("x-coordinates:");
    for(i = 0; i<10; i++) {scanf("%d", &x[i]);
   // printf("x-coordinates=%d",x[i]);
    sum_x+=x[i];
    }
 printf("y-coordinates:");
    for(i = 0; i<10; i++){ scanf("%d", &y[i]);
   // printf("y-coordinates=%d\n",y[i]);
    sum_y+=y[i];}

    mean_x = (float)sum_x/10;
    mean_y = (float)sum_y/10;

    //computing the slope
   for(i=0;i<10;i++){
    c=(x[i]-mean_x)*(y[i]-mean_y);
    d=(x[i]-mean_x)*(x[i]-mean_x);}

    m=c/d;

    //computing y intercept of the line

    b=mean_y-m*mean_x;

    printf("m=%f,b=%f\n",m,b);
    printf("line  equation is y = %0.2f*x + %0.2f",m,b);
    }
