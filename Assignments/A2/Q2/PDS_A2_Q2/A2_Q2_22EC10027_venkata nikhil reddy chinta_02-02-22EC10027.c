#include <stdio.h>
#include <math.h>
int main(){
    double a=0.306 , s=1.2 , Rs=6.96e8 , Ts=1.3654e-11 , D=1.496e11 , Tp;
    //a=alpha , s=sigma

    Tp=Ts*sqrt((Rs*sqrt((1-a)/s))/(2*D));
    printf("\nthe value of the Tp is %le\n" , Tp);

/*first i have printed the tp value for the given values in the question
then i taken the values from the user to caluclate the value of tp */
      printf("\ngive the values of a,s,Rs,Ts,D : ");
    scanf("%lf%lf%lf%lf%lf" , &a , &s , &Rs , &Ts , &D);
     Tp=Ts*sqrt((Rs*sqrt((1-a)/s))/2*D);

     printf("\nthe value of the Tp is %le" , Tp);

    return 0;

    }













