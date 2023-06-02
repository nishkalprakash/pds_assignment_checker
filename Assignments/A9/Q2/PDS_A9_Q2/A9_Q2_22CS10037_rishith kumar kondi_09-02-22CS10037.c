#include<stdio.h>
#include<stdlib.h>
struct vector{
float *p;
};
int main()
{
    int d1,d2,i;float t,v,s=0,u=0;struct vector a,b;
    scanf("%d\n",&d1);
    a.p=(float*)malloc(d1*sizeof(float));
    for(i=0;i<d1;i++)
    {
        scanf("%f",&(a.p[i]));
    }
    printf("\n");
    scanf("%d\n",&d2);
    b.p=(float*)malloc(d2*sizeof(float));
    for(i=0;i<d2;i++)
    {
        scanf("%f",&(b.p[i]));
    }
    if(d1==d2)
    {
        for(i=0;i<d1;i++)
        {
            s=s+a.p[i]*b.p[i];
        }

        t=(b.p[0])/(a.p[0]);
        for(i=0;i<d1;i++)
        {
            v=b.p[i]-t*a.p[i];
            if(v!=0){i=d1;u=1;}
        }
        if(s!=0 && u==0){printf("the vectors are identical"); }
        else if(s==0){printf("the vectors are orthogonal");}
        else printf("the vectors are neither identical nor orthogonal");
    }

}