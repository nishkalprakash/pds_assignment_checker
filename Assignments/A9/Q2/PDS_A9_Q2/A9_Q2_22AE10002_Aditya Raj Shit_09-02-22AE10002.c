#include<stdio.h>
#include<math.h>

typedef struct
{
    int comp[1000];
    int dimension
}Vector;

Vector readVec()
{
    Vector v;
    printf("Enter the dimension of the vector: ");
    //int n;
    scanf("%d",&v.dimension);
    printf("Enter the components of the vector: ");
    for(int i=0;i<v.dimension;i++){
        scanf("%d",&v.comp[i]);
    }
    printf("\n");
    return v;
}

double dotProduct(Vector a,Vector b)
{
    double sum=0;
    for(int i=0;i<a.dimension;i++){
        sum+=(a.comp[i])*(b.comp[i]);
    }
    return sum;
}

double mod(Vector a)
{
    int sqsum=0;
    for(int i=0;i<a.dimension;i++){
        sqsum+=(a.comp[i])*(a.comp[i]);
    }
    double val=sqrt(sqsum);
    return val;
}

int isOrthogonal(Vector a,Vector b)
{
   double sum=0;
   for(int i=0;i<a.dimension;i++){
    sum+=(a.comp[i])*(b.comp[i]);
   }
   if(sum<0.00001 && sum>-0.00001){
        return 1;
   }
   else{
        return 0;
   }
}

int isSimilar(Vector a,Vector b)
{
    double cos;
    cos=(dotProduct(a,b))/((mod(a))*(mod(b)));
    cos=fabs(cos);

    if(cos<1.00001 && cos>0.99999){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    Vector v1,v2;
    v1=readVec();
    v2=readVec();

    //printf("Dot,mod a, mod b: %lf, %lf, %lf, %lf",dotProduct(v1,v2),mod(v1),mod(v2),(dotProduct(v1,v2))/((mod(v1))*(mod(v2))));

    if(v1.dimension!=v2.dimension){
        printf("Sorry! Can't compare the two vectors as the two vectors are of different dimensions.");
    }

    else{
        //printf("Modulus : %lf",mod(v1));
        if(isSimilar(v1,v2)){
            printf("\nIdentical Vectors.\n");
        }
        else if(isOrthogonal(v1,v2)){
            printf("\nVectors are orthogonal.\n");
        }
        else{
            printf("\nThe vectors are neither similar nor orthogonal.\n");
        }

    }
}
