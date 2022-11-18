/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/


#include <stdio.h>
#include <math.h>

int main()
{
    float z,k,s;
    printf("enter the value of z\n");
    scanf("%f",&z);
    printf("enter the value of k\n");
    scanf("%f",&k);
    for(int i=1;z>=0;i++)
    /*logic used here is the for loop repetition which causes the increment in the value of i that is the number of iteration and
 the value of z is also updated as given in the question*/

    {
    z=z-pow(z,0.5);
    if(z>0)
    printf("(%f,%d),  ",z,i);
    else if(z==0)
    {
        s=pow(z,0.5);
        s=s-1/k;
        z=z-pow(s,2);
    }
    else
    printf("(%f,%d),  ",-z,i);
    };
    return 0;
}

