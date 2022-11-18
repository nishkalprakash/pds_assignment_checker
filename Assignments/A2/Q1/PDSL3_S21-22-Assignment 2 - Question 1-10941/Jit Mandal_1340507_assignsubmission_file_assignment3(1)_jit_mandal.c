#include <math.h>
#include <stdio.h>

int main() {
    float z;
    int k,i;
    printf("Enter Z:");
    scanf("%f",&z);
    printf("Enter K:");
    scanf("%d",&k);
    float z1=z,temp,s;
    for(i=1;i<=k;i++)
    {
        if (z1==0)
        break;
        else s=sqrt(z1);
        temp=z1;
        z1=z1-s;
        if (z1<0)
        z1=-z1;
        if(temp==z1)
        {s=s-1/(float)(i*i);
        z1=z1-s;
        if (z1<0)
        z1=-z1;
        }
        printf("(%f,%d)\n",z1,i);
    }

    return 0;
}
