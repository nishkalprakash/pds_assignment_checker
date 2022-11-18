/* Name   : Pasupulety Chethan Krishna Venkat
   Dept   : Computer science
   Roll no: 21CS30036
   Package: Code blocks
   Os     : windows
*/

#include <stdio.h>

int main()
{
    float a,u,alpha,t;

    printf("enter a:");
    scanf("%f",&a);

    printf("enter u:");
    scanf("%f",&u);

    printf("enter alpha:");
    scanf("%f",&alpha);

    printf("enter time:");
    scanf("%f",&t);

    float distance;
    distance=a+(u*t)+0.5*alpha*t*t; // (using distance formula)

    if(distance>0){
            printf("The distance from origin =%f",distance);

    } else{
        printf("The distance from origin =%f",-distance); // As distance should not be negative it is converted to its magnitude using an if else statement.
    }

return 0;
}

