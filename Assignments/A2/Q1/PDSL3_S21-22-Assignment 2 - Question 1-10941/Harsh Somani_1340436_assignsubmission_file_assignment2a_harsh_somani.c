/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
#include<math.h>
int main()
{
    int k,n=1;
    float z,a[1000],s;
    scanf("%f",&z);
    scanf("%d",&k);
    while(n<=k)
    {
        s=sqrt(z);
        z=z-s;
        if (z<0) z=fabs(z);
        a[n-1]=z;
        printf("%f,%d\n",a[n-1],n);
        if (a[n-1]==a[n-2])
        {s=s-(1/n);
        z=z-pow(s,2);
        a[n-1]=z;
        printf("%f,%d\n",a[n-1],n+1);
        n++;}
        if (z==0) break;
        n++;
    }
}
