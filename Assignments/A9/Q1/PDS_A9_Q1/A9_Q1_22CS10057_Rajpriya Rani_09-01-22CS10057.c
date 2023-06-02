#include <stdio.h>
void main()
{
    int n,a,b,c;
    printf("Enter a positive number:  ");
    scanf("%d",&n);
    if(n>0)
    {

        a=0;
        b=1;
        c=1;
        while(c<n)
        {
            c=a+b;
            a=b;
            b=c;
        }
        if(c==n)
        printf("entered number is fibonacci ");
        else
            {
                if((b-n)>=(n-a))
                    printf("%d is nearest fibonacci number",a);
                else
                    printf("%d is nearest fibonacci number",b);
            }
    }
    else
        printf("please give a positive number ");
}
