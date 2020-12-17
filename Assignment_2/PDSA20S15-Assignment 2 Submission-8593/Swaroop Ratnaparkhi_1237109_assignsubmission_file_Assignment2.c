#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,D,x,y;
    double len;
    scanf("%f%f%f",&a,&b,&c);
    printf("The coefficients of the equation are %f ,%f and %f\n",a,b,c);
    D = (b*b) - 4*(a*c);
    if(D<0)
       {
           printf(".The equation have no roots so, nothing else to be done\n");
       }
    else
    {
        len = sqrt((pow(b,2))-(4*a*c)) ;
       x = ((-1)*b + len)/(2*a) ;
       y = ((-1)*b - len)/(2*a) ;
       printf(" The roots of the equation are %f and %f \n", x,y);

    }


}
