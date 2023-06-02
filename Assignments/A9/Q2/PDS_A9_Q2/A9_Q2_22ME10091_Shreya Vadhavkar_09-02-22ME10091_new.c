/*Shreya Vadhavkar
22ME10091
Lab 9
Section 2
question 2*/
#include<stdio.h>
#include<malloc.h>
struct Vec
{
    int n;
    int *p;
};
void read(struct Vec *a)
{
    scanf("%d", &a->n);
    a->p=(int *)malloc((a->n)*sizeof(int));
    int i;
    for(i=0;i<a->n;++i)
    {
        scanf("%d", &(*a).p[i]);
    }
}
int sim(struct Vec,struct Vec);
int ortho(struct Vec, struct Vec);

int main()
{
    struct Vec a,b;
    read(&a);
    read(&b);

   if(sim(a,b)==-1)
    {
        if(ortho(a,b)==-1)
        {
            printf("The vectors are neither similar nor orthogonal.");
        }
        else
        {
            printf("Vectors are orthogonal");
        }
    }
    else
    {
        printf("Identical Vectors");

    }
    return 0;
}

int sim(struct Vec a,struct Vec b)
{
    float c[a.n];
    int i;
    for(i=0;i<a.n;++i)
    {
        c[i]=(((float)a.p[i])/((float)b.p[i]));
    }
    float temp=c[0];
    int flag=0;
    for(i=0;i<a.n;++i)
    {
        if(temp ==c[i])
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
int ortho(struct Vec a,struct Vec b)
{
    float sum=0;
    int i;
    for(i=0;i<a.n;++i)
    {
        sum=sum+((float)a.p[i]*(float)b.p[i]);
    }
    if(sum==0)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}
