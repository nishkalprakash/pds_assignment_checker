

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct vec{
   int *v;
};
int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int m;
    printf("enter the value of m");
    scanf("%d",&m);
    if(m!=n)
    {
        printf("error enter the same dimension");
        return 0;
    }
    else{
    struct vec v1;
    struct vec v2;
    v1.v=(int*)malloc(n*sizeof(int));
    v2.v=(int*)malloc(n*sizeof(int));
    printf(" the value of n is %d",n);
     printf("\nthe first vector is\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v1.v[i]);
    }
    printf("\nthe second vector is\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&v2.v[i]);
    }
    printf("\nthe first vector is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",v1.v[i]);
    }
     printf("\nthe second vector is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d",v2.v[i]);
    }
    double num,den,cos,mod1,mod2;
    for(int i=0;i<n;i++)
    {
       mod1+=(pow(v1.v[i],2));
    }
    mod1=sqrt(mod1);
    printf("\n%lf\n",mod1);
     for(int i=0;i<n;i++)
    {
       mod2+=(pow(v2.v[i],2));
    }
    mod2=sqrt(mod2);
     printf("%lf\n",mod2);
    for(int i=0;i<n;i++)
    {
       num+=v2.v[i]*v1.v[i];
    }
     printf("%lf\n",num);
    den=mod1*mod2;
     printf("%lf\n",den);
    cos=num/den;
     printf("%lf\n",cos);
    if(cos-0.00000<=0.000001)
    {
        printf("the vectors are orthogonal");
    }
    else if(cos==1||(cos<1&&cos>0.99)||cos==(-1))
    {
        printf("the vectors are indentical");
    }
    else
    {

        printf("the vectors are neither orthogonal and nor indentical");
    }
    }


}
