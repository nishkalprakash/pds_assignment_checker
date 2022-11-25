#include <stdio.h>                //including the standard input output library
#include <math.h>                 //including the math library

int main()
{
    double e,u,c;                 //declaring the variables
    scanf("%lf%lf",&e,&u);        //taking the input
    c=1/(sqrt(e*u));              //evaluating the speed of light
    printf("%lf\n",c);            //printing the speed of light
    return 0;                     //the int main() will return 0
}
