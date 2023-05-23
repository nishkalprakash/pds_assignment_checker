#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int perfect_num(int n)
{
    int sum =0;
    int j ,sqrt;
    for(int i=1; i< n; i++)
    {
        if(n%i ==0)
        {
            sum +=(i);
        }

    }
    if(sum ==n)
        {
            return 1;
        }


    return 0;
}


int main()

{
    int *a, n,j, p ,flag;
    printf("enter the number of elements for array:");
    scanf("%d" ,&n);
     a = (int*) malloc(n * sizeof(int));
    for(int i=0; i<n;i++)
    {
        a[i] = p + rand()%999;
        if(perfect_num(a[i]))
        {
            printf("%d" ,a[i]);
            flag++;
        }

        if(flag==0)
        {
            printf("no number is perfect");
        }

        else
        {
            printf("%d is perfect number \n" ,a[i]);
        }
    }
    return 0;
}
