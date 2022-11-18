//Sarthak Gupta
//21IM10030
#include<stdio.h>
int main()
{
    int i,j,k,l;
    int m,a,b,c,d,e,num,count=1;
    int d1[2];
    for(i=0;i<2;i++)
    {
        scanf("%d",&d1[i]);
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                for(l=0;l<2;l++)
                {
                    for(m=0;m<2;m++)
                    {
                        a=d1[i];
                        b=d1[j];
                        c=d1[k];
                        d=d1[l];
                        e=d1[m];
                        num=10000*a+1000*b+100*c+10*d+e;
                        if(num%(d1[0]+d1[1])!=0)
                        {
                            printf("%d\n",num);
                        }
                    }
                }
            }
        }
    }
}