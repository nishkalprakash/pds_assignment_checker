#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    int n,*a,i,s=0,j,c=0;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    a=(int*) malloc(n*sizeof(int));
    time_t t;
    srand(time(t));
    printf("%d-random number array: ",n);
    for(i=0;i<n;i++)
    {
         a[i]=2+rand()%1000;
        printf("%d ",a[i]);
    }
    printf("\n\n");
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=1;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
                s+=j;
        }
        if(s==a[i])
            {
                printf("%d ",a[i]);
               c++;
            }
    }
    if(c==0)
        printf("No perfect numbers found");
    else
       {
           printf(" are perfect numbers");
       }
     free(a);
    return 0;
}

