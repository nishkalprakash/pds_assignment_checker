//22ME10091
#include<stdio.h>
int main()
{
    int a, b, absa, absb;
    printf("Input:");
    scanf("%d %d", &a, &b);
    (a>0) ? (absa=a) :(absa=(-a));
    (b>0) ? (absb=b) : (absb=(-b));
    if((absa>=100 && absb<100) || (absb>=100 && absa<100) || (absa>=10 && absb<10) ||(absb>=10 && absa<10))
    {

        printf("Wrong input");
    }
    else
    {
        if(a*b>=0)
        {   if(absa>=100)
            {
                if((a/100)==(b- (10*(b/10))) && ((a/10)- (10*(a/100)))== ((b/10)- (10*(b/100))) && (a-(10*(a/10))) == (b/100))
                    {
                        printf("Perfect pair");
                    }
                else{printf("Not a perfect pair");}
            }
            else if(absa>=10)
            {
                if((a/10)==(b - (10*(b/10))) && (b/10)==(a - (10*(a/10))))
                {
                    printf("Perfect pair");
                }
                else{printf("Not a perfect pair");}
            }
            else
            {
                if(a==b)
                {
                    printf("Perfect pair");
                }
                else{printf("Not a perfect pair");}
            }
        }
        else
        {
            printf("Not a perfect pair");
        }
    }
    return 0;
}


