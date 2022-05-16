#include <stdio.h>
#include <math.h>
int main()
{
    double z;
    int k;
    printf("Enter the value of z\n");
    scanf("%lf",&z);
    printf("Enter the value of k\n");
    scanf("%d",&k);
    printf("Simulation Started\n");
    //loop for simulation
    double s;
    int count=0;
    for(int i=1;i<=k;i++)
    {
        if(z<0)
            z=(-z);
        double c=z;//temporarily stores value of z
        s=sqrt(z);
        z=z-s;
        if(z<0)
            z=(-z);
            printf("(%lf , %d)\n",(z),i);
        if((int)(z*100000)==(int)(c*100000))
        {
            printf("(%lf , %d)\n",(z),++i);
            printf("%d\n",count);
            s=s-(double)(1/(i));
            z=z-s*s;
            i++;
            printf("(%lf , %d)\n",(z),i);
        }
        if((int)(z*100000)==0)
        break;
    }
}