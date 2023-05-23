#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,p,q,i,j;

    srand(time(0));
    printf("enter number:");
    scanf("%d",&n);
    int *a;
    a=(int*)malloc(n*sizeof(int));
    p=2;
    q=1000;
   // a=p+rand()%q;
   // printf("%d",a);
    for(i=0;i<n;i++)
    {

        *(a+i)=p+rand()%q;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int cnt =0;
    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=1;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                sum=sum+j;

            }

        }
       if(sum==a[i])
       {
           cnt++;

        printf("\n%d is the perfect number",a[i]);
       }

    }
    if(cnt==0)
    {
        printf("\n no perfect number found");
    }




    return 0;



}