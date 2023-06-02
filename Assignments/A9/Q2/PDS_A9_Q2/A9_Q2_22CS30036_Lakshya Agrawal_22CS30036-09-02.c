/*
Section 2
Roll No : 22CS30036
Name : Lakshya Agrawal
Assignment No : 9
Description :  Vector Algebra
*/

#include<stdio.h>

typedef struct Vector{
   int *arr;
}Vector;

int error_check_for_n(int n)
{
    if(n<0 || n==0)
    {
        printf("\nError: Invalid Dimension\n");
        return 1;
    }
    return 0;
}

void input_vector(Vector V,int n)
{
    for(int i=0;i<n;i++)
       scanf("%d",&(V.arr)[i]);
}

float magnitude(Vector v,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
      sum+= (v.arr)[i] * (v.arr)[i];
    return sqrt(sum);
}

int dot_product(Vector V1,Vector V2,int n1,int n2)
{
    int sum = 0;
    for(int i=0;i<n1;i++)
        sum+=(V1.arr)[i] * (V2.arr)[i];
    return sum;
}

int identical(Vector V1,Vector V2,int n1,int n2)
{
    float ratio;
    for(int i=0;i<n1;i++)
    {
        if(i==0)
           ratio = (float)(V1.arr)[i]/(V2.arr)[i];
        if(ratio != (float)(V1.arr)[i]/(V2.arr)[i])
          return 0;
    }
    return 1;
}

int orthogonal(Vector V1,Vector V2,int n1,int n2)
{
   int cos_theta = dot_product(V1,V2,n1,n2);
   if(cos_theta==0)
    return 1;
   return 0;
}

int compare_vectors(Vector V1,Vector V2,int n1,int n2)
{
   if(identical(V1,V2,n1,n2))
    return 1;
   else if(orthogonal(V1,V2,n1,n2))
    return 2;
   else
    return 0;
}

int main()
{
    int n1,n2;
    Vector V1,V2;

    scanf("%d",&n1);
    if(error_check_for_n(n1)) return 0;
    V1.arr = (int*)malloc(n1*sizeof(int));
    input_vector(V1,n1);

    printf("\n");
    scanf("%d",&n2);
    if(error_check_for_n(n2)) return 0;
    V2.arr = (int*)malloc(n2*sizeof(int));
    input_vector(V2,n2);

    if(n1!=n2)
    {
        printf("\nError: Can not compare two Vectors of different dimensions\n");
        return 0;
    }

    int res = compare_vectors(V1,V2,n1,n2);
    if(res==1)
        printf("\nIdentical Vectors\n");
    else if(res==2)
        printf("\nVectors are orthogonal\n");
    else
        printf("\nThe vectors are neither similar nor orthogonal.\n");

    return 0;
}

