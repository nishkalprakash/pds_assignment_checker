/*
yash agarwal
22na10049
sec 2
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    scanf("%d",&n);
    time_t t;
int *a;
    a=(int *)malloc(n*sizeof(int));

    srand(time(t));


    for(int i=0;i<n;i++)
    {
       a[i]=2+rand()%1000;

    }
    for(int i=0;i<n;i++)
    {
     printf("%d ",a[i]);

    }
    printf("\n");

    int s=0,flag=0;

    for(int i=0;i<n;i++)   //to check for perfect numbers
    {
        s=0;

       for(int j=1;j<=a[i]/2;j++)
       {
             if(a[i]%j==0)
                {
                 s=s+j;

                }
       }




        if(s==a[i])
          {
              flag=flag+1;
            printf("%d  ,",s);

          }

    }

    if(flag==1)
    printf("is a perfect number");
    else if(flag>0)
    printf("are perfect numbers");
    else
    printf("No perfect numbers found");


}
