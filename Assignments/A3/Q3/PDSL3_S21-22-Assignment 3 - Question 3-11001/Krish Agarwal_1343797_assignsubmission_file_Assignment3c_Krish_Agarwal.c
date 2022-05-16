/*Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
Section- 3
IDE-code blocks
*/
#include <stdio.h>
#include <math.h>
//Finding intersection
float xintersection(int a1,int a2,int b1,int b2,int c1,int c2)
{
    float d=(a1*b2)-(a2*b1);
    if(d==0)
    {
     return -999;
     }
        float x=((c1*b2)-(c2*b1))/d;
        return x;
}
float yintersection(int a1,int a2,int b1,int b2,int c1,int c2)
{
    float d=(a1*b2)-(a2*b1);
    if(d==0)
    {
        
        return -999;
    }
        float y=((c2*a1)-(c1*a2))/d;
        return y;
}
//Finding side length
float sidelength(float x1,float x2,float y1,float y2)
{
    float side=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    return side;
}
float area(float a,float b,float c)//finding area
{
    float s=(a+b+c)/2.0;
    float ar=sqrt(s*(s-a)*(s-b)*(s-c));
    return ar;
}
int main()
{
    int a[3],b[3],c[3];
    //Taking input
    printf("Enter the coefficients (a, b, c) of three lines(ax+by=c):\n");
    for(int i=0;i<3;i++)
    {
        printf("Line %d : ",i+1);
        scanf("%d%d%d\n",&a[i],&b[i],&c[i]); 
        fflush(stdin);//there is a problem give same input 2 times
    }
    float xinter[3],yinter[3];
    xinter[0]=xintersection(a[0],a[1],b[0],b[1],c[0],c[1]);
    yinter[0]=yintersection(a[0],a[1],b[0],b[1],c[0],c[1]);
    xinter[1]=xintersection(a[1],a[2],b[1],b[2],c[1],c[2]);
    yinter[1]=yintersection(a[1],a[2],b[1],b[2],c[1],c[2]);
    xinter[2]=xintersection(a[2],a[0],b[2],b[0],c[2],c[0]);
    yinter[2]=yintersection(a[2],a[0],b[2],b[0],c[2],c[0]);
    //Displaying
    for(int i=0;i<3;i++)
    {
        if(xinter[i]==-999||yinter[i]==-999)
        {
            printf("Lines are parallel, so no point of intersection.");
            return 0;
        }
    }
    printf("Point of intersection between L1 and L2 = (%f,%f)",xinter[0],yinter[0]);
    printf("Point of intersection between L2 and L3 = (%f,%f)",xinter[1],yinter[1]);
    printf("Point of intersection between L3 and L1 = (%f,%f)",xinter[2],yinter[2]);
    float s[3];
    for(int i=0;i<3;i++)
    {
        if(i<2)
        s[i]=sidelength(xinter[i],xinter[i+1],yinter[i],yinter[i+1]);
        else
        s[i]=sidelength(xinter[i],xinter[i-2],yinter[i],yinter[i-2]);
    }
    printf("Side lengths= %f, %f, %f",s[0],s[1],s[2]);
    printf("Area= %f",area(s[0],s[1],s[2]));
    return 0;

}