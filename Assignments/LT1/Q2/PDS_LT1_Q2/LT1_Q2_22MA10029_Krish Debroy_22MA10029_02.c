#include <stdio.h>



int main()
{
    int n,num_dig=0,t,rev=0,temp,flag,d,n1,diff;
    printf("Enter an integer : \n");
    scanf("%d",&n);
    n1=n;
    if(n>0)
    {
        flag=0;
    }
    else
    {
        flag=1;
        n*=-1;

    }

    t=n;


    while(t>0)
    {
        t=t/10;
        num_dig++;
    }



    if(n%2!=0)
    {
        t=1;
        for(int i=1;i<num_dig;i++)
        {
            t*=10;
        }
        temp=1;
        /*for (int k=0,k<num_dig,k++)
        {
            d=n
        }*/
        printf("Most significant digits to least significant digits :\n");
        for(int j=0; j< num_dig;j++)
        {
            printf("%d,",n);
            d=n/t;
            rev+= (d*temp);
            temp*=10;
            n= n%t;
            t/=10;
        }

    }
    else if(n%2==0)
    {
        t=n;
        for(int j=0;j<num_dig;j++)
        {
            d=t%10;
            rev=(rev*10) + d;
            t/=10;
        }
        t=1;
        for(int i=1;i<num_dig;i++)
        {
            t*=10;
        }
        printf("Least significant digits to most significant digits :\n");
        for(int k=0;k<num_dig;k++)
        {
            printf("%d,",n/t);
            t/=10;
        }
        /*temp=10;
        for(int i =0; i<num_dig;i++)
        {

            printf("%d,",n);
            n/=temp;

        }*/
    }
    if (flag==1)
    {
        rev*=-1;
    }
    diff= rev-n1;

    if(diff<0)
    {
        diff*=-1;
    }

    printf("\n Reverse number : %d\n",rev);
    printf("Difference between reverse and original number = %d",diff);

}
