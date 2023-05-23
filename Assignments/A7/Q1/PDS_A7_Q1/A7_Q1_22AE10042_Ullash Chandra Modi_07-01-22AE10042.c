/*
*Section 2
*Roll no- 22AE10042
*Name- Ullash Chandra Modi
*Assignment no- 1
*Description-
*/
#include <stdio.h>
#include <time.h>

int main()
{

    int *a,n,i,j,count,b,c;
    srand(time(0));
    printf("enter number of numbers : ");
    scanf("%d",&n);
    a=(int *)malloc(n*sizeof(int));
    for (i=0;i<n;i++)
    {
        *(a+i)=2+rand()%1000;
    }
    printf("%d-Random number array : ",n);
    for (i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    printf("\n");
    count=0;
    for (i=0;i<n;i++)
    {
        b=*(a+i);
        c=*(a+i);
        for (j=1;j<c;j++)
        {
            if((c%j)==0)
            {
                b=b-j;
            }
        }
        if (b==0)
        {
            count++;
            printf("%d ",*(a+i));
        }
    }
    if (count==0)
    {
        printf("No perfect number found.");
    }
    else if (count==1)
    {
        printf("is a perfect number.");
    }
    else if (count>1)
    {
        printf("are perfect number.");
    }

    free(a);

    return 0;
}
