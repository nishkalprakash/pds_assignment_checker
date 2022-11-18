//  

#include <stdio.h>
int main()
{
    int x[10];
    int y[10];
    float xa=0.0;
    float ya=0.0;
    float m=0.0;
    float num=0.0;
    float den=0.0;
    float b=0.0;


    printf("x-coordinates: ");
    scanf("%d",&x[0]);
    xa+=x[0];
    
    for(int i=1;i<10;i++)
    {
        scanf("%d",&x[i]);
        xa+=x[i];
    }

    printf("y-coordinates: ");
    scanf("%d",&y[0]);
    ya+=y[0];
    
    for(int i=1;i<10;i++)
    {
        scanf("%d",&y[i]);
        ya+=y[i];
    }

    xa/=10.0;
    ya/=10.0;
    
    for(int i=0;i<10;i++)
    {
        num+=((x[i]-xa)*(y[i]-ya));
        den+=((x[i]-xa)*(x[i]-xa));
    }

    m=num/den;
    b=ya-m*xa;
    b*=10;
    int c=b;
    float b1=c/10.0;
    b=b1;

    printf("\nOutput: m= %.1f, b= %.1f, line equation y= %.1fx+%.1f",m,b,m,b);
}