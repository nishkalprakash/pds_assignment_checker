/*NAME:ENUGANTI YASHASWINI
 ROLL:22NA10011
 */
#include<stdio.h>
#include<time.h>
int max1(int m1,int m2,int m)
{
    if(m1<m2)
    {
        m=m2;
    }else
    {
        m=m1;
    }
    return m;
}
int max(int *a,int n)
{
    int m,*b,*c,i,j,k,l,m1,m2;
    l=n/2;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            a[i]=b[j];
        }
        for(k=0;j<l;j++)
        {
            a[n-l]=c[k];
        }
        m1=max(*b,l);
        m2=max(*c,l);
        m=max1(m1,m2,m);



    }

}
int main()
{
    int n,p,i,q,m,a;
    printf("enter the no of random numbers to be generated");
    scanf("%d",&n);
    int numbers[n];
    time_t t;
    if(n>0)
    {
           printf("Enter the min value of random numbers:");
           scanf("%d",&p);
           printf("Enter the max value of random numbers:");
           scanf("%d",&q);
           if(p<=q)
                {
                      for(i=0;i<n;i++)
                    {
                        numbers[i]=p+rand()%q;
                    }
                    printf("List=");
                    for(i=0;i<n;i++)
                    {
                        printf("%d\t",numbers[i]);
                    }
                    for(i=0;i<n;i++)
                    {
                        m=numbers[0];
                        if(numbers[i]>m)
                            m=numbers[i];
                    }
                    printf("\nMax=%d",m);


              }else printf("p should be less than or equal to q");

    }else printf("Invalid value of n");


}




