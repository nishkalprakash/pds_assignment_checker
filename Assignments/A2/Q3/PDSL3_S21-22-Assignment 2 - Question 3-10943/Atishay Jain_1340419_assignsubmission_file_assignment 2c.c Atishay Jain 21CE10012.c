#include<stdio.h>
int main()
{
    int m1[4],m2[4],m3[4],m4[4],i,j,k,l,I,J,K,L,cost,min;

    printf("\nm1: \n" );
    for(i=0;i<4;i++)
        scanf(" %d",&m1[i]);

    printf("\nm2: \n" );
    for(i=0;i<4;i++)
        scanf(" %d",&m2[i]);

    printf("\nm3: \n" );
    for(i=0;i<4;i++)
        scanf("%d",&m3[i]);

    printf("\nm4: \n" );
    for(i=0;i<4;i++)
        scanf("%d",&m4[i]);

    min=m1[0]+m2[1]+m3[2]+m4[3];
    I=0;
    J=1;
    K=2;
    L=3;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            for(k=0;k<4;k++)
            {
                for(l=0;l<4;l++)
                {
                    if (i==l || j==l || k==l || i==k || j==k || i==j)
                       {}
                    else
                    {
                        cost=m1[i]+m2[j]+m3[k]+m4[l];
                        //printf("\n%d %d %d %d %d",i,j,k,l,cost);
                        if (cost<=min)
                        {
                            min=cost;
                            I=i;
                            J=j;
                            K=k;
                            L=l;
                        }
                    }
                }
            }
        }
    }

    printf("\nlowest cost is: %d\n",min);
    printf("machine 1->%d\n",I+1);
    printf("machine 2->%d\n",J+1);
    printf("machine 3->%d\n",K+1);
    printf("machine 4->%d\n",L+1);


}
