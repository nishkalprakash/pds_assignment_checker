#include<stdio.h>
main()
{
    int x[100],y[100];
    int n,x_sum,y_sum;
    float x_mean,y_mean,m;
    printf("Enter number of coordinates=");
    scanf("%d",&n);
    printf("enter x-coordinates=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        x_sum=x_sum+x[i];
    }

    printf("enter y-coordinates=");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&y[i]);
        y_sum=y_sum+y[i];
    }

    x_mean=x_sum/n;
    y_mean=y_sum/n;
    float m_num,m_den;
    for(int i=0;i<n;i++)
    {
         m_num=m_num+(x[i]-x_mean)*(y[i]-y_mean);
         m_den=m_den+(x[i]-x_mean)*(x[i]-x_mean);
    }
    m=m_num/m_den;

    float b=y_mean-m*x_mean;

    printf("m= %f, b=%f\n",m,b);
    printf("y= %f x+ %f",m,b);
}
