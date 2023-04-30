//Name-Srija Biswas
//Section-2
//Roll No.-22ME30069
//Problem 1
//Description-
#include<stdio.h>
#define N 100
int main()
{
    int ar[N],i,n,j,temp,z,k;
    printf("Enter number of elements of array\n");
    scanf("%d",&n);
    if(n>100)
    printf("Error\n");
    else{
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    printf("Original array\n");
    for(i=0;i<n;i++)
    {
       printf("%d,",ar[i]);
    }
    for(j=0;j<n;j++)
    {
        for(k=j;k<n;k++)
        {
            if(ar[k]<0)
            {
                temp=ar[j];
                ar[j]=ar[k];
                ar[k]=temp;
                break;
            }
            }

            }
            printf("Rearranged array\n");

        for(z=0;z<n;z++)
            printf("%d,",ar[z]);

    }

}
