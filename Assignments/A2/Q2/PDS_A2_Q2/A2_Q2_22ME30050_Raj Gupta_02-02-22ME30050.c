#include <stdio.h>
#include <math.h>
int main()
{
    double a , x , Rs  , Ts  , D ,Tp ;

    printf (" enter the value of alpha :");
    scanf("%lf",&a);
    printf (" enter the value of sigma :");
    scanf("%lf",&x);
    printf (" enter the value of Rs :");
    scanf("%lf",&Rs);
    printf (" enter the value of Ts :");
    scanf("%lf",&Ts);
    printf (" enter the value of D :");
    scanf("%lf",&D);

    Tp = Ts*(sqrt((Rs*(sqrt((1-a)/x)))/2*D)) ;
    printf("the value of Tp is = %lf \n\n",Tp);
    return 0 ;

/*the values in both cases of user input and predefined value give us the same answer*/

}
