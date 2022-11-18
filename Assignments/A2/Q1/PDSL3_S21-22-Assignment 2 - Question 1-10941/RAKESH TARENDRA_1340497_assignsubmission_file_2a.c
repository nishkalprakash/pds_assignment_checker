/*
rakesh tarendra
21MT30031
*/
#include <math.h>
#include <stdio.h>

int main() {
    int i,k;
    float z;
    printf("Enter value of Z:");
    scanf("%f",&z);
    printf("Enter value of K:");
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
