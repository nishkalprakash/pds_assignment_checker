/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include <stdio.h>

/*int generate(int c, int d)
{
    int num;
    for(int i=1; i<=2; i++)
    {
        if(i==1)
            d1=c;
        else
            d1=d;
    }
}*/

int main()
{
    int c,d;
    printf("Enter the two digits: ");
    scanf("%d %d", &c, &d);
    int num[100];
    int d1,d2,d3,d4,d5;
    int index=0;
    for(int i=1; i<=2; i++)
    {
        if(i==1)
            d1=c;
        else
            d1=d;
        for(int j=1; j<=2; j++)
        {
            if(j==1)
                d2=c;
            else
                d2=d;
            for(int k=1; k<=2; k++)
            {
                if(k==1)
                    d3=c;
                else
                    d3=d;
                for(int l=1; l<=2; l++)
                {
                    if(l==1)
                        d4=c;
                    else
                        d4=d;
                    for(int m=1; m<=2; m++)
                    {
                        if(m==1)
                            d5=c;
                        else    
                            d5=d;
                        num[index++]= d1*10000+d2*1000+d3*100+d4*10+d5;
                    }
                }
            }
        }
    }
    printf("Numbers: \n");
    for(int i=0; i<index; i++)
    {
        if(num[i] % (c+d) !=0)
            printf("%d\n", num[i]);
    }
    return 0;
}