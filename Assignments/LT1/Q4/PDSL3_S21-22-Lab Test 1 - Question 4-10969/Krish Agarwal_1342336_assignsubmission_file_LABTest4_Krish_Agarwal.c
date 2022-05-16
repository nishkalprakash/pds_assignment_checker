/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-VS code
*/
#include <stdio.h>
int main()
{
    //Variable Declaration
    int x[10],y[10];
    float xm=0.0,ym=0.0,xs=0.0,ys=0.0,m,s1=0.0,s2=0.0,b;
    //Taking x coordinate and y coordinate as input
    printf("Enter the x coordinates : \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    printf("Enter the y coordinates : \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&y[i]);
    }
    //Finding mean of the coordinates
    for(int i=0;i<10;i++)
    {
        xs+=x[i];
        ys+=y[i];
    }
    xm=xs/10.0;
    ym=ys/10.0;
    for(int i=0;i<10;i++)
    {
        s1+=((x[i]-xm)*(y[i]-ym));
        s2+=((x[i]-xm)*(x[i]-xm));
    }
    m=s1/s2;//calculating slope
    b=ym-m*xm;//calculating y-intercept
    //Displaying
    printf("Slope m : %0.1f\n",m);
    printf("y-intercept : %0.1f\n",b);
    printf("The equation of the line is: \ny = %0.1fx + %0.1f",m,b);
}
