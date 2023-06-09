/*
* Section 2
* Roll No : 22PH1002
* Name : Abhimanyu Dev Upadhyay
* Assignment No : 2
* Description : Recursive Max
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int max(int *a, int n)
{
    //The logic is that we are just comparing 2 numbers, the element at index and the maximum of the rest of the array after it. The second part gives recursion
    //Returning variable m
    int m;

    //Base Case
    if(n==1)
    {
        return *a;
    }

    //Conditions
    if(*a > max(a+1,n-1))
    {
        m = *a;
    }
    else
    {
        m = max(a+1,n-1);
    }

    return m;
}


int main()
{
    //Giving seed to random
    srand(time(0));

    //Getting inputs
    int n,p,q,i;
    scanf("%d", &n);
    scanf("%d", &p);
    scanf("%d", &q);

    //Control conditions
    if(n<=0)
    {
        printf("\n\nInvalid value of n");
        return 0;
    }
    if(p>q)
    {
        printf("p should be less than or equal to q");
        return 0;
    }

    //Making array with random numbers
    int *numbers;
    numbers = (int*)malloc(sizeof(int)*n);

    for(i = 0; i <n; i++)
    {
        numbers[i] = rand()%(q-p+1)+p;
    }

    //Recursive function
    int m = max(numbers,n);

    //Printing
    printf("\nList = {%d", numbers[0]);
    for(i = 1; i < n; i++)
    {
        printf(", %d", numbers[i]);
    }
    printf("}\nMax = %d", m);

    free(numbers);
    return 0;

}

