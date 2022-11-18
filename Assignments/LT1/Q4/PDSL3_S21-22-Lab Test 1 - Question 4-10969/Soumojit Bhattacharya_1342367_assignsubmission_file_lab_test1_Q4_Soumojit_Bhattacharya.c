/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>

int main()
{
    int i,x[10],y[10]; //given that array size is fixed
                       //number of points taken in example is 10
    float xm=0,ym=0,m=0,b,sx2;
    /*xm stores x mean
      ym stores y mean
      m and b are given in question
      sx2 stores summation(x-xm)^2*/
    printf("x-coordinates: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
        xm+=x[i];
    }
    printf("y-coordinates: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&y[i]);
        ym+=y[i];
    }
    xm/=10;
    ym/=10;
    for(i=0;i<10;i++)
    {
        sx2+=(x[i]-xm)*(x[i]-xm);
        m+=(x[i]-xm)*(y[i]-ym);
    }
    m/=sx2;
    b=ym-m*xm;
    printf("m=%0.1lf,b=%0.1lf, ", m, b);
    printf("line equation y=%0.1lfx", m);
    if(b>=0)                //if b is negative + is not needed 
    printf("+");
    printf("%0.1lf", b);
    printf("\n");
    //here I have calculated value of b and m to 6 decimal places and rounded off to 1 decimal place as shown in example
    return 0;
}