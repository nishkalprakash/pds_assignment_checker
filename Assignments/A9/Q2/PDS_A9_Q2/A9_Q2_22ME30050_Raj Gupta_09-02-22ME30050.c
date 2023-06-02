# include <stdio.h>
# include <stdlib.h>
# include <math.h>


typedef struct vectors
{
    int p;
    float* t;

} vec; // defining a structure to store a vector of n dimension
void read( vec *y) //  function to read the values of the components of n dimensions from the user
{
    printf("Enter the dimension of the vector: ");
    scanf("%d",&(y->p));

    y->t=(float*) calloc((y->p) , sizeof(float));

    for(int i=0;i<(y->p);i++)
    {
        scanf("%f",&(y->t[i]));
    }
}
int modV(vec r) // function to calculate the modulas of a vector
{
    int s=0;
    for(int i=0;i<r.p;i++)
    {
        s+=pow(r.t[i],2);
    }
    return sqrt(s);
}
int check(vec q1,vec q1) // checking they are identical or orthogonal
{
    int sum=0;

    if(q1.p != q2.p) printf("Erroneous input!\n");

    else
    {

        for(int z=0;z<q1.p;z++)
        {
            sum += q1.t[z] * q2.t[z];
        }

    }

    return sum;
}

int main()
{
    vec F1,F2;

    vec* f1;
    f1=&F1;

    vec* f2;
    f2=&F2;

    read(f1);
    read(f2);

    int u=check(F1,F2);

    if(u==0) printf("Vectors are orthogonal!!!\n");
    else
    {
        int p; // the cosine of the angles b/w the vectors
        p=u/(modV(F1)*modV(F2));

        if(p==1 || p==-1) printf("Vectors are identical!!!\n");

        else printf("Vectors are neither identical nor orthogonal!!!\n");

    }


    return 0;

}
