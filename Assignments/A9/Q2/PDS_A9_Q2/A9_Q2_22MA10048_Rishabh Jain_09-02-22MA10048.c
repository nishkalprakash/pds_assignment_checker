#include <stdio.h>
#include <math.h>

typedef struct Vectors{
    int n;
    int arr[100];
}vector;

void readVect(vector *x)
{
    scanf("%d",&x->n);
    for(int i=0; i<x->n;i++)
    {
        scanf("%d",&x->arr[i]);
    }
}

float modVect(vector x)
{
    float sum=0,res;
    for(int i=0; i<x.n;i++)
    {
        sum+=pow(x.arr[i],2);
    }
    res=pow(sum,0.5);
    return res;
}

float checkOrth(vector x, vector y)
{
    float sum;
    for(int i=0; i<x.n;i++)
    {
        sum+=x.arr[i]*y.arr[i];
    }
    sum=sum/(modVect(x)*modVect(y));
    return sum;
}

int main()
{
    vector x,y;
    float c;
    float epsilon;
    readVect(&x);
    readVect(&y);

    c=checkOrth(x,y);
    epsilon=0.000001;

    if((1-c)<=epsilon)
    {
        printf("Identical vectors");
    }
    else if((1-c)>=(1-epsilon))
    {
        printf("Orthogonal Vectors");
    }
    else
    {
        printf("None");
    }
        return 0;
}
