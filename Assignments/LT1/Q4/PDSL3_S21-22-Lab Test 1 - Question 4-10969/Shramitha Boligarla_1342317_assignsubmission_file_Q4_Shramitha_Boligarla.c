/* Shramitha Boligarla
   Roll no: 21ME10024
   SECTION 3
   Q.4 */

#include<stdio.h>
int main()

{
    int x[10],y[10],i,sum_x=0, sum_y=0;
    float mean_x,mean_y,m,b,p=0,q=0;

    printf("x-coordinates= ");
    for(i=0;i<10;i++){ scanf("%d,",&x[i]);}
    printf("\ny-coordinates= ");
    for(i=0;i<10;i++){ scanf("%d,",&y[i]);}

    for(i=0;i<10;i++){ sum_x= sum_x + x[i]; }
    for(i=0;i<10;i++){ sum_y= sum_y + y[i]; }

    mean_x= (float)sum_x/10;
    mean_y= (float)sum_y/10;

    for (i=0;i<10;i++) { p+=((x[i]-mean_x)*(y[i]- mean_y));}
    for (i=0;i<10;i++) { q+= pow((x[i]-mean_x),2);}

    m= (float)p/q;

    b= mean_y-(m*mean_x);

    printf("m=%.1f\n",m);
    printf("b=%.1f\n",b);
    printf("Line equation is y=%.1fx + %.1f",m,b);

    return(0);


}
