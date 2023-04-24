#include <stdio.h>
#include <math.h>

int main()
{
    int n,n2,n3,n4,t=0;
    int x,y,z;
    int rev=0,digit,diff;
    printf("Enter the Integer:");
    scanf("%d",&n);
    n2=n;
    n3=n4=n;
    if (n4<0)
    {
        n4=n4*-1;
    }
    if (n<0)
    {
        n=n*-1;
    }

    /*Calculating number of digits*/
    while(n>=1)
        {
            t+=1;
            n=(n-(n%10))/10;
        }
    if (n3%2==1)
    {
        printf("Most significant digits to least significant digits:\n");
        while(t>1)
        {
            y=pow(10,(t-1));
            x=(n4-n4%y)/y;
            printf("%d, ",x);
            t--;
        }
        printf("%d",n4);

    }
    else
    {
        printf("Least significant digits to most significant digits:\n");
        printf("%d",n4);
        while(t>1)
        {
            y=pow(10,(t-1));
            x=n4%y;
            printf(", %d",x);
            t--;
        }


    }

    if (n2<0)
    {
        n2=n2*-1;
    }

    /*Calculating reverse of the number*/
    while(n2>=1)
    {
        digit=n2%10;
        rev=rev*10 + digit;
        n2=(n2-digit)/10;
    }
    if(n3<0)
    {
        rev=rev*-1;
    }
    printf("\nReverse number = %d",rev);

    /*Calculating the difference between the reversed and original number*/
    diff=rev-n3;
    if (diff<0) diff=diff*-1;
    printf("\nDifference between Reverse and original number = %d",diff);
}
