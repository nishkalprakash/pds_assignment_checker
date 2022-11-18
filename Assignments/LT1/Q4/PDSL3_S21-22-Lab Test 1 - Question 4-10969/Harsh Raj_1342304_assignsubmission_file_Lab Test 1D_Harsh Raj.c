#include<stdio.h>
/* Harsh Raj */
/* Roll: 21IE10017 */
int main()
{
    int x[50],y[50],i,n,x0,y0,b,temp,t,X,Y;
    float m;
    printf("How many points are there? ");
    scanf("%d",&n);
    printf ("x co-ordinates : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    printf ("\n y co-ordinates : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
    }
    X=Y=0;
    for(i=0;i<n;i++)
    X=X+x[i];
    for(i=0;i<n;i++)
    Y=Y+y[i];
    x0=X/n;
    y0=Y/n;
    for(i=0;i<n;i++)
    {
        temp=temp+(x[i]-x0)*(y[i]-y0);
    }
    for(i=0;i<n;i++)
    {
        t=(x[i]-x0)*(x[i]-x0);
    }
    m=(float)temp/t;
    printf("\n m= %f",m);
    b=y0-m*x0;
    printf("\n b= %d",b);
    printf("\n Line equation : y = %f x + %d",m,b);
}
/* Harsh Raj */
/* Roll: 21IE10017 */
