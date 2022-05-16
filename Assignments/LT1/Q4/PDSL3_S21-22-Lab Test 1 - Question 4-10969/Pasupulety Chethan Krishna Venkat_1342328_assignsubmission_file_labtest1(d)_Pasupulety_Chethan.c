/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    int n,i;
    printf("enter number of points:"); scanf("%d",&n);

    int x[n],y[n];

    printf("enter x coordinates in order first:\n");
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
      }
    printf("enter y coordinates in the same order:\n");
    for(i=0;i<n;i++){
        scanf("%d",&y[i]);
      }

    int sum_x,sum_y;
    for(i=0;i<n;i++){
        sum_x+=x[i];
        sum_y+=y[i];
    }

    float x_avg,y_avg;
    x_avg=1.0*sum_x/n;
    y_avg=1.0*sum_y/n;

   float p,q;
    for(i=0;i<n;i++){
            p+=(1.0*(x[i]-x_avg)*(y[i]-y_avg));
            q+=(x[i]-x_avg)*(x[i]-x_avg)*1.0;

    }
    float m,b;
    m=1.0*p/q;
    b=y_avg-m*x_avg;

    printf("m=%f, b=%f, line equation= %fx+%f",m,b,m,b);


    return 0;
}

