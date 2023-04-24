#include <stdio.h>
#include <math.h>

int main()
{
    int x,i=0,y,temp,k,z,temp2,a,rev=0;
    for (;;)
    {
        printf("enter the number : ");
        scanf("%d",&x);
        z=x;
        while (x>0)
        {
            x=x/10;
            k++;
        }
        if (k!=1)
        {
            break;
        }
        else printf("enter the number with more than 1 digit\n\n");
    }
    y=z;
    a=y;
    while (z>0)
    {
        z=z/10;
        i++;
    }
    if (y>0)
    {


        if ((y%2)==0)
        {
            for(int j=i-1; j>0; j--)
            {

                temp=y/(10*j);
                printf("%d, ",temp);

            }
            printf("%d",y);
        }
        else if ((y%2)==1)
        {
            printf("%d ,",y);
            for (int j=i-1; j>0; j--)
            {
                temp=y%(10*j);
                printf("%d ,",temp);
            }
        }
    }
    else if (y<0)
    {
        y=y*(-1);


        if ((y%2)==0)
        {
            for(int j=i-1; j>0; j--)
            {

                temp=y/(10*j);
                printf("%d, ",temp);

            }
            printf("%d",y);
        }
        else if ((y%2)==1)
        {
            printf("%d ,",y);
            for (int j=i-1; j>0; j--)
            {
                temp=y%(10*j);
                printf("%d ,",temp);
            }
        }

    }
    if (a>0)
    {
        for(int j=1;j<=i;j++)
    {
        temp2=a%(10*j);
        rev=rev+(temp2*(pow(10,i-j));

    }
    printf("reverse no. = %d\n",rev);
    }
    else
    {
         for(int j=1;j<=i;j++)
    {
        temp2=y%(10*j);
        rev=rev+(temp2*(pow(10,i-j));

    }
    printf("\nreverse no. = %d\n",-rev);
    }
    printf("\ndifference between reverse and original = %d\n",rev-y);



    return 0;
}
