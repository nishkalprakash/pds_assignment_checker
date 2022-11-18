/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/

#include<stdio.h>

// the main function.
int main()
{
    int a[100], i ,n ,b, bin1[100], bin2[100], bin3[100], l=0, m=0, k=0;

    // input for numbers of elements.
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // input for each elements.
    for(i=0; i<n;i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    // input for bins
    printf("Enter the numbers of bins: ");
    scanf("%d", &b);


    for (i=0;i<n;i++)
    {
        bin1[i]=0;
        bin2[i]=0;
        bin3[i]=0;
    }

    // operation for bins.
    for (i=0; i<n;i++)
    {
        if (a[i]<=11 && a[i]>0)
        {
            bin1[i]=a[i];
            l++;
        }

        if (a[i]<=20 && a[i]>11)
        {
            bin2[i]=a[i];
            m++;
        }

        if (a[i]> 20)
        {
            bin3[i]=a[i];
            k++;
        }
    }

    // for bin1 output.
    printf("bin1->");
    for(i=0;i<n;i++)
    {


        if (bin1[i] != 0)
        {
        printf("%d ", bin1[i]);
        }

    }
    printf("\n");
    printf("Number of elements in bin1 = %d\n", l);

    // for bin2 output.
     printf("bin2->");
     for(i=0;i<n;i++)
    {

        if (bin2[i] != 0)
        {
        printf("%d ", bin2[i]);
        }

    }
    printf("\n");
    printf("Number of elements in bin2 = %d\n", m);

    // for bin3 output.
    printf("bin3->");

     for(i=0;i<n;i++)
    {
         if (bin3[i] != 0)
         {
        printf("%d ", bin3[i]);
         }

    }
    printf("\n");
    printf("Number of elements in bin3 = %d\n", k);
}
