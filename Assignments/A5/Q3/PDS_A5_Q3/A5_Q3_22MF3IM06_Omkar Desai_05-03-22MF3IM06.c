/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-3
description-  using array function and recurrsion --- reversing a array and also its finding cyclic reverse */


#include<stdio.h>
#include<math.h>

void  swap( int *n, int *m);
void reverse(int *arr,int p);
void cyclicshift(int *arr, int n,int m);
int main()
{

    int n,m;
    int arr[100];

    printf("Enter the limit of array and direction\n");

    scanf("%d%d",&n,&m);
    printf("Enter the elements \n");


    for(int i=0; i<n; i++)
    {

        scanf("%d",&arr[i]);
    }
    printf("The original array is \n");
     for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }

    reverse(arr,n);

    printf("\nThe reverse array is \n");

    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    cyclicshift(arr,n,m);
    printf("\nthe array after cyclic shift is \n");

     for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }











    return 0;

}


void swap( int *n, int *m)
{

    int term;

    term = *n;
    *n=*m;
    *m=term;

    return 0;
}



void reverse(int *arr,int n)
{


    for(int i=0; i<(n/2); i++)
    {
        swap ( &arr[i],&arr[n-1-i]);
    }

    return 0;






}



void cyclicshift(int *arr, int n,int m)
{
    int term1;
    int term2;
    if(m==1)
    {


        for(int i=0; i<(n-1); i++)
        {
            swap(&arr[i],&arr[i+1]);



        }
    }

        if(m!=1)
        {
            for(int i=(n-1); i>0; i--)
            {
                swap(&arr[i],&arr[i-1]);



            }


        }



    }


