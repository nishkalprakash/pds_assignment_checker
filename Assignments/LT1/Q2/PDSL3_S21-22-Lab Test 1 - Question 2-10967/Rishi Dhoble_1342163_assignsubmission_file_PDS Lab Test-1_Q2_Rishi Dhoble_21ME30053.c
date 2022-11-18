/*
Name- Rishi Dhoble
Dept- Mechanical Engnn
Roll no- 21ME30053
Section- 3
package- code blocks
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float x0, x, f_x, deriv_f, tolerance, error;
    int maxIteration;

    printf("Enter x0: ");                                 //initial value or root approx.
    scanf("%f",&x0);

    printf("Enter tolerance limit: ");                   // tolerance limit
    scanf("%f",&tolerance);

    printf("Enter maxIteration: ");                      //no. of trial
    scanf("%d",&maxIteration);

    f_x = x0 * x0 * x0 - 25;                            // function

    deriv_f=3*x0*x0;                                    // derivative

    printf("\nIteration\tx0\t\tx1\t\tError\n");         // making a table using tab spaces

    for(int i=1; i<=maxIteration; i++) {

        x=x0-f_x/deriv_f;

        error=fabs(x-x0);

        printf("%5d\t\t%f\t%f\t%f\n",i,x0,x,error);

        if(error<tolerance) {break;}

        x0=x;

        f_x = x0 * x0 * x0 - 25;
        deriv_f = 3 * x0 * x0;
    }

return 0;
}
