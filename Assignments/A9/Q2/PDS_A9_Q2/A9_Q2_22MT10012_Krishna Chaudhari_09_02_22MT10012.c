// Krishna Chaudhari
// Roll no.: 22MT10012

#include<stdio.h>
#include<math.h>

typedef struct vect
{
    int X[100];
    int Y[100];
} vect;
double mag(vect v,int n);
double den(vect v,int n);

int main()

{
    int x,y;
    double a,mx=0,my=0;
    double mul,num;
    double cos;
    struct vect v;
    printf("Enter the number of dimenison \n");
    scanf("%d",&x);
    printf("\nEnter the value of vector\n");
    for(int i=0; i<x; i++)
    {
        scanf("%d",&v.X[i]);
    }

    printf("Enter the number of dimenison \n");
    scanf("%d",&y);
    printf("\nEnter the value of vector\n");
    for(int b=0; b<y; b++)
    {
        scanf("%d",&v.Y[b]);
    }

    if(x==y)
    {
        mul=den(v,x);
        num=mag(v,x);
        cos=num/mul;
        if(cos<0)
        {
            cos= -cos;
        }
         //printf("%lf deno\n",mul);

        // printf("%lf numo\n",num);
         //printf("%lf \n",num/mul);
         //printf("%lf im cos",cos);
        if(cos==0 ||( cos<0.000001 && cos>-0.000001)) printf("Vectors are orthogonal \n");
        else if (cos==1 || (cos>0.9999 && cos<1.00001)) printf("Vectors are identical \n");
        else printf("Vectors are neither similar nor orthogonal ");
    }
    else printf("Please enter the same dimension");
    return 0;
}
double den(vect v,int n)
{
    double my,mx,mul;
    for(int r=0; r<n; r++)
    {
        mx+=v.X[r]*v.X[r];
    }
    for(int e=0; e<n; e++)
    {
        my+=v.Y[e]*v.Y[e];
    }
    my=sqrt(my);
    mx=sqrt(mx);
    mul=mx*my;
    return mul;
}

double mag(vect v,int n)
{
    double a=0;
    for(int j=0; j<n; j++)
    {
        a+=v.X[j]*v.Y[j];
    }
    return a;
}
