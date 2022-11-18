/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int k; float z;
    printf("z= ");
    scanf("%f", &z);
    printf("k= ");
    scanf("%d", &k);
    
    float s;
    float z1=z,z2; int flag=0;
    for(int i=1; i<=k; i++)
    {
        s = sqrt(z1);
        z2=z1-s; // Computing the decreased position of s
        if(z2<0)
        {
            z2=-z2;
            if(flag==1)
            {
                if(z2 == z1) // computing for a trapped situation
            {
                s = s - 1/(i);
                z2 = z1 - s*s;
            }
            }
            if(z2==z1) flag=1;
            
        }
        if(z2 == 0) //checking if ball reaches the bottompost position
        {
            printf("(%f,%d)", z2, i);
            break; 
        }
        else{
            printf("(%f,%d)\n", z2, i);
        }
        z1 = z2;

    }
}