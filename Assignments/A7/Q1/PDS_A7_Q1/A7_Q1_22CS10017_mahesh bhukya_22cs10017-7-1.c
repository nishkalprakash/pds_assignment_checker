/* 22cs10017
bhukya mahesh
assignment 07 */



#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
   int r,*p,n,i,g=0,c,k,f;
   time_t t;

    srand(time(0));
    printf("enter the size of the array : ");
    scanf("%d", &n);

    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p[i]=2+rand()%999 ;
    }

    printf("random array is : %d\n", n);


        for(i=0;i<n;i++)
        {
            printf(" %6d ", p[i]);
        }
        printf("\n");


    for(c=0;c<n;c++)
    {
        for(f=1;f<n;f++)
        {
            if(p[c]%k==0)
            {
                f=f*k;
            }

        if(f==p[c])
        {
            printf("%d",p[c]);
            g++;
        }
        if(g!=0)
        {
        printf("perfect numbers ");
        }
        else
         {
            printf("no perfect numbers found  ");
         }


        }
    }



    return 0;
}
