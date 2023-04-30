//name:nagara.akhil
//roll no:22IM30022
//assignment 5
#include<stdio.h>
#include<stdlib.h>

#define N 100

int main ()

{
    int arr[N];
    int n,i,j,temp;
    printf("Enter the number of elements (<= %d):",N);
    scanf("%d",&n);

    if (n>N)
    {
        printf("Error : the number of elements exceeds the limit (%d).\n",N);
        return 1;
    }
    printf("Enter %d integers:\n",n);
    for (i=0; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    i=0;
    j=n-1;
    while (i<=j)
    {
        if (arr[i]<0) {i++;}
        else if (arr[j]>=0) {
            j--;}
        else {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }

    }
    printf("The arranged array is:\n");
    for (i=0; i<n; i++)
    {
        printf("%d",arr[j]);
    }
    printf("\n");

    return 0;
}
