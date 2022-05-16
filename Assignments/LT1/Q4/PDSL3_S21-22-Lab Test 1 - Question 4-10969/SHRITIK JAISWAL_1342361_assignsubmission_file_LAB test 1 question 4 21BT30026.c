//Mac-OS
//shritik jaiswal
//ROLL-21BT30026
//Sec- 3
#include <stdio.h>
double mean(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    return sum/n;
}
double slope(int x[],int y[],double mx,double my,int n)
{
    double sumn=0,sumd=0;
    for(int i=0;i<n;i++)
    {
        sumn=((x[i]-mx)*(y[i]-my));
        sumd=((x[i]-mx)*(x[i]-mx));
    }
    return sumn/sumd;
}
int main() {
    int n;
    printf("Enter the no. of points : ");
    scanf("%d",&n);
    int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the x co-ordinate : \n");
        scanf("%d",&x[i]);
        printf("Enter the y co-ordinate : \n");
        scanf("%d",&y[i]);
    }
    double mx=mean(x,n);
    double my=mean(y,n);
    double m=slope(x,y,mx,my,n);
    double c=my-m*mx;
    printf("Equation of line is\n");
    printf("y = %lf x + %lf",m,c);
    return 0;
}
