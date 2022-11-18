#include<stdio.h>
int main()
{
    int m1[4],m2[4],m3[4],m4[4],i,j,k,l,m,min;
    for (i=0; i<4; i++)
        scanf ("%d", &m1[i]);
    printf("\n");
    for (j=0; j<4; j++)
    {
        scanf ("%d", &m2[j]);
    }
    printf("\n");
    for (k=0; k<4; k++)
    {
        scanf ("%d", &m3[k]);
    }
    printf("\n");
    for (l=0; l<4; l++)
    {
        scanf ("%d", &m4[l]);
    }
    printf("\n");
    min=m1[1]+m2[1]+m3[1]+m4[1];
    for (i=0; i<10; i++)
    {
        for (j=0; j<10; j++)
        {
            for (k=0; k<10; k++)
            {
                for (l=0; l<10; l++)
                {
                    m=m1[i]+m2[j]+m3[k]+m4[l];

                }
            }
        }
if(m<min)
                    {
                        min=m;
                    }
    }
    printf("min cost is =%d",min);
}
