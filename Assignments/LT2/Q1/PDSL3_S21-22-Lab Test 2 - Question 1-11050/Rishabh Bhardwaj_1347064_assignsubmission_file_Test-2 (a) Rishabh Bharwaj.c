/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include<stdio.h>

//Executing  the function for largest sum with the input of an array and the n.
int largest(int a[], int n)
{
    int i, sum=0;

    for(i=0;i<n;i++)
    {
        if (a[i] > sum)
        {
            sum=a[i];
        }
    }
    return(sum);//returning the sum to the main function.
}

int main(void)
{
    //declaration
    int i, a[100], n, SUM;

    // Enter the value of n between 1 to 20.
    printf("Enter n = ");
    scanf("%d", &n);

    //Input the each element of the array.
    for(i=0;i<n;i++)
    {
        printf("Enter %d element = ", i+1);
        scanf("%d", &a[i]);
    }

    //Execute
    SUM = largest(a,n);

    //final output of the program.
    printf("Largest Sum = %d \n", SUM);
    printf("Sub-arrays = ");

    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }



}
