#include <stdio.h>
#include<math.h>
int main()
{
    float arr1[1000],arr2[1000],k,x1,y1,sum1=0,sum2=0,m1=0,m2=0,m,b;
    printf("x-coordinates:");
    for(int i=0;i<10;i++){
        scanf("%f%*c",&k);
        arr1[i]=k;
    }
    printf("y-coordinates:");
    for(int i=0;i<10;i++){
        scanf("%f%*c",&arr2[i]);
    }
    for(int i=0;i<10;i++){
        sum1+=arr1[i];
    }
    for(int i=0;i<10;i++){
        sum2+=arr2[i];
    }
    x1=sum1/10.0;
    y1=sum2/10.0;
    for(int i=0;i<10;++i){
        m1+=((arr1[i]-x1)*(arr2[i]-y1));
        m2+=pow((arr1[i]-x1),2);
    }
    m=m1/(1.0*m2);
    b=y1-m*x1;
    printf("\nm = %.1f, b = %.1f, line equation y = %.1fx + %.1f",m,b,m,b);
    return 0;
}
