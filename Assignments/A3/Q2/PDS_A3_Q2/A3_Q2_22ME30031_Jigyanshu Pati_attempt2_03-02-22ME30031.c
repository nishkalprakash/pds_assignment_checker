#include<stdio.h>
int main()
{
    int a, b,c;
    scanf("%d%d", &a,&b);
    if (a<0)
        {a=a*-1;
        }
    else
    {
    a=a;
    }
    if (b<0)
        {b=b*-1;
        }
    else
    {
    b=b;
    }

    if ((a<999&&a>100))
        {
         if ((b<999&&b>100)) {
                c=(a/100)+(((a%10)/100)*10)+(((a%100)%10)*100);
                if(b==c){
                    printf("perfect pair");
                }
                else {
                    printf("not a perfect pair");
                }

         }
         else
         {
           printf("wrong input");
         }
         }
         else if ((a<99&&a>10));
         {
         if ((b<99&&b>10) || (b>-99 &&b<10)){
            c=(a/10)+((a%10)*10);
            if (c==b){
                printf("perfect pair");
            }
            else {
                    printf("not a perfect pair");
                }
         }
        else
         {
           printf("wrong input");
         }

         }

return 0;
    }




