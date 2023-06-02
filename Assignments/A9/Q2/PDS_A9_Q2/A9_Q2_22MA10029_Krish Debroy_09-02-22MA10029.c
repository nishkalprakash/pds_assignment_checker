#include <stdio.h>
#include <math.h>
# define tolerance 0.00001


typedef struct
{
    int n;
    int vec[100];
} vector;


vector read ()
{
    vector res;
    printf("\nEnter the number of dimensions in the vector.");
    scanf("%d",&res.n);
    while(res.n<=0)
    {
        printf("Dimensions have to be positive.Try again.\n");
        printf("Enter the number of dimensions in the vector.\n");
        scanf("%d",&res.n);
    }
    printf("Enter the elements of the vector :\n");
    for(int i=0;i<res.n;i++)
    {
        scanf("%d",&res.vec[i]);
    }
    fflush(stdin);
    return res;
}

double mod_vec(vector c)
{
    double element=0 ;
    /*for(int i=0;i<c.n;i++)
    {
        printf("%d ",c.vec[i]);
    }
    printf("\n");*/
    for(int i=0;i<c.n;i++)
    {
        element += pow((double)c.vec[i],2);
    }
    return sqrt(element);
}

void vec_prop(vector a, vector b)
{
    double sq=0.0;
    if (a.n!=b.n)
    {
        printf("The two vectors are neither similar nor orthogonal.");
    }
    else
    {
        for(int j=0;j<a.n;j++)
        {
            sq += (a.vec[j] * b.vec[j]);
        }
        sq = fabs(sq /(mod_vec(a)*mod_vec(b)));

        if (fabs(1.0-sq)<=tolerance)
        {
            printf("Identical Vectors.");
        }
        else if (fabs(sq)<=tolerance)
        {
            printf("Vectors are orthogonal.");
        }
        else
        {
            printf("The two vectors are neither similar nor orthogonal.");
        }

    }
}



int main()
{
    vector a,b;
    a=read();
    b=read();
    printf("\n");
    vec_prop(a, b);


    return 0;

}

