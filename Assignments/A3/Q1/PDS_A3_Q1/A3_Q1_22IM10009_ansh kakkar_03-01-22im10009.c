#include<stdio.h>
int main()
{
    int a1,b1,c1,d1,e1,p=-1,q=-1,r=-1,sum;
    printf("enter the value of integer 1-");
    scanf("%d",&a1);
    printf("enter the value of integer 2-");
    scanf("%d",&b1);
    printf("enter the value of integer 3-");
    scanf("%d",&c1);
    printf("enter the value of integer 4-");
    scanf("%d",&d1);
    printf("enter the value of integer 5-");
    scanf("%d",&e1);
    sum=(a1%2+b1%2+c1%2+d1%2+e1%2);
    if(sum==3)
    {
        printf("there are exactly three odd numbers");
         else if(a%2==1)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
                     else if(b%2==1)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
                     else if(c%2==1)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
                     else if(d%2==1)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
                     else if(e%2==1)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
                }
    printf("%d%d%d",p,q,r);

    if(sum==2)
    {
        printf("there are exactly three even numbers");
                 else if(a%2==0)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
            else if(b%2==0)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
            else if(c%2==0)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
            else if(d%2==0)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
            else if(e%2==0)
            {if (p==-1)p=a;
         else if(q==-1)q=a;
         else if(r==-1)r=a;
            }
            printf(%d%d%d",p,q,r);
    }
    return 0;







}

