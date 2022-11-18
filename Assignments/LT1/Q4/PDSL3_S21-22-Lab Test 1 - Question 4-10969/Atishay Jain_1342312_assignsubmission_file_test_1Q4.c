#include<stdio.h>
main()

{
    int x[100],y[100];
    float avg1,avg2;
    int n;
    float s2=0.0,s1=0.0;
    printf("enter n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter x %d and y%d",i+1,i+1);
        scanf("%d%d",&x[i],&y[i]);
        s1=s1+x[i];
        s2=s2+y[i];
    }
    avg1=(float)(s1/n);
    avg2=(float)(s2/n);
    s1=0.0;s2=0.0;
    for(int i=0;i<n;i++)
    {
        s1= s1+(float)(x[i]-avg1)*(float)(y[i]-avg2);
        s2=s2+(float)(x[i]-avg1)*(x[i]-avg1);

    }
    float m=s1/s2;
    float b=avg2-(m*avg1);
    printf("m= %f",m);
    printf("\n b= %f",b);
    printf("\n y=%fx + (%f)",m,b);
    getch();
}
