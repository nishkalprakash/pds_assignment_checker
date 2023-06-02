#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct vector
{
float *v;
int dim;
}vector;
vector read()
{
    vector v1;
    int i;
    printf("Enter dimensions of vector:");
    scanf("%d",&v1.dim);
    v1.v=(float *)malloc((v1.dim)*sizeof(float));
    printf("Enter vector components:");
    for(i=0;i<v1.dim;i++)
    {
        scanf("%f",&v1.v[i]);
    }
    return v1;
}
double dot(vector v1,vector v2)
{
    double sum=0;
    for(int i=0;i<v1.dim;i++)
    {
        sum+=v1.v[i]*v2.v[i];
    }
    return sum;
}
double mod(vector v1)
{
    double sum=0;
    for(int i=0;i<v1.dim;i++)
        sum+=pow(v1.v[i],2);
    sum=sqrt(sum);
    return sum;
}
int ortho(vector v1,vector v2)
{
    double mod_v1,mod_v2;
    double pro;
    double cos;
    pro=dot(v1,v2);
    mod_v1=mod(v1);
    mod_v2=mod(v2);
    cos=pro/(mod_v1*mod_v2);
    if(cos==0)
        return 1;
    else
        return 0;
}
int identical(vector v1,vector v2)
{
    double mod_v1,mod_v2;
    double pro;
    double cos;
    pro=dot(v1,v2);
    mod_v1=mod(v1);
    mod_v2=mod(v2);
    cos=pro/(mod_v1*mod_v2);
    if(cos==1 || cos==-1)
        return 1;
    else
        return 0;
}
int main()
{
    vector v1,v2;
    v1=read();
    v2=read();
    if(v1.dim!=v2.dim)
    {
        printf("Dimensions of both vectors are not same");
        return 0;
    }
    if(ortho(v1,v2))
    printf("Vectors are orthogonal");
    else if(identical(v1,v2))
    printf("Identical vectors");
    else
    printf("Vectors are neither similar nor orthogonal");
    return 0;
}
