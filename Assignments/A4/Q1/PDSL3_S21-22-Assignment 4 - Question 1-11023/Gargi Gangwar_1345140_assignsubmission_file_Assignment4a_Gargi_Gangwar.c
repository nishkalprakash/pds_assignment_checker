//C program to find all combinations of nos, in an array of a particular length
#include <stdio.h>

void ComboRepeatUtil(int temp[], int a[], int index, int l, int start, int end)
{
    //when index becomes equal to l current combination has to be printed
    if(index==l)
    {
        for(int j=0; j<l; j++)
            printf("%d", a[temp[j]]);
        printf("\n");
        return;
    }

    for(int j=start; j<=end; j++)
    {
        temp[index]=j;
        ComboRepeatUtil(temp, a, index+1, l, j, end);
    }
    return;
}

//the actual function that prints all combinations of size l using recursion
//array a[] of size n with repetitions
void ComboRepeat(int a[], int n , int l)
{
    int temp[l+1];   //memory is being allocated
    ComboRepeatUtil(temp, a, 0, l, 0, n-1);     //calling recursive function
}

//the driver program
int main()
{
    int a[]={4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int l=3;
    ComboRepeat(a, n, l);
    return 0;
}
