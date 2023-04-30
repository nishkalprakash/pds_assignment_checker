/*
Hindvee Rajesh Vispute
22ME10034
Section 2
Lab-5-Q1
*/

#include<stdio.h>

/* function to swap values */

void swap(int *p, int *q)
{
    int temp; // temp is a variable which helps in swaping values
    temp = *p;
    *p = *q;
    *q = temp;
    //printf("%d %d", *p, *q);

}

void reverse(int *a, l, e)
{
    int l, e;
    if(l>=e)
        return;
    else
        {
            swap(&a[l], &a[e]);
            s++;
            e--;
            reverse(*a, l, e);

        }

}

void cyclic

int main()
{
    int  n1, n2; // passing arguements to the function
    int n; // n = size of array
    int direction, i;
    int a[10];

    scanf("%d %d",&n1, &n2);
    swap(&n1,&n2); // call by reference

    printf("\nEnter the size of the array and direction: ");
    scanf("%d %d", &n, &direction);

    printf("\nEnter %d integers: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }


}
