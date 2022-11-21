#include <stdio.h>
#include <math.h>
int main()
{
    float e,m;
    printf("Enter the values of 'e' and 'm': ");
    scanf("%e %e",&e,&m);
    float s= 1/sqrt(e*m);
    printf("The speed of light = %e",s);
    return 0;
}
    
