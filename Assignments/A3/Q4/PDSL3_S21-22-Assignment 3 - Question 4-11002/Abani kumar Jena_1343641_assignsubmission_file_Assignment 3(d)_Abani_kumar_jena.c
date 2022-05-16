#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int x,y,z,steps;
    double n,D=0.00,De;
    printf("No. of steps as a unit of distance:\n");
    scanf("%lf",&n);
    printf("Enter iterations:\n");
    scanf("%d",&x);
    if(n<0 || x<=0)
    {
        printf("invalid input\n Restart the program\n");
    }
    else
    {
        for(y=0;y<=x;y++)25
        {
            steps=0;
            for(z=0;z<=n;z++)
                steps+= rand() & 1 ? -1 : 1;
            D+= pow(steps,2);
        }
        De= sqrt(D/(float) x);
        printf("Expected distance is:\n %lf",De);
    }
    return 0;
}
