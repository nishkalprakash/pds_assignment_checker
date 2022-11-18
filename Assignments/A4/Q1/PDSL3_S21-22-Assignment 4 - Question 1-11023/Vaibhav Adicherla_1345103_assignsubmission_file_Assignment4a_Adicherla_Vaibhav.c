/* name: Adicherla Vaibhav
Roll no.:21BT10002
Department: Biotechnology and Biochemistry Btech4yrs
Package:code blocks
Operating system: Windows*/

#include <stdio.h>
void combiAll(int a[], int data[], int beg, int end,
                     int index, int I);


void printcombi(int a[], int n, int I) // in a[] of size n. This function mainly uses combiAll()

{

// A temporary array to store all combinations
    int data[I];

    // Print all combination using temporary array 'data[]'
    combiAll(a, data, 0, n-1, 0, I);
}



   //beg & end is Starting and Ending indexes in a[]


void combiAll(int a[], int data[], int beg, int end,
                     int index, int I)
{
    // if current combination is satisfied print it
    if (index == I)// I is Size of a combination to be printed
    {
        for (int i=0; i<I; i++)
            printf("%d ", data[i]);
        printf("\n");
        return;
    }





    for (int i=beg; i<=end && end-i+1 >= I-index; i++)// "end-i+1 >= r-index" makes sure that including one element at index makes other combinations with remaining elements
    {
        data[index] = a[i];
        combiAll(a, data, i+1, end, index+1, I);
    }
}


int main()// program to print the output by using the function
{

    int I = 3;
     int a[] = {5, 7, 12,3};
int n = sizeof (a)/ sizeof (a[0]);
    printcombi(a,n,I);
}
