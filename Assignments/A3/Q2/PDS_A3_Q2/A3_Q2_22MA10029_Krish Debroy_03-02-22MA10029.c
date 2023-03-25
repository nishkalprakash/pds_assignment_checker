#include <stdio.h>

int main()
{
    int n1,n2, temp;
    int d1,d2,d3;
    printf("Enter a pair of numbers :\n");
    scanf("%d%d",&n1,&n2);
    d1=n1%10;/*d1 is ones digit */
    n1=n1/10;
    d2=n1%10;/*d2 is tens digit */
    n1=n1/10;
    d3=n1%10;/*d3 is hundreds digit */

    if (d3!=0)
    {
        temp= (d1*100)+(d2*10)+d3;

        if (temp==n2)
            printf("Perfect Pair.");
        else
            printf("Not a Perfect Pair.");
    }
    else
    {
        if ((n2/100)!=0)
        {
            printf("Wrong Input.");
        }
        else
        {
            temp= (d1*10)+d2;
            if (temp==n2)
                printf("Perfect Pair.");
            else
                printf("Not a Perfect Pair.");
        }
    }


}
