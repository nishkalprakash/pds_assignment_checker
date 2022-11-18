/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxElement(int a[], int n)
{
    //to find the largest number in the array
    int max = a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int minElement(int a[], int n)
{
    //to find the smallest no. in the array
    int min=a[0];
    for(int i=1; i<n; i++)
    {
        if(a[i]<min)
            min = a[i];
    }
    return min;
}

int binElements(int b[],int bn, int r1, int r2, int a[], int n)
{
    int index=0;
    for(int i=0; i<n;i++)
    {
        if(a[i]>=r1 && a[i]<=r2)//checking if array element lies in the range of bin
            b[index++] = a[i];
    }
    printf("bin%d-> ", bn);
    for(int j=0; j<index; j++)
    {
        printf("%d ", b[j]);//printing bin elements
    } 
    printf("\nNumber of elements in bin%d = %d\n", bn,index);
}

int main()
{
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements: ");
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = maxElement(a,n);
    int min = minElement(a,n);
    int nb;
    printf("Enter the no. of bins: ");
    scanf("%d", &nb);
    int range = ceil((max-min+1)/nb);//using max, min and b to find the range of each bin
    printf("r%d\n", range);
    int *b[nb];
    for(int i=0; i<nb; i++)
    {
        int r1, r2;
        b[i] = (int*)malloc((n)*sizeof(int));
        r1 = min + range*i;
        //if(range*nb == max)
            r2 = max-(range*(nb-i-1));
        //else
           // r2 = (range*nb) - (range*(nb-i-1));
        binElements(b[i], i+1, r1, r2, a,n);
    }
}
