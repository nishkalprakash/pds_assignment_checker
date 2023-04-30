#include<stdio.h>

void main()
{
    int n,t,d,inv=0;
    printf("Enter the integer:");
    scanf("%d",&n);

    t=1;
    while((n/t)!=0) t*=10;

    if (n%2!=0)
        {
            printf("Least significant digits to most significant digits: \n");
             d=n%t;
            while(d!=0)
            {
                printf("%d",d);
                t=t/10;
                d=n%t;
                if(d!=0) printf(",");
            }
        }
    else
       {
           t=t/10;
           printf("Most significant digits to least significant digits: \n");
           while(t!=0)
           {
               d=n/t;
               printf("%d",d);
               t=t/10;
               if(t!=0) printf(",");
           }
       }

    /*    t=1,d=1;
    while((n/t)!=0) t*=10;
     t=t/10;
    int o=n,l,m=1,sum=0;
    while((n/t)!=0)
    {
        inv = (o/t);
        l=inv*m;
        sum=sum+inv;
        o=o-l;
        t=t/10;
        m*=10;
    }
    printf("\n\nReverse number = %d",sum);
    if (sum>n)
    printf("\nDifference between reverse and original number = %d",(sum-n));
    else
    printf("\nDifference between reverse and original number = %d",(n-sum));
    */

}
