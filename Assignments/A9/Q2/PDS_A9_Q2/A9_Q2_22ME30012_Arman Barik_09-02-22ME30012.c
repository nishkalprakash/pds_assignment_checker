# include <stdio.h>
# include <stdlib.h>
# include <math.h>


typedef struct vectors
{
    int n;
    float* arr;

} vec; // defining a structure to store a vector of n dimension
void readVector( vec *X) //  function to read the values of the components of n dimensions from the user
{
    printf("Enter the dimension of the vector: ");
    scanf("%d",&(X->n));
    X->arr=(float*) calloc((X->n) , sizeof(float));
    for(int i=0;i<(X->n);i++)
    {
        scanf("%f",&(X->arr[i]));
    }
}
int modVector(vec X) // function to calculate the modulas of a vector
{
    int sum=0;
    for(int i=0;i<X.n;i++)
    {
        sum+=pow(X.arr[i],2);
    }
    return sqrt(sum);
}
int checkVector(vec X1,vec X2) // checking the vectors whether they are identical or orthogonal
{
    int sum=0;
    if(X1.n!=X2.n) printf("Erroneous input!!!\n");
    else
    {

        for(int i=0;i<X1.n;i++)
        {
            sum+=X1.arr[i]*X2.arr[i];
        }

    }

    return sum;
}

int main()
{
    vec X1,X2;
    vec* x1; x1=&X1;
    vec* x2; x2=&X2;
    readVector(x1);
    readVector(x2);

    int R=checkVector(X1,X2);
    if(R==0) printf("Vectors are orthogonal!!!\n");
    else
    {
        int x; // the cosine of the angles b/w the vectors
        x=R/(modVector(X1)*modVector(X2));
        if(x==1 || x==-1) printf("Vectors are identical!!!\n");
        else printf("Vectors are neither identical nor orthogonal!!!\n");
    }
    return 0;

}
