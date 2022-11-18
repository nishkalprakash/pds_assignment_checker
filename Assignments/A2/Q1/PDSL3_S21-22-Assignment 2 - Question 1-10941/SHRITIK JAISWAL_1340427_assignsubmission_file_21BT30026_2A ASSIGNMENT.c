//shritik jaiswal
//roll-21BT30026
//sec-3
#include<stdio.h>
#include<math.h>
int main ()
{
//declaring the variables
int i;
double z,zi,k,s,si;
//taking the inputs of zi and K by the user,where k is no.of iterations
printf ("z=");
scanf("%lf",&zi);
printf(" k = ");
scanf("%lf",&k);
//creating loop for mapping
//printing the co-ordinates
for (i=1;i<=k;i++)
{
    s=sqrt(zi);
    zi=zi-s;

    if (zi>0)
    {
        printf("(%lf,%d)",zi,i);
    }
        //when the z value goes below zero, simply changing the sign
    else if (zi<0)
    {
        zi=-1*zi;
        printf("(%lf,%d)",zi,i);
    }
}
return 0;
}





