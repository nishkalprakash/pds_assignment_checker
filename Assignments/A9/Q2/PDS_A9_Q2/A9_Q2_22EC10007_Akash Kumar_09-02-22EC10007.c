/*
* Name: Akash Kumar
* Roll no.: 22EC10007
* Section : 2
* Assignment : 9
* Question: 2
* Description:
*/

#include <stdio.h>

 typedef struct vect {
    int n;
    float arr[30];
}   vect;

int similar (vect a, vect b)
{
    int i = 1;
    int sim = 1;
    float val = a.arr[0] / b.arr[0];

    while ( i<a.n)
    {
        if (( a.arr[i] / b.arr[i]) != val)
        {
            sim = 0;
            break;
        }

        else i++;
    }

    return sim;
}

float ortho(vect a, vect b)
{
    int i = 0;
    int sum = 0;
    while (i<a.n)
    {
        sum += a.arr[i] * b.arr[i];
        i++;
    }
    return sum;
}

int main()
{


    vect a ,b;

    // Starting with taking input for the number of components
    printf("Enter the number of components in the vector a \n");
    scanf("%d", &a.n);




    // Input for vector a

    printf("Enter the components of a\n");
    int i = 0;
    while (i<a.n)
    {
        scanf("%f", &a.arr[i]);
        i++;
    }



    printf("Enter the number of components in the vector b \n");
    scanf("%d", &b.n);

    // Input for vector b

    printf("Enter the components of b\n");
    i = 0;
    while (i<b.n)
    {
        scanf("%f", &b.arr[i]);
        i++;
    }



    if (a.n == b.n)
    {


    // Now let' see if they are identical

    int sim =  similar(a,b);


    if (sim == 1)
    {
        printf("Identical vectors\n");
    }

    // Now let's see if they are orthogonal

    float sum = ortho(a, b);


    if (sum == 0)
    {
        printf("The vectors are orthogonal\n");
    }

    // If neither similar nor orthogonal
    if (sim == 0 && sum != 0)
    {
        printf("The vectors are neither similar nor orthogonal\n");
    }

    }

    else
    {
        printf("Not the same size, try from start\n");
    }


    return 0;
}
