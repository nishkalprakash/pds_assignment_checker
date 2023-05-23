#include<stdio.h>


// for swapping of two values

//void swap (int *a, int *b)
int main()
{
    int m,n,a,b;
    m=5;    //suppose m =5
    n=3;    // suppose n =3
    printf("\n m is %d, n is %d \n",m,n);
    swap(&m,&n);
    printf("\n m is %d, n is %d\n",m,n);
    return 0;

}

void swap( int*a , int*b)
{

    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}
