#include<stdio.h>
#include<math.h>
int main()
{
    double alpha,rho,Rs,Ts,D,Tp;//declaring and defining variables
    printf("Enter values of alpha Rho Rs Ts d:");//printing given sentence in double comma
    scanf("%le %le %le %le %le",&alpha,&rho,&Rs,&Ts,&D);//taking input from user
    Tp=Ts*(sqrt((Rs*sqrt((1-alpha)/rho))/D));//calculating value of Tp


    printf("Tp=%le",Tp);//printing value of Tp
    return 0;
}
//value of Tp from user input=8.121631e-13
//value of Tp from already initialization=8.121631e-13
//conclusion:-We have got both values same both(from user input and already initialization )

