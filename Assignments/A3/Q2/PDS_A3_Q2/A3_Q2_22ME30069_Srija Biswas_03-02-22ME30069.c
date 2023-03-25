#include<stdio.h>
int main()
{
    int a,b,sum,c=0;
    printf("Enter two numbers between -999 and 999\n");
    scanf("%d%d",&a,&b);
    if((a>=-999 && a<=-100) || (a>=100 && a<=999))
    {
        if((b>=-999 && b<=-100) || (b>=-100 && b<=999))
       {
          sum=(a/100)+(((a%100)/10)*10)+(((a%100)%10)*100);
       }
       else
       {
        printf("Wrong Input");
        c=1;
       }
    }
    else if((a>=-99 && a<=-10) || (a>=10 && a<=99))
    {
        if((b>=-99 && b<=-10) || (b>=-10 && b<=99))
        {
            sum=(a/10)+((a%10)*10);
        }
        else
        {
         printf("Wrong Input");
         c=1;
        }
    }
    else
    {
       printf("Wrong input");
       c=1;
    }
    if(c==0)
    {
    if(sum==b)
    printf("%d and %d are Perfect Pair",a,b);
    else
    printf("%d and %d are not Perfect Pair",a,b);
    }
    return 0;
}

