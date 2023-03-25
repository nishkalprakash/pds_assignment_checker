#include<stdio.h>

int main()
{
    int a,b,c,d,e,min,maximum,medium,sum;
    printf("Enter the three numbers\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    sum=(a%2)+(b%2)+(c%2)+(d%2)+(e%2);
    if(sum=3)
    {
        if(a%2!=0 && b%2!=0 && c%2!=0 && d%2==0&& e%2==0)
        {
            if(a>b)
            {
                maximum=a;
                if(c>maximum)
                {
                    maximum=c;
                    medium=a;
                    min=b;
                }
                if(c<maximum)
                {
                    if(b<c)
                    {
                        maximum=a;
                        medium=c;
                        min=b;
                    }
                    if(b>c)
                    {
                        maximum=a;
                        medium=b;
                        min=c;
                    }

                }
            }
            if(b>a)
            {
                maximum=b;
                if(c>maximum)
                {
                    maximum=c;
                    medium=b;
                    min=c;
                }
                if(c<maximum)
                    if(c>a)
                    {


                        maximum=b;
                        medium=c;
                        min=a;
                    }
                if(c<a)
                {
                    maximum=b;
                    medium=a;
                    min=c;
                }

            }






        }
    }



    printf("acending order of odd number is %d %d %d",min,medium,maximum);


    return 0;
}
