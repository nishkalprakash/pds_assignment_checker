/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- CODEBLOCK*/
#include <stdio.h>
#include <math.h>

int main()
{
    float Z, S,T;
    int N, i;
    printf("Enter the height the parabolic container(z)-");
    scanf("%f", &Z);
    printf("enter the value of N(i.e iteration number)-");
    scanf("%d", &N);
    for (i = 0; i <= N; i++)
    {
            S = sqrt(Z);/*zi+1 = zi − si
                           si=sqrt(zi)*/
            T=Z;
            Z = Z - S;
    if (Z < 0)
    {
    Z= (-1) * Z;
    }
    if (T==Z)
    {
    S=S-(1/N);/* THE Zi+1=Zi is the trap situation
                to exit that trap situation
                use s = s - (1/k)
                z = z - s^2*/
    Z=Z-S*S;
    }

    if (Z==0)
    {
        break;
    }
        printf("(%f,%d)\n", Z, i + 1);
    }
    return 0;
}
