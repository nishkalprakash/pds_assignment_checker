# include <stdio.h>
# include <stdlib.h>
# include <time.h>
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    int* a;
    a=(int*) malloc(n*sizeof(int));

    time_t t;
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        a[i]=(int)(2+ rand()%1000);
    }

    printf("%d-random number array: ",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    int ctr=0;
    for(int i=0;i<n;i++)
    {
        int p=0;
        for(int j=1;j<a[i];j++)
        {
            if(a[i]%j==0) p+=j;
        }
        if(p==a[i])
        {
            printf("%d is a perfect number\n",a[i]);
            ctr++;

        }

    }
    if(ctr==0) printf("No perfect number found");
    free(a);
    return 0;
}
