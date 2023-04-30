#include<stdio.h>
#include<math.h>
int primecheck (int i)
 {
     int a,b;
     for(a=2,b=0;a<i;a++)
     {
         if((i%a)==0)
            b++;
     }
     if(b>0)
        {
            return 0;
        }
     else
       {
            return 1;
       }
 }

int main()
{
    int n,a,b,c,d,e;
    printf("Enter a Natural number: ");
    scanf("%d",&n);
    if(n<4||(n%2)!=0)
        printf("-1");
    else
    {
        for(a=2,b=n-2;a<=n-2,b>=2;a++,b--)
        {
            c=primecheck(a);
            if(c==1)
            {
                d=primecheck(b);
                if(d==1)
                {
                    printf("%d, %d",a,b);
                    break;
                }
            }
        }
    }
    return 0;
}
