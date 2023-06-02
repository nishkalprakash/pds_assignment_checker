/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 9
Description : Vectors Algebra
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct vector_dim{
    int dimn;
    int *arr;
}vec;



vec first_vector_intput()
{
    vec v1;

    //First Vector
    printf("First Vector \n");
    printf("Enter dimension : ");
    scanf("%d", &v1.dimn);
    printf("Enter data of vector : ");
    //Initializing memory
    v1.arr = (int *) malloc (v1.dimn*sizeof(int));
    //Inputting elements in array
    for(int i = 0; i < v1.dimn; i++)
    {
        scanf("%d", &*(v1.arr+i));
    }

    printf("\n");

    return v1;
}

vec second_vector_input()
{
    vec v2;

    //Second Vector
    printf("\nSecond Vector \n");
    printf("Enter dimension : ");
    scanf("%d", &v2.dimn);
    printf("Enter data of vector : ");
    //Initializing memory
    v2.arr = (int *) malloc (v2.dimn*sizeof(int));
    //Inputting elements in array
    for(int i = 0; i < v2.dimn; i++)
    {
        scanf("%d", &*(v2.arr+i));
    }

    return v2;
}


void identical_and_orthogonal_check(vec v1, vec v2)
{
    float numerator, denominator, denominator_exp1, denominator_exp2, cos_val;
    numerator = 0;
    denominator_exp1 = 0;
    denominator_exp2 = 0;

    for(int i = 0; i < v1.dimn; i++)
    {
        numerator += (*(v1.arr+i))*(*(v2.arr+i));
        denominator_exp1 += pow(*(v1.arr+i), 2);
        denominator_exp2 += pow(*(v2.arr+i), 2);
    }

    denominator = (sqrt(denominator_exp1*denominator_exp2));

    cos_val = numerator/denominator;

    if(cos_val == 1.0 || cos_val == -1.0)
    {
        printf("\nIdentical Vectors\n");
    }

    else if(cos_val == 0)
    {
        printf("\nOrthogonal Vectors\n");
    }

    else
        printf("\nNeither Similar Nor Orthogonal\n");

    return;
}

int main()
{
    //To input vectors we call our functions which does so
    vec v1, v2;
    v1 = first_vector_intput();
    v2 = second_vector_input();

    //To check for given conditions we call given function
    identical_and_orthogonal_check(v1, v2);

    return 0;
}


