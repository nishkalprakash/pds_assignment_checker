#include<stdio.h>
void main()
{
    int a,b,c,d,e,s;
    printf(" Enter five numbers:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);


        s=a%2+b%2+c%2+d%2+e%2;
        if (s==2)
            {
                if(a>=b,a>=c,a>=d,a>=e)
             {
                printf("Largest Number:\n %d",a);
             }
             else if(b>=a,b>=c,b>=d,b>=e)
             {
                printf("Largest Number:\n %d",b);
             }
              else if(c>=a,c>=b,c>=d,c>=e)
             {
                printf("Largest Number:\n %d",c);
             }
              else if(d>=a,d>=b,d>=c,d>=e)
             {
                printf("Largest Number:\n %d",d);
             }
              else
             {
                printf("Largest Number:\n %d",e);
             }

            }

         else if (s=3)

        {
            printf(" there will be three odd numbers");
        }
}
