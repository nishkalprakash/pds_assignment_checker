/*name           : vyshnavi_lagudu
dept             : EE
roll number      :21EE10044
assignment class :3
package          : code blocks
comments: all values are taken as float
*/
#include<stdio.h>
int main()
{
     float m,b,x[10],y[10],x1,y1;
     int i,n;
     float x_mean,y_mean,a,c;
     printf("number of data points");
     scanf("%d",&n);
     printf("x coordinates:");
     for(i=0;i<n;i++){
         scanf("%f",&x[i]);
         }
     printf("\ny coordinates:");
     for(i=0;i<n;i++){
         scanf("%f",&y[i]);
         }
     for(i=0,x1=0;i<n;i++){
         x1=x1+x[i];
         }
     for(i=0,y1=0;i<n;i++){
         y1=y1+y[i];
         }
      x_mean=(x1/n);
      y_mean=(y1/n);
      for(i=0,a=0;i<n;i++){
          a=a+((x[i]-x_mean)*(y[i]-y_mean));
          c=c+((x[i]-x_mean)*(x[i]-x_mean));
          }
       m=(a/c);
       b=y1-(m*x1);
       printf("m=%0.1f\n",m);
       printf("b=%0.1f\n",b);
       printf("line equation y=%0.1fx+%0.1f\n",m,b);
      return 0;
}
