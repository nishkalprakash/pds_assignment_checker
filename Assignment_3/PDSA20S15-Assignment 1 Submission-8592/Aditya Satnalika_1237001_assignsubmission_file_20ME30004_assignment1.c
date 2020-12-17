#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g,h,p,q;
    printf("Enter the coordinates of the bottom left corner of the rectangle\n");       //Taking coordinates as input
    scanf("%d%d",&a,&b);
    printf("Enter the coordinates of the top right corner of the rectangle\n");
    scanf("%d%d",&c,&d);
    e=c;
    f=b;
    g=a;
    h=d;
    printf("The four corners of the rectangle are(%d,%d),(%d,%d),(%d,%d),(%d,%d)\n\n",a,b,g,h,c,d,e,f);   //printing all the four coordinates of the rectangle
    printf("Enter the coordinates of the point which has to be checked\n");
    scanf("%d%d",&p,&q);
    if((p>a) && (p<c))                                                        //Checking if the point lies within the rectangle
    {
        if((q>b)&&(q<d))
        {
            printf("The point(%d,%d) is inside the rectangle\n",p,q);
        }
        else
        {
            printf("The point(%d,%d) is outside the rectangle\n",p,q);
        }
    }
    else
    {
        printf("The point(%d,%d) is outside the rectangle\n",p,q);
    }
}
