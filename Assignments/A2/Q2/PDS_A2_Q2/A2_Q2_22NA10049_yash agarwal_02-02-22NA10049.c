#include <stdio.h>
#include <math.h>
int main()
{

    double alpha=0.306,sigma=1.2,Rs=6.96e8 ,Ts=1.3654e-11,D= 1.496e11,Tp,a,s,R,T,d,Tps,tempo;  //intializing the values of the variables

    double temp=sqrt((1-alpha)/sigma);                                              // calculating based on initialized values
    Tp=Ts*(sqrt((Rs*temp)/(2*D)));



    scanf("%If %If %If %If %If",&a,&s,&R,&T,&d);                            //  using new varibles for user values

    tempo=sqrt((1-a)/s);                                                   // calculating based on users values
    Tps=T*(sqrt((R*temp)/(2*d)));


    printf("%Ie \n",Tps);
    printf("computer initialized value %Ie",Tp);                                                    // computer value with intialization is 5.7428612-13

    return 0;
}
