#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int a,b,c,steps;
    double n,D=0.00,De;
    printf("Enter the no. of steps as a unit of distance:\n");
    scanf("%lf",&n);
    printf("Enter iterations:\n");
    scanf("%d",&a);
    if(n<0 || a<=0)
    {
        printf("invalid input\n Restart the program\n");
    }
    else
    {
        for(b=0;b<=a;b++)
        {
            steps=0;
            for(c=0;c<=n;c++)
                steps+= rand() & 1 ? -1 : 1;
            D+= pow(steps,2);
        }
        De= sqrt(D/(float) a);
        printf("Expected distance is:\n %lf",De);
    }
    return 0;
}
