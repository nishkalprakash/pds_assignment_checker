#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter two  numbers in the range [-999,999] : \n");
    scanf("%d %d",&a,&b);
    if(a/100==0 && b/100==0)
    {
        if(a/10==b%10 && a%10==b/10)printf("Perfect Pair");
        else printf("Not Perfect Pair .");
    }
    else
    {
        if(a/100==0 || b/100==0) printf("Wrong Input");
        else
        {
            if(a/1000!=0 || b/1000!=0)printf("Wrong input");
            else
            {
                if((a%10)==b/100 && (a/10)%10==(b/10)%10 && a/100==b%10 )printf("Perfect Pair \n");
                else printf("Not Perfect pair");
            }
        }
    }
    return 0;
}
