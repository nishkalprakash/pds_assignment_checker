#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
        int n;
        float *dim;

    }vect;

int main()
{
    vect v1,v2;
    int i;
    printf("Enter the dimension of vector 1:");
    scanf("%d",&(v1.n));
    v1.dim=(float *) malloc((v1.n)*sizeof(float));


    printf("Enter the components of vector 1:");
    readvectors(&v1,(v1.n));
    /*for(i=0;i<(v1.n);i++)
    {
        printf("%f",(v1.dim[i]));
    }*/
    printf("Enter the dimension of vector 2:");
    scanf("%d",&(v2.n));
    v2.dim=(float *) malloc((v2.n)*sizeof(float));

    if ((v1.n)!=(v2.n))
    {
        printf("The dimension of both the vectors should be same");
    }
    else
    {
        printf("Enter the components of vector 2:");
        readvectors(&v2,(v2.n));
        check(&v1,&v2,(v2.n));
    }




}
void readvectors(vect *v1,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%f",&(v1->dim[i]));
    }

}
void check(vect *v2,vect *v3,int n)
{
    int i;
    float md1=0,md2=0,dot=0,ang;
    for(i=0;i<n;i++)
    {
        md1=(((v2->dim[i])*(v2->dim[i]))+md1);
        md2=(((v3->dim[i])*(v3->dim[i]))+md2);
        dot=(((v2->dim[i])*(v3->dim[i]))+dot);


    }
    md1=pow(md1,0.5);
    md2=pow(md2,0.5);
    if((md1*md2)!=0)
    {
        ang=(dot/(md1*md2));

    }



    if(ang==0)
    {
        printf("Vectors are orthogonal");
    }
    else if (((1-fabs(ang))<0.001))
    {
        printf("Identical vectors");
    }
    else
    {
        printf("The vectors are neither similar nor orthogonal");
    }
}
