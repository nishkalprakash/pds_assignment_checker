/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    int max_iter,i;
    float x0,e,y,x1;
    printf("enter x0:"); scanf("%f",&x0);
    printf("enter e:"); scanf("%f",&e);
    printf("enter maxiterations:"); scanf("%d",&max_iter);

    for(i=1;i<=max_iter;i++){
            x1=x0-(1.0*(x0*x0*x0-25)/(3*x0*x0));
            y=(x0-x1);

            if (y<e){
                    printf("iteration no=%d      x0=%f    x1=%f   error=%f",i,x0,x1,y);
                    break;
        }

        printf("iteration no=%d      x0=%f    x1=%f   error=%f\n",i,x0,x1,y);
        x0=x1;



    }

    printf("\n\nthe square root of x0=%f",x1);

    return 0;
}
